#include <library_structure.hpp>
#ifndef segment_t
#define segment_t

template <library_t library>
class segment : geometric_object
{
public:
	point<library> A, B;
	static void (*draw)();
	
	segment();
	segment(double, double);
	~segment();
	void setDrawFunc (void (*)());
};
#endif
