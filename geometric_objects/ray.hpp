#include <geometric_object.hpp>
#ifndef go_ray
#define go_ray

template <int lib>
class ray : public geometric_object<lib>
{
public:
	point<lib> a, b;
	ray () : a (0, 0), b (0, 0)
	{}
	ray (point<lib> _a, point<lib> _b = point (0,0)) : a (_a), b (_b)
	{}
	void draw ()
	{
		line (a, b).draw ();
	}
};

template <int lib>
ray<lib> refflect (ray<lib> r, line<lib> l)
{

}

#endif
