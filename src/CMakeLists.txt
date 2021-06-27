cmake_minimum_required(VERSION 3.17)


add_executable(25TASK_2 main.cpp ram.cpp kbd.cpp cpu.cpp disk.cpp gpu.cpp ${My_Dir}/headers.h)


target_include_directories(25TASK_2 PUBLIC ${My_Dir})