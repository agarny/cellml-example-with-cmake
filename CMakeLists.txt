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

# Machine directory

IF(WIN32)
    SET(MACHINE_DIR windows/x86)
ELSEIF(APPLE)
    SET(MACHINE_DIR macosx)
ELSE()
    SET(MACHINE_DIR linux/${BUILD_DIR})
ENDIF()

# CellML include directory

INCLUDE_DIRECTORIES(
    cellml/inc/${MACHINE_DIR}
)

# Build the CellML program

ADD_EXECUTABLE(${PROJECT_NAME} WIN32 MACOSX_BUNDLE
    ${SOURCES}
)

# CellML program dependencies

SET(CELLML_LIBRARY_FILE ${CMAKE_SOURCE_DIR}/cellml/lib/${MACHINE_DIR}/libcellml${CMAKE_SHARED_LIBRARY_SUFFIX})

TARGET_LINK_LIBRARIES(${PROJECT_NAME}
    ${CELLML_LIBRARY_FILE}
)

# Copy the CellML library to the build directory

IF(WIN32)
    ADD_CUSTOM_COMMAND(TARGET ${PROJECT_NAME} POST_BUILD
                       COMMAND ${CMAKE_COMMAND} -E copy ${CELLML_LIBRARY_FILE} ${CMAKE_BINARY_DIR})
ELSEIF(APPLE)
    ADD_CUSTOM_COMMAND(TARGET ${PROJECT_NAME} POST_BUILD
                       COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/${PROJECT_NAME}.app/Contents/PlugIns)

    ADD_CUSTOM_COMMAND(TARGET ${PROJECT_NAME} POST_BUILD
                       COMMAND ${CMAKE_COMMAND} -E copy ${CELLML_LIBRARY_FILE} ${CMAKE_BINARY_DIR}/${PROJECT_NAME}.app/Contents/PlugIns)

    ADD_CUSTOM_COMMAND(TARGET ${PROJECT_NAME} POST_BUILD
                       COMMAND install_name_tool -change libcellml${CMAKE_SHARED_LIBRARY_SUFFIX}
                                                         @executable_path/../PlugIns/libcellml${CMAKE_SHARED_LIBRARY_SUFFIX}
                                                         ${CMAKE_BINARY_DIR}/${PROJECT_NAME}.app/Contents/MacOS/${PROJECT_NAME})
ELSE()
    ADD_CUSTOM_COMMAND(TARGET ${PROJECT_NAME} POST_BUILD
                       COMMAND ${CMAKE_COMMAND} -E copy ${CELLML_LIBRARY_FILE} ${CMAKE_BINARY_DIR})
ENDIF()
