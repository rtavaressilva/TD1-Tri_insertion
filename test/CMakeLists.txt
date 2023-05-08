set(TEST_SOURCES test_tri_insertion.cpp ${PROJECT_SOURCE_DIR}/tri_insertion.hpp)

add_executable(
        test_tri_insertion.cpp
        ${TEST_SOURCES}
)

target_include_directories(test_tri_insertion.cpp PRIVATE ${PROJECT_SOURCE_DIR} )

target_link_libraries(
        test_tri_insertion.cpp
        gtest_main
        gtest
        pthread
)

include(GoogleTest)
gtest_discover_tests(test_tri_insertion.cpp)