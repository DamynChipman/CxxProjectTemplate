# Use CTest
include(CTest)

# Use FetchContent (to get GoogleTest)
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.12.1
)
FetchContent_MakeAvailable(googletest)

# Use GoogleTest
include(GoogleTest)

# Set tests from .cpp files in testing directory
file(GLOB tests "./*.cpp")

# Remove GoogleTest main executable from tests
list(REMOVE_ITEM tests "./main.cpp")

# Iterate over test files and run them
foreach(file ${tests})
	set(name)
	get_filename_component(name ${file} NAME_WE)
	add_executable("${name}_tests" ${file} "./main.cpp")
    target_include_directories("${name}_tests" PUBLIC ${PROJECT_SOURCE_DIR}/include)
	target_link_libraries("${name}_tests" PUBLIC shapes gtest_main)
	gtest_discover_tests("${name}_tests")
endforeach()
