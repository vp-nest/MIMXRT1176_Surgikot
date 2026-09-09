#include "HardwareInterface.h"

void HardwareInterface_Init(void)
{
    /* Nothing required for the Windows simulation. */
}

XBool HardwareInterface_CheckLogin(XString password)
{
    static const XChar expectedPin[] =
    {
        '1', '2', '3', '4', 0
    };

    if (password == 0)
        return 0;

    return EwCompString(password, (XString)expectedPin) == 0;
}