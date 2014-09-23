#include <iot-os.h>
#include "rsa.h"
#include "debug.h"

/* RSA start */
volatile uint32_t * g_rsa_start = (uint32_t *) 0x20006000;

static inline void hardware_init(void)
{
    /* Enable clocks for peripherals */
    CMU->CTRL |= (CMU_CTRL_HFLE | CMU_CTRL_HFXOBUFCUR_BOOSTABOVE32MHZ);
    CMU->OSCENCMD =  CMU_OSCENCMD_HFXOEN;
    CMU->HFCORECLKDIV = CMU_HFCORECLKDIV_HFCORECLKLEDIV;
    CMU->HFPERCLKDIV = CMU_HFPERCLKDIV_HFPERCLKEN;
    CMU->HFPERCLKEN0 |= CMU_HFPERCLKEN0_GPIO;

    /* Set calibration for 48MHz crystal */
    CMU->HFRCOCTRL = CMU_HFRCOCTRL_BAND_28MHZ |
        ((DEVINFO->HFRCOCAL1 & _DEVINFO_HFRCOCAL1_BAND28_MASK)
        >> _DEVINFO_AUXHFRCOCAL1_BAND28_SHIFT);
    while(!(CMU->STATUS & CMU_STATUS_HFRCORDY));
    /* WS2 set in uVisor - MSC access prohibited due to security reasons
     * FIXME: add system-register-level ACL's by adding SVC command */
    /* MSC->READCTRL = (MSC->READCTRL & ~_MSC_READCTRL_MODE_MASK)|MSC_READCTRL_MODE_WS2; */
    CMU->CMD = CMU_CMD_HFCLKSEL_HFXO;

    /* Enable output */
    DEBUG_init();
}

void main_entry(void)
{
    dprintf("[unprivileged entry!]");

    /* SVC test calls */
    __SVC0(1);
    __SVC0(2);
    __SVC1(3,0x11111111);
    __SVC2(4,0x11111111,0x22222222);
    __SVC3(5,0x11111111,0x22222222,0x33333333);
    __SVC4(6,0x11111111,0x22222222,0x33333333,0x44444444);

    /* initialize hardware */
    hardware_init();

    dprintf("hardware initialized, running main loop...\n");

    while(1)
    {
        /* RSA dummy - rsa operation */
        if(*g_rsa_start == 4)
        {
            dprintf("\nStarting RSA context switch:\n\r");
            dprintf("Returned value: 0x%x\n\r", rsa(0xfeed));
            dprintf("Back in box!\n\n\r");
            *g_rsa_start = 0;
        }

        DEBUG_TxByte('X');
    }
}
