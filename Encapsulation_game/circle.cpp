#include "circle.h"

Circle::Circle(CustomVector2 center, float ray) : m_center(center), m_ray(ray){};

Circle::Circle() : m_center(30.f, 30.f), m_ray(10.f){};

Circle::~Circle(){};