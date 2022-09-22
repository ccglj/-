#pragma once
#include<iostream>
#include"Speed_saturation_warning.h"
void up_state(double Speed)
{
	if (Speed >= 9)
		Speed_saturation_warning(Speed);
}
