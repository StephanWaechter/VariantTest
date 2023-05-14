#pragma once
#include <Objects.hpp>
namespace Drawing
{
	enum  class Color
	{
		Red,
		Green,
		Blue
	};
	inline std::ostream& operator<<(std::ostream& os, const Color& c)
	{
		switch (c)
		{
		case Color::Red:
			os << "Red";
			break;
		case Color::Green:
			os << "Green";
			break;
		case Color::Blue:
			os << "Blue";
			break;
		}
		return os;
	}
	void draw(Objects::Circle const& circle, Color color);
	void draw(Objects::Rectangle const& rectangle, Color color);
}