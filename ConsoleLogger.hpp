//
// Created by Mccain Carruthers on 1/31/19.
//

#ifndef OOP_LOGGING_EXERCISE_CONSOLELOGGER_HPP
#define OOP_LOGGING_EXERCISE_CONSOLELOGGER_HPP
#include "Logger.hpp"
#include "FancyLogger.hpp"

class ConsoleLogger : public Logger , public FancyLogger {
public:
    ConsoleLogger() = default;

    // Logger override member function
    void log_message( std::string const& message ) override;

    // FancyLogger override member functions
    void log_info( std::string const& message ) override;
    void log_warning( std::string const& message ) override;
    void log_error( std::string const& message ) override;

};


#endif //OOP_LOGGING_EXERCISE_CONSOLELOGGER_HPP
