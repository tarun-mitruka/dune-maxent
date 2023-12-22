cmake_minimum_required(VERSION 3.16)
project(
        dune-maxent
        VERSION 0.1.1
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

#option(DUNE_ENABLE_PYTHONBINDINGS "Enable Python bindings" ON)
option(ADD_SANDBOX_TARGET "Add sandbox target" ON)
option(DUNE_PYTHON_ALLOW_GET_PIP "Allow dune-common to install pip into venv"
        ON)
add_definitions(-DBUILD_SHARED_LIBS=1)
if(NOT
(dune-common_DIR
        OR dune-common_ROOT
        OR "${CMAKE_PREFIX_PATH}" MATCHES ".*dune-common.*"))
    string(REPLACE  ${PROJECT_NAME} dune-common dune-common_DIR
      ${PROJECT_BINARY_DIR})
endif()

#find dune-common and set the module path
find_package(dune-common REQUIRED)
list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/modules"
  ${dune-common_MODULE_PATH})

#include the dune macros
include(DuneMacros)

# start a dune project with information from dune.module
dune_project()

dune_enable_all_packages()

add_subdirectory(dune)
add_subdirectory(doc)
if(ADD_SANDBOX_TARGET)
    add_subdirectory(sandbox)
endif()
add_subdirectory(cmake)
#add_subdirectory(doc)

# finalize the dune project, e.g. generating config.h etc.
finalize_dune_project(GENERATE_CONFIG_H_CMAKE)
