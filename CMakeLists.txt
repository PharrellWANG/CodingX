cmake_minimum_required(VERSION 3.9)
project(CodingX)

set(CMAKE_CXX_STANDARD 11)

set(001_SOURCE_FILES

  App/TAppExtendedCollection/StringToInt/main.cpp

  Lib/TLibExtendedCollection/StringToInt.cpp
  Lib/TLibExtendedCollection/StringToInt.h)
add_executable(Ext_001_StringToInt ${001_SOURCE_FILES})

set(002_SOURCE_FILES
  App/TAppPlayground/NatureOfStringAndChar/main.cpp
  )
add_executable(Play_001_NatureOfStringAndChar ${002_SOURCE_FILES})

set(003_source_files
  App/TAppPlayground/IntegerBoundary/main.cpp)
add_executable(Play_002_XIntegerBoundary ${003_source_files})
