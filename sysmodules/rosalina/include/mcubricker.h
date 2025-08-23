#ifndef MCUBRICKER_H_
#define MCUBRICKER_H_

#include "utils.h"
#include "csvc.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <3ds.h>
#include "menu.h"

typedef struct
{
    u32 ani;
    u8 r[32];
    u8 g[32];
    u8 b[32];
} RGBLedPattern;

int ledmulticolor(void);

#endif
