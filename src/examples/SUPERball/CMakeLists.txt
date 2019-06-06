link_libraries(tgcreator controllers core)
set(CMAKE_BUILD_TYPE Debug)

add_executable(AppSUPERball
    T6Model.cpp
    AppSUPERball.cpp
    controllers/T6ZmqController.cpp
    controllers/T6TensionController.cpp
) 

# To compile a controller, add a line like the
# following inside add_executable:
#    controllers/T6TensionController.cpp
