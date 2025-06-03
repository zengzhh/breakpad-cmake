project(common)

# 创建一个静态库，包含所有源文件
set(_SRCS
    "windows/guid_string.cc"
    "windows/guid_string.h"
    "windows/http_upload.cc"
    "windows/http_upload.h"
    "windows/string_utils.cc"
)

# 常规-配置类型（静态库）
add_library(${PROJECT_NAME} STATIC ${_SRCS})

# C/C++-所有选项-附加选项
target_compile_options(${PROJECT_NAME} PUBLIC "/utf-8")