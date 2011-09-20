PROJECT(CellML)

# Minimum version of CMake required

CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

# Files that make up the CellML program

SET(SOURCES
    src/main.cpp
)

# Whether we are building for 32-bit or 64-bit

IF(CMAKE_SIZEOF_VOID_P EQUAL 8)
    SET(BUILD_DIR x64)
ELSE()
    SET(BUILD_DIR x86)
ENDIF()

# CellML include directory

IF(WIN32)
    INCLUDE_DIRECTORIES(
        cellml/inc/windows/x86
    )
ELSEIF(APPLE)
    INCLUDE_DIRECTORIES(
        cellml/inc/macosx
    )
ELSE()
    INCLUDE_DIRECTORIES(
        cellml/inc/linux/${BUILD_DIR}
    )
ENDIF()


# Build the CellML program

ADD_EXECUTABLE(${PROJECT_NAME} WIN32 MACOSX_BUNDLE
    ${SOURCES}
)

# CellML program dependencies

IF(WIN32)
    TARGET_LINK_LIBRARIES(${PROJECT_NAME}
        ${CMAKE_SOURCE_DIR}/cellml/lib/windows/x86/libcellml.dll.a
    )
ELSEIF(APPLE)
    TARGET_LINK_LIBRARIES(${PROJECT_NAME}
        ${CMAKE_SOURCE_DIR}/cellml/lib/macosx/libcellml.dylib
    )
ELSE()
    TARGET_LINK_LIBRARIES(${PROJECT_NAME}
        ${CMAKE_SOURCE_DIR}/cellml/lib/linux/${BUILD_DIR}/libcellml.so
    )
ENDIF()

# Copy the CellML library to the build directory

IF(WIN32)
    ADD_CUSTOM_COMMAND(TARGET ${PROJECT_NAME} POST_BUILD
                       COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/cellml/lib/windows/x86/libcellml.dll ${CMAKE_BINARY_DIR})
ELSEIF(APPLE)
    ADD_CUSTOM_COMMAND(TARGET ${PROJECT_NAME} POST_BUILD
                       COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/${PROJECT_NAME}.app/Contents/PlugIns)

    ADD_CUSTOM_COMMAND(TARGET ${PROJECT_NAME} POST_BUILD
                       COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/cellml/lib/macosx/libcellml.dylib ${CMAKE_BINARY_DIR}/${PROJECT_NAME}.app/Contents/PlugIns)

    ADD_CUSTOM_COMMAND(TARGET ${PROJECT_NAME} POST_BUILD
                       COMMAND install_name_tool -change libcellml.dylib
                                                         @executable_path/../PlugIns/libcellml.dylib
                                                         ${CMAKE_BINARY_DIR}/${PROJECT_NAME}.app/Contents/MacOS/${PROJECT_NAME})
ELSE()
    ADD_CUSTOM_COMMAND(TARGET ${PROJECT_NAME} POST_BUILD
                       COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/cellml/lib/linux/${BUILD_DIR}/libcellml.so ${CMAKE_BINARY_DIR})
ENDIF()
