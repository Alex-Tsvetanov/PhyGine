#ifndef geometric_object_t
#define geometric_object_t

template <int library>
/*abstract*/ class geometric_object
{
public:
	static constexpr double eps = (double)0.000001; 
	virtual void draw ();
};
#endif
