#include <geometric_object.hpp>
#include <math.h>
#ifndef go_point_t
#define go_point_t

template <int library>
class point : public geometric_object<library>
{
public:
	double x, y;
	static void (*draw)();
	

	point()
	{
		this->x = 0.0;
		this->y = 0.0;
	}

	point(double x, double y )
	{
		this->x = x;
		this->y = y;
	}

	void setDrawFunc (void (*func))
	{
		this->draw = func;
	}
	double distance (const point<library>& p1) const
	{
		double distance_x = abs(this->x - p1.x);
		double distance_y = abs(this->y - p1.y);
		return sqrt((distance_x * distance_x) + (distance_y * distance_y));
	}

};

template<int lib>
double distance (const point<lib>& p1, const point<lib>& p2)
{
    return p1.distance(p2);
}


template <int library>
bool operator == (const point<library>& point_1, const point<library>& point_2)
{
	return (fabs (point_1.x - point_2.x) <= point<library>::eps) && (fabs (point_1.y - point_2.y) <= point<library>::eps);
}
#endif
