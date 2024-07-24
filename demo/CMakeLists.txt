add_executable(DEMO)

target_sources(DEMO PRIVATE
            main.cpp
            )
target_include_directories(DEMO PRIVATE
            ${CMAKE_CURRENT_SOURCE_DIR}/../include/
            )
            
target_link_libraries(DEMO PRIVATE
            extern ${PROJECT_NAME}
            )