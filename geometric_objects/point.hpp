#include <library_structure.hpp>
#ifndef point_t
#define point_t

template <library_t library>
class point : geometric_object
{
public:
	double x, y;
	static void (*draw)();
	
	point();
	point(double, double);
	~point();
	void setDrawFunc (void (*)());
};
#endif
