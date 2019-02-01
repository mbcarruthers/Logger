//
// Created by Mccain Carruthers on 1/31/19.
//

#include "ConsoleLogger.hpp"
#include <iostream>


void ConsoleLogger::log_message( std::string const& message ) {
    std::clog << message << "\n";
}