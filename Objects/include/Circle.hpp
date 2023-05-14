#pragma once
#include "Object.hpp"
#include <iostream>
namespace Objects
{
	struct Circle : public BaseObject
	{
		double Radius;
	};
	inline std::ostream& operator<<(std::ostream& os, const Circle& c)
	{
		os << "Circle(" << c.Left << "/" << c.Top << " - " << "Radius: " << c.Radius << ")";
		return os;
	}
}