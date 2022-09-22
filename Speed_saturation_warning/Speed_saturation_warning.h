#pragma once
#include<iostream>
#include <windows.h>
#include"up_state.h"
void up_state(double Speed);
void Speed_saturation_warning(double Speed)
{
	{
		int n = 3;
		for (int i = 0; i < n; i++)//速度超过n次将进入LANDING模式
		{
			Sleep(1000);//每次检测间隔时间
			printf("动力饱和提示\n");
			if (Speed >= 9)
				continue;
			else
				up_state(Speed);
		}
		printf("进入LANDING模式");
		//LANDING();
	}
}
