//
// Created by Mccain Carruthers on 1/31/19.
//

#ifndef OOP_LOGGING_EXERCISE_CONSOLELOGGER_HPP
#define OOP_LOGGING_EXERCISE_CONSOLELOGGER_HPP
#include "Logger.hpp"


class ConsoleLogger : public Logger {
public:
    ConsoleLogger() = default;

    void log_message( std::string const& message ) override;
};


#endif //OOP_LOGGING_EXERCISE_CONSOLELOGGER_HPP
