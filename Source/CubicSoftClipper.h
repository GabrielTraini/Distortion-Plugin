/*
  ==============================================================================

    Soft Clipper.h
    Created: 21 Jan 2022 3:56:51pm
    Author:  gabg9

  ==============================================================================
*/

#pragma once
#include <math.h>

float CubicSoftClipper(float input, float a)

{
    return input - a*1/3 * pow(input, 3);
}
