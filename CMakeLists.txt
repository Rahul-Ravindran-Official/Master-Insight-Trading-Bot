# cmake_minimum_required(VERSION <specify CMake version here>)
project(T2)

set(CMAKE_CXX_STANDARD 98)

add_executable(
        T2 main.cpp
        Headers/H_Master_Insight_Bot.h
        Headers/H_Trade_Operation.h
        Headers/H_Trade_Entry.h
        Headers/H_Trade_Exit.h
        Headers/H_Trailing_SL_TP.h
        Sources/Master_Insight_Bot.cpp
        Enums/E_BHS.cpp
        Enums/E_BBHSS.cpp
        Structs/S_Order.cpp
        Structs/S_Ticket.cpp
        Headers/H_MQL_Functions.h
        Sources/Trade_Entry.cpp
        Headers/Indicator_Compositioners/H_Potential_Trade_Entry_Detector.h
        Enums/E_Risk_Appetite.cpp
)