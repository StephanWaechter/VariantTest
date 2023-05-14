#pragma once
#include <variant>
#include <vector>

#include "Circle.hpp"
#include "Rectangle.hpp"

namespace Objects
{
	using Object = std::variant<
		Circle,
		Rectangle
	>;
	using ObjectVector = std::vector<Object>;

}