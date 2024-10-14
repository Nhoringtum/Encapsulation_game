#ifndef __RECT_H__
#define __RECT_H__
#include "customColor.h"
#include "customVector2.h"

class Rect
{
public:
	float m_h;
	float m_w;
	CustomVector2 m_pos;
	CustomColor m_color;

	Rect(CustomVector2 pos, float h, float w, CustomColor color = CustomColor());

	~Rect();
};

#endif
