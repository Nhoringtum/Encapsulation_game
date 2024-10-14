#ifndef __CUSTOMCOLOR_H__
#define __CUSTOMCOLOR_H__

struct CustomColor
{
public:
	float m_r;
	float m_g;
	float m_b;
	float m_a;

	CustomColor(int r, int g, int b, int a);
	CustomColor();
	~CustomColor();
};

#endif
