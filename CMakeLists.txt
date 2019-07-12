cmake_minimum_required(VERSION 3.14)
project(TileTransfer)
include(FetchContent)

set(CMAKE_CXX_STANDARD 20)

FetchContent_Declare(
  spdlog
  GIT_REPOSITORY https://github.com/gabime/spdlog.git
  GIT_TAG v1.x
)

FetchContent_MakeAvailable(spdlog)

# Compiler warning flags for Clang and GCC
set(${COMPILE_WARNINGS} $<$<OR:$<CXX_COMPILER_ID:GNU>,$<CXX_COMPILER_ID:Clang>>:-Wall>
                        $<$<OR:$<CXX_COMPILER_ID:GNU>,$<CXX_COMPILER_ID:Clang>>:-Wextra>
   )

add_subdirectory(src)
