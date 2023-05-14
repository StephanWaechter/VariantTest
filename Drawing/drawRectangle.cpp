#include "include/drawing.hpp"
#include <iostream>

void Drawing::draw(Objects::Rectangle const& rectangle, Drawing::Color color)
{
	std::cout << "Drawing: " << rectangle << " - " << color << std::endl;
}
