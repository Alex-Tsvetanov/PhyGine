#include <geometric_object.hpp>
#include <point.hpp>
#ifndef go_line_t
#define go_line_t

template <int library>
class line : public geometric_object<library>
{
public:
	point<library> A, B;
	static void (*draw)();
	
	line()
	{
		this->A = point ();
		this->B = point ();
	}

	line(point A, point B)
	{
		this->A = A;
		this->B = B;
	}

	void setDrawFunc (void (*func))
	{
		this->draw = func;
	}
	
	bool operator == (const line<library>& line_1, const line<library>& line_2) const
	{
		decltype (A.x) delta1x = line_1.B.x - line_1.A.x,
		               delta1y = line_1.B.y - line_1.A.y,
		               delta2x = line_2.B.x - line_2.A.x,
		               delta2y = line_2.B.y - line_2.A.y,
		return 
			fabs ((delta1x * delta1x) / (delta1x * delta1x + delta1y * delta1y) -
			(delta2x * delta2x) / (delta2x * delta2x + delta2y * delta2y)) < eps;
			;
	}
};
#endif

