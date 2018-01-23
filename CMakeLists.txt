cmake_minimum_required(VERSION 3.9)
project(CodingX)

set(CMAKE_CXX_STANDARD 11)

set(001_TAppExtendedCollection_SOURCE_FILES

  App/TAppExtendedCollection/001_StringToInt/main.cpp

  Lib/TLibExtendedCollection/StringToInt.cpp
  Lib/TLibExtendedCollection/StringToInt.h)
add_executable(Ext_001_StringToInt ${001_TAppExtendedCollection_SOURCE_FILES})

set(001_TAppPlayground_SOURCE_FILES
  App/TAppPlayground/001_NatureOfStringAndChar/main.cpp
  )
add_executable(Play_001_NatureOfStringAndChar ${001_TAppPlayground_SOURCE_FILES})

set(002_TAppPlayground_source_files
  App/TAppPlayground/002_IntegerBoundary/main.cpp)
add_executable(Play_002_XIntegerBoundary ${002_TAppPlayground_source_files})
set(003_TAppPlayground_source
        App/TAppPlayground/003_DynamicMemoryAllocation/main.cpp)
add_executable(Play_003_DynamicMemo ${003_TAppPlayground_source})

set(002_ext_source_files

    Lib/TLibExtendedCollection/SinglyLinkedList.cpp
    Lib/TLibExtendedCollection/SinglyLinkedList.h

    Lib/TLibUtils/TypeDef.h

    Lib/TLibExceptions/OutOfRange.cpp
    Lib/TLibExceptions/OutOfRange.h

    App/TAppExtendedCollection/002_SinglyLinkedList/main.cpp)
add_executable(Ext_002_SinglyLinkedList ${002_ext_source_files})

set(001_TAppCodingInterview_Source_Files
        App/TAppCodingInterview/001_IsPalindrome/main.cpp
        )
add_executable(CI_001_isPalindrome App/TAppCodingInterview/001_IsPalindrome/main.cpp)