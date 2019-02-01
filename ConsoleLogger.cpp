//
// Created by Mccain Carruthers on 1/31/19.
//

#include "ConsoleLogger.hpp"
#include <iostream>


void ConsoleLogger::log_message( std::string const& message ) {
    std::cout << message << "\n";
}

void ConsoleLogger::log_info( std::string const& message ) {
    std::clog << "Info: " << message << "\n";
}

void ConsoleLogger::log_warning( std::string const& message ) {
    std::cerr << "Warning: " << message << "\n";
}

void ConsoleLogger::log_error( std::string const& message ) {
    std::cerr << "Error: " << message << "\n";
}