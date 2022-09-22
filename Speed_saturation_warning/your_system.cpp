#include<iostream>
#include"up_state.h"
int main()
{
	int state=1;
	double Speed=9;
	switch (state)//模拟你的系统状态
	{
	case 1:up_state(Speed); break;
	//case 2:LANDING(); break;
	//case 3:others state();
	}
}
