#ifndef __CUSTOMVECTOR2_H__
#define __CUSTOMVECTOR2_H__
#include <iostream>

struct CustomVector2
{
public:
	float m_x;
	float m_y;

	CustomVector2();
	CustomVector2(float x, float y);

	void setXY(float x, float y);
	float getX();
	float getY();
};

#endif
