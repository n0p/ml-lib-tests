#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <cstdarg>
#define uint16_t u_int16_t // caguen arduino

float sigmoid (float x)
{
    return 1 / (1 + exp(x));
}
