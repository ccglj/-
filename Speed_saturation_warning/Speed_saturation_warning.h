#pragma once
#include<iostream>
#include <windows.h>
#include"up_state.h"
void up_state(double Speed);
void Speed_saturation_warning(double Speed)
{
	{
		int n = 3;
		for (int i = 0; i < n; i++)//�ٶȳ���n�ν�����LANDINGģʽ
		{
			Sleep(1000);//ÿ�μ����ʱ��
			printf("����������ʾ\n");
			if (Speed >= 9)
				continue;
			else
				up_state(Speed);
		}
		printf("����LANDINGģʽ");
		//LANDING();
	}
}
