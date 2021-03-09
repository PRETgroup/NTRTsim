link_directories(${LIB_DIR})

message(STATUS "LIB_DIR: " ${LIB_DIR})

link_libraries(tgcreator
                util
                sensors
                core    
                terrain 
                tgOpenGLSupport
                yaml-cpp
                TensegrityModel
                zmq)

add_executable(AppHorizontalBar
    AppHorizontalBar.cpp
    CyclicController.cpp
    PidController.cpp
    ZmqInterface.cpp
) 

add_executable(AppDoubleSwing
    AppDoubleSwing.cpp
    ZmqInterface.cpp
) 

add_executable(AppHangingBar
    AppHangingBar.cpp
    ZmqInterface.cpp
    HangingMarkers.cpp
) 

add_executable(AppRollingCylinder
    AppRollingCylinder.cpp
    ZmqInterface.cpp
) 

file(GLOB_RECURSE SRCS RollingCylinderNetwork/*.c CylinderStringsNetwork/*.c)
include_directories(.)
link_libraries(ncurses)
add_executable(AppRollingCylinderNengo
    AppRollingCylinderNengo.cpp
    NengoController.cpp
    ${SRCS}
) 

add_executable(AppStringTest
    AppStringTest.cpp
) 