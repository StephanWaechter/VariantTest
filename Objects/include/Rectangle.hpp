#pragma once
#include "Object.hpp"

namespace Objects
{
	struct Rectangle : public BaseObject
	{
		double Width;
		double Height;
	};

	inline std::ostream& operator<<(std::ostream& os, const Rectangle& r)
	{
		os << "Rectangle(" << r.Left << "/" << r.Top << " - " << r.Width << "/" << r.Height << ")";
		return os;
	}
}

