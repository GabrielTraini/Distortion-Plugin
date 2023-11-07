/*
  ==============================================================================

    ArcotanSoftClipper.h
    Created: 27 Apr 2022 2:34:38pm
    Author:  gabg9

  ==============================================================================
*/

#pragma once
#include <corecrt_math_defines.h>
#include <cmath>

float ArcotanSoftClipper(float input, float alpha)

{
    return (2/ M_PI)*atan(input*alpha);
}
