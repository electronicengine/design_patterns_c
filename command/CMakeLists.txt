cmake_minimum_required(VERSION 2.8)

project(command)
add_executable(${PROJECT_NAME} "main.c"
                                "command.c"
                                "command1.c"
                                "command2.c"
                                "subject.c"
                                "client.c"
                                "commander.c")
