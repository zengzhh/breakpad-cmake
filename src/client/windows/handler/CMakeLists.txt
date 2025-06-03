project(exception_handler)

# 常规-配置类型（静态库）
set(_SRCS
    "exception_handler.cc"
    "exception_handler.h"
)
add_library("exception_handler" STATIC ${_SRCS})

# 链接器-输入-附加依赖项
target_link_libraries(${PROJECT_NAME}
    common
    crash_generation_server
)