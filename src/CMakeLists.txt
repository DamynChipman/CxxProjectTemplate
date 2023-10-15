# Create library target
add_library(shapes)

# Set the library include directory
target_include_directories(shapes PUBLIC ${CMAKE_SOURCE_DIR}/include)

# Set the library sources
target_sources(shapes PUBLIC Shape.cpp Circle.cpp Rectangle.cpp)
