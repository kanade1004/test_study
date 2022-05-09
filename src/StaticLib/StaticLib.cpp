// StaticLib.cpp : スタティック ライブラリ用の関数を定義します。
//

#include "pch.h"
#include "framework.h"
#include "../include/StaticLib.h"


bool is_leap_year(int year)
{
	//4または400で割り切れるなら、うるう年
	//4または100で割り切れるなら、平年
	//そうでなければ、平年
	if ((year % 400) == 0)
	{
		return true;
	}
	if ((year % 100) == 0)
	{
		return false;
	}
	else if ((year % 4) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
