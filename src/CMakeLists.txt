add_library(${PROJECT_NAME})

target_sources(${PROJECT_NAME} PRIVATE
            DadorEngine.cpp
            Window.cpp
            )

target_include_directories(${PROJECT_NAME} PRIVATE 
            ${CMAKE_CURRENT_SOURCE_DIR}/../include/
            )

target_link_libraries(${PROJECT_NAME} PRIVATE extern

            )