//filename: InRectangle.c
//
//description:returns 1 if a point is in the rectangle, 0 if it is not
//
//author: Karman Sidhu
//date: june 2022

#include<stdio.h>
#define POINTS 2
#define CORNERS 4

int InRectangle(float pt[POINTS], float rect[CORNERS])
{
	float rect2[CORNERS];
	for(int i = 0; i < CORNERS; i++)
	{
		rect2[i] = rect[i];
	}
	
	float temp = 0;
	if(rect2[0] > rect2[2])
	{
		temp = rect2[2];
		rect2[2] = rect2[0];
		rect2[0] = temp;
	}
	
	if(rect2[1] > rect2[3])
	{
		temp = rect2[3];
		rect2[3] = rect2[1];
		rect2[1] = temp;
	}
	
	
	
	if((pt[0] >= rect2[0] && pt[0] <= rect2[2]) && (pt[1] >= rect2[1] && pt[1] <= rect2[3]))
	{
		return 1;
	}
	
	else
	{
		return 0;
	}
	
}
