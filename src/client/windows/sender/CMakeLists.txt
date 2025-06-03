project(crash_report_sender)

# 常规-配置类型（静态库）
set(_SRCS
    "crash_report_sender.cc"
    "crash_report_sender.h"
)
add_library(${PROJECT_NAME} STATIC ${_SRCS})

# 链接器-输入-附加依赖项
target_link_libraries(${PROJECT_NAME}
    common
)