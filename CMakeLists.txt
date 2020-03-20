cmake_minimum_required(VERSION "3.5.1")

project("UnitTest")

add_executable("${PROJECT_NAME}" "main.cpp")

install(TARGETS "${PROJECT_NAME}" DESTINATION bin) #${CMAKE_INSTALL_PREFIX}/bin
install(FILES "main.cpp" DESTINATION  src)          #$[CMAKE_INSTALL_PREFIX}/src

add_executable(foo main.cpp)
set_target_properties(foo PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS ON
)
