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
    src/mainwindow.cpp
    headers/mainwindow.h
    ui/mainwindow.ui
    headers/secwindow.h
    src/secwindow.cpp
    ui/secwindow.ui
    src/thirdwindow.cpp
    headers/thirdwindow.h
    ui/thirdwindow.ui
    src/forthwindow.cpp
    headers/forthwindow.h
    ui/forthwindow.ui
    src/fifthwindow.cpp
    headers/fifthwindow.h
    ui/fifthwindow.ui
    src/sixthwindow.cpp
    headers/sixthwindow.h
    ui/sixthwindow.ui
    src/seventhwindow.cpp
    headers/seventhwindow.h
    ui/seventhwindow.ui
    src/eighthwindow.cpp
    headers/eighthwindow.h
    ui/eighthwindow.ui
    src/ninthwindow.cpp
    headers/ninthwindow.h
    ui/ninthwindow.ui
    src/tenthwindow.cpp
    headers/tenthwindow.h
    ui/tenthwindow.ui
    src/eleventhwindow.cpp
    headers/eleventhwindow.h
    ui/eleventhwindow.ui
    src/twelfthwindow.cpp
    headers/twelfthwindow.h
    ui/twelfthwindow.ui
    src/thirteenthwindow.cpp
    headers/thirteenthwindow.h
    ui/thirteenthwindow.ui
    src/fourteenthwindow.cpp
    headers/fourteenthwindow.h
    ui/fourteenthwindow.ui
    src/fifteenthwindow.cpp
    headers/fifteenthwindow.h
    ui/fifteenthwindow.ui
    images.qrc
    ${TS_FILES}
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Detetive
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Detetive APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation

    qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
else()
    if(ANDROID)
        add_library(Detetive SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
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
