#include <point.cpp>
#include <library_structure.hpp>
#include <string>

#ifndef triangle_t
#define triangle_t
template <library_t library>
class triangle : geometric_object
{
private:
	point<library> point_1, point_2, point_3;
public:
	triangle();
	triangle(point<library>, point<library>, point<library>);
	triangle(double, double, double, double, double, double);
	~triangle();
	double area();
};
#endif
