#include <geometric_object.hpp>
#include <point.hpp>
#ifndef go_segment_t
#define go_segment_t

template <int library>
class segment : public geometric_object<library>
{
public:
	point<library> A, B;
	static void (*draw)();
	
	segment()
	{
		this->A = point<library> ();
		this->B = point<library> ();
	}

	segment(point<library> A, point<library> B)
	{
		this->A = A;
		this->B = B;
	}

	void setDrawFunc (void (*func))
	{
		this->draw = func;
	}

	decltype (A.x) length ()
	{
		return distance (A, B);
	}	
};

template <int library>
inline bool operator == (const segment<library>& segment_1, const segment<library>& segment_2)
{
	return 
		(segment_1.A == segment_2.A && segment_1.B == segment_2.B) or
		(segment_1.A == segment_2.B && segment_1.B == segment_2.A)
		;
}
#endif
