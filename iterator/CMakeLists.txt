cmake_minimum_required(VERSION 2.8)

project(iterator)
add_executable(${PROJECT_NAME} "main.c"
                                "period1.c"
                                "period2.c"
                                "period3.c"
                                "time_period.c"
                                "iterator.c"
                                "time_period_list.c")
