
# 常规-配置类型（静态库）
set(_SRCS1
    "client_info.cc"
    "crash_generation_server.cc"
    "minidump_generator.cc"
    "client_info.h"
    "crash_generation_client.h"
    "crash_generation_server.h"
    "minidump_generator.h"
)
add_library("crash_generation_server" STATIC ${_SRCS1})

# 链接器-输入-附加依赖项
target_link_libraries("crash_generation_server"
    common
)

# 常规-配置类型（静态库）
set(_SRCS2
    "crash_generation_client.h"
    "crash_generation_client.cc"
    "crash_generation_server.h"
)
add_library("crash_generation_client" STATIC ${_SRCS2})