project(MyCode)

file(GLOB_RECURSE
    SOURCES
    *.h
    *.cpp
)

add_library(${PROJECT_NAME} STATIC
    ${SOURCES}
)

target_include_directories(${PROJECT_NAME}
    PRIVATE include/mycode
)