// VariantTest.cpp : Defines the entry point for the application.
//

#include "VariantTest.h"
#include "Drawer.hpp"
#include <Objects.hpp>

using namespace Objects;
using namespace VariantTest;

int main() {
    ObjectVector objects = {
        Circle{2.0,1.0,5.0},
        Rectangle{10.0,10.0,2.0,2.5},
        Rectangle{50.0,10.0,2.0,2.5}
    };

    for (auto const& obj : objects)
    {
        std::visit(Drawer<Drawing::Color::Red>{}, obj);
    }

}