#include "include/drawing.hpp"
#include <iostream>

void Drawing::draw(Objects::Circle const& circle, Drawing::Color color)
{
	std::cout << "Drawing: " << circle << " - " << color << std::endl;
}
