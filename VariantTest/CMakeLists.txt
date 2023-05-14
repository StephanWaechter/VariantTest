# CMakeList.txt : CMake project for VariantTest, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (VariantTest "VariantTest.cpp" "VariantTest.h")
target_link_libraries(VariantTest Objects Drawing)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET VariantTest PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
