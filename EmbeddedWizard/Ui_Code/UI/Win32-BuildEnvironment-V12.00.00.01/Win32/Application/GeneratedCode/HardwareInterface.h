#ifndef HARDWARE_INTERFACE_H
#define HARDWARE_INTERFACE_H

#include "ewrte.h"

void HardwareInterface_Init(void);
XBool HardwareInterface_CheckLogin(XString password);

#endif