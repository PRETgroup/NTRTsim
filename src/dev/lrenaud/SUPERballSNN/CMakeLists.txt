link_directories(${LIB_DIR})

message(STATUS "LIB_DIR: " ${LIB_DIR})

link_libraries(tgcreator
                Adapters
                Configuration
                AnnealEvolution
                util
                sensors
                core
                terrain
                tgOpenGLSupport
		yaml-cpp
		TensegrityModel
        zmq)

add_executable(AppSUPERballSNN
    AppSUPERballSNN.cpp
    LengthControllerYAMLZmq.cpp
)
