# Create an executable target
add_executable(hello)

# Set the executable sources
target_sources(hello PUBLIC main.cpp)

# Link hello to shapes
target_link_libraries(hello PUBLIC shapes)