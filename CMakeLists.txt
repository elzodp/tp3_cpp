#La version de CMake
cmake_minimum_required(VERSION 3.0)

#Noter projet est etiquete simulator_archi
project(simulator_archi)

#Inclusion de notre bibliotheque dans le processus de CMake
add_subdirectory(src)

# locate Gtest
enable_testing()
find_package(GTest REQUIRED)


#Notre executable
add_executable(MAIN main.cpp)
target_include_directories(MAIN PUBLIC include)

add_executable(TEST_MAIN Test.cpp)

target_link_libraries(MAIN PUBLIC Prob)
target_link_libraries(TEST_MAIN GTest::GTest GTest::Main Prob)

enable_testing()

add_test(probtest TEST_MAIN)
gtest_discover_tests(TEST_MAIN)
