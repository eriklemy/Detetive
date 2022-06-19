cmake_minimum_required(VERSION 3.5)

project(Detetive VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets LinguistTools)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets LinguistTools)

set(TS_FILES Detetive_pt_BR.ts)

set(PROJECT_SOURCES
    main.cpp
    headers.h
    ./mainwindow.cpp
    ./headers/mainwindow.h
    ./ui/mainwindow.ui
    ./headers/secwindow.h
    ./secwindow.cpp
    ./ui/secwindow.ui
    ./thirdwindow.cpp
    ./headers/thirdwindow.h
    ./ui/thirdwindow.ui
    ./forthwindow.cpp
    ./headers/forthwindow.h
    ./ui/forthwindow.ui
    ./fifthwindow.cpp
    ./headers/fifthwindow.h
    ./ui/fifthwindow.ui
    ./sixthwindow.cpp
    ./headers/sixthwindow.h
    ./ui/sixthwindow.ui
    ./seventhwindow.cpp
    ./headers/seventhwindow.h
    ./ui/seventhwindow.ui
    ./eighthwindow.cpp
    ./headers/eighthwindow.h
    ./ui/eighthwindow.ui
    ./ninthwindow.cpp
    ./headers/ninthwindow.h
    ./ui/ninthwindow.ui
    ./tenthwindow.cpp
    ./headers/tenthwindow.h
    ./ui/tenthwindow.ui
    ./eleventhwindow.cpp
    ./headers/eleventhwindow.h
    ./ui/eleventhwindow.ui
    ./twelfthwindow.cpp
    ./headers/twelfthwindow.h
    ./ui/twelfthwindow.ui
    ./thirteenthwindow.cpp
    ./headers/thirteenthwindow.h
    ./ui/thirteenthwindow.ui
    ./fourteenthwindow.cpp
    ./headers/fourteenthwindow.h
    ./ui/fourteenthwindow.ui
    ./fifteenthwindow.cpp
    ./headers/fifteenthwindow.h
    ./ui/fifteenthwindow.ui
    ./pathwindow.cpp
    ./headers/pathwindow.h
    ./ui/pathwindow.ui
    images.qrc
    ${TS_FILES}
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Detetive
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )

    qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
else()
    if(ANDROID)
        add_library(Detetive SHARED
            ${PROJECT_SOURCES}
        )
    else()
	add_executable(Detetive
            ${PROJECT_SOURCES}
        )
    endif()

    qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
endif()

target_link_libraries(Detetive PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_target_properties(Detetive PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Detetive)
endif()
