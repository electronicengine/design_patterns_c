cmake_minimum_required(VERSION 2.8)

project(observer)
add_executable(${PROJECT_NAME} "main.c"
                                "observer.c"
                                "subject.c"
                                "listener1.c"
                                "listener2.c"
                                "trigger.c")
