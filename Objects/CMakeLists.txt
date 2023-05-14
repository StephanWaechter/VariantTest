# CMakeList.txt : CMake project for VariantTest, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_library(Objects INTERFACE)
target_include_directories(Objects INTERFACE
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>"
    "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Objects PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
