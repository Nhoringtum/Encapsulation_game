#ifndef __CIRCLE_H__
#define __CIRCLE_H__
#include "customVector2.h"

struct Circle
{
public:
	CustomVector2 m_center;
	float m_ray;

	Circle(CustomVector2 center, float ray);
	Circle();
	~Circle();
};

#endif
