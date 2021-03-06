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

set(000_have_a_try
        App/TAppPlayground/000_HaveATry/main.cpp
        App/TAppPlayground/000_HaveATry/main.cpp)
add_executable(play_000_have_a_try ${000_have_a_try})

set(001_TAppCodingInterview_Source_Files
        App/TAppCodingInterview/001_IsPalindrome/main.cpp
        )
add_executable(CI_001_isPalindrome App/TAppCodingInterview/001_IsPalindrome/main.cpp)

set(003_ArrayAndPointer
        App/TAppExtendedCollection/003_ArrayAndPointer/main.cpp)
add_executable(Ext_003_ArrayAndPointer ${003_ArrayAndPointer})

set(004_BaseConversion
        App/TAppExtendedCollection/004_BaseConversion/main.cpp
        Lib/TLibExtendedCollection/BinaryToDecimal.cpp
        Lib/TLibExtendedCollection/BinaryToDecimal.h
        Lib/TLibExtendedCollection/DecimalToAny.cpp
        Lib/TLibExtendedCollection/DecimalToAny.h Lib/TLibExceptions/NotBinary.cpp Lib/TLibExceptions/NotBinary.h Lib/TLibExtendedCollection/OctalToBinary.cpp Lib/TLibExtendedCollection/OctalToBinary.h)
add_executable(Ext_004_BaseConversion ${004_BaseConversion} )

set(005_TAPP_CI_DUPLICATION_IN_ARRAY
        App/TAppCodingInterview/005_DuplicationInArray/main.cpp Lib/TLibCodingInterview/DuplicationInArray.cpp Lib/TLibCodingInterview/DuplicationInArray.h App/TAppCppPrimerPlus/001_If/main.cpp App/TAppCppPrimerPlus/003_Not/main.cpp)
add_executable(ci_005_duplication_in_array ${005_TAPP_CI_DUPLICATION_IN_ARRAY})

set(006_ci Lib/TLibCodingInterview/MoreDuplicationInArray.cpp Lib/TLibCodingInterview/MoreDuplicationInArray.h App/TAppCodingInterview/006_MoreDuplicationInArray/main.cpp Lib/TLibExceptions/SimpleOutOfRange.cpp Lib/TLibExceptions/SimpleOutOfRange.h)
add_executable(ci_006_more_duplication_in_array ${006_ci})

set(007_ci App/TAppCodingInterview/007_SearchInMatrix/main.cpp)
add_executable(ci_007_search_in_2d_matrix ${007_ci})

set(004_playground_matrix_in_cpp Lib/TLibPlayground/MatrixInCpp.cpp Lib/TLibPlayground/MatrixInCpp.h App/TAppPlayground/004_BinarySearchInSortedMatrix/main.cpp)
add_executable(play_004_matrix ${004_playground_matrix_in_cpp})

set(008_ci App/TAppCodingInterview/008_SearchInPartiallySortedMatrix/main.cpp App/TAppCodingInterview/008_SearchInPartiallySortedMatrix/LibSearch.cpp App/TAppCodingInterview/008_SearchInPartiallySortedMatrix/LibSearch.h)
add_executable(ci_008_search_in_partially_sorted_matrix ${008_ci})

set(play_005_main_01 App/TAppPlayground/005_StringInCpp/01_Constructor.cpp)
add_executable(play_005_main_01 ${play_005_main_01})

set(play_005_main_02 App/TAppPlayground/005_StringInCpp/02_Getline.cpp)
add_executable(play_005_main_02 ${play_005_main_02})

set(ci_009_replace_blanks App/TAppCodingInterview/009_ReplaceBlanks/LibReplaceBlanks.cpp App/TAppCodingInterview/009_ReplaceBlanks/LibReplaceBlanks.h App/TAppCodingInterview/009_ReplaceBlanks/main.cpp)
add_executable(ci_009_replace_blanks ${ci_009_replace_blanks})

set(ci_010_merge_sorted_arrays App/TAppCodingInterview/010_MergeSortedArrays/LibMergeSortedArrays.cpp App/TAppCodingInterview/010_MergeSortedArrays/LibMergeSortedArrays.h App/TAppCodingInterview/010_MergeSortedArrays/main.cpp)
add_executable(ci_010_merge_sorted_arrays ${ci_010_merge_sorted_arrays})

set(TAppCppPrimerPlus_001_If App/TAppCppPrimerPlus/001_If/main.cpp)
add_executable(TAppCppPrimerPlus_001_If ${TAppCppPrimerPlus_001_If})

set(TAppCppPrimerPlus_002_IfElse App/TAppCppPrimerPlus/002_IfElse/main.cpp)
add_executable(TAppCppPrimerPlus_002_IfElse ${TAppCppPrimerPlus_002_IfElse})

set(TAppCppPrimerPlus_003_Not App/TAppCppPrimerPlus/003_Not/main.cpp)
add_executable(TAppCppPrimerPlus_003_Not ${TAppCppPrimerPlus_003_Not})