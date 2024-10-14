#include "customVector2.h"

CustomVector2::CustomVector2() : m_x(1), m_y(1){};
CustomVector2::CustomVector2(float x, float y) : m_x(x), m_y(y){};

void CustomVector2::setXY(float x, float y)
{
	this->m_x = x;
	this->m_y = y;

	std::cout << "Vector2 is setted by x = " << m_x << " and y = " << m_y << std::endl;
};

float CustomVector2::getX()
{
	return (this->m_x);
};

float CustomVector2::getY()
{
	return (this->m_y);
};