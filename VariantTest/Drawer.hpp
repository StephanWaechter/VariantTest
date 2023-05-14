#include <Objects.hpp>
#include <drawing.hpp>

namespace VariantTest
{
	template<Drawing::Color color>
	struct Drawer
	{
		void operator()(Objects::Circle const& circle)
		{
			draw(circle, color);
		}

		void operator()(Objects::Rectangle const& rectangle)
		{
			draw(rectangle, color);
		}
	};
}