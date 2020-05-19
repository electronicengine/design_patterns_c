cmake_minimum_required(VERSION 2.8)

project(chain_of_responsibilty)
add_executable(${PROJECT_NAME} "main.c"
                                "chain_base.c"
                                "handler1.c"
                                "handler2.c"
                                "handler3.c"
                                "starter.c")
