project(example)

file(GLOB_RECURSE _SRCS ./*.cpp ./*.h)

add_executable(${PROJECT_NAME}
    main.cpp
    ${_SRCS}
)

# 链接器-输入-附加依赖项
target_link_libraries(${PROJECT_NAME}
    common
    crash_generation_client
    crash_generation_server
    crash_report_sender
    exception_handler
)