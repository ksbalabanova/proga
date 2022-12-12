cmake_minimum_required (VERSION 3.8)

add_library (CMakeProject1 "CMakeProject1.cpp" "CMakeProject1.hpp" "Cat_mouse.cpp")
add_executable (CMakeProject1.test "CMakeProject1.hpp" "CMakeProject1.test.cpp" "Cat_mouse.cpp" "ballistika.cpp")
target_link_libraries(CMakeProject1.test CMakeProject1)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeProject1 PROPERTY CXX_STANDARD 20)
endif()

