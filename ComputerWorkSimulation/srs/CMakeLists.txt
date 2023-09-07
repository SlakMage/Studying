cmake_minimum_required(VERSION 3.25)


add_executable(ComputerWorkSimulation main.cpp cpu.cpp disk.cpp gpu.cpp kbd.cpp ram.cpp ${ALERT}/cpu.h ${ALERT}/disk.h ${ALERT}/gpu.h ${ALERT}/kbd.h ${ALERT}/ram.h)

target_include_directories(ComputerWorkSimulation PUBLIC alert)
