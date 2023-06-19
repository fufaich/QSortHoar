cmake_minimum_required(VERSION 3.26.4)

project(QSortHoar)

set(SOURCES
        main.cpp 
)       

set(Headers  
        QSortHoar.h
)

add_executable(QSortHoar ${SOURCES} ${Headers})
