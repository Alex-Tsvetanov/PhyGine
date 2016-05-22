#include <library_structure.hpp>

#ifndef geometric_object_t
#define geometric_object_t

template <library_t library>
/*abstract*/ class geometric_object
{
public:
	virtual void draw ();
}
#endif
