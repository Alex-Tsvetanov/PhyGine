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
ray<lib> refflect_on_Xaxis (ray<lib> r, line<lib> l)
{
	ray<lib> ans;
	decltype(r.a.x) k = (-r.a.y)/(r.b.y-r.a.y);
	ans.a.y = 0;
	ans.a.x = r.a.x + (b.x - a.x) * k;
	ans.b.y = ans.a.y + (r.a.y - r.b.y);
	ans.b.x = ans.a.x - (r.a.x - r.b.x);
	return ans;
}

#endif
