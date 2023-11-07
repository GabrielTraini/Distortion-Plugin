/*
  ==============================================================================

    HardClipper.h
    Created: 27 Apr 2022 2:41:35pm
    Author:  gabg9

  ==============================================================================
*/

#pragma once

float HardClipper(float input, float threshold)
{
    if (input >= threshold)
        return threshold;
    
    else if (input <= -threshold)
        return -threshold;
    else
        return input;
}