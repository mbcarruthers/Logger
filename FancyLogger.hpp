//
// Created by Mccain Carruthers on 1/31/19.
//

#ifndef OOP_LOGGING_EXERCISE_FANCYLOGGER_HPP
#define OOP_LOGGING_EXERCISE_FANCYLOGGER_HPP
#include <string>


class FancyLogger {
public:
    FancyLogger() = default;

    virtual void log_info( std::string const& message ) = 0;
    virtual void log_warning( std::string const& message ) = 0;
    virtual void log_error( std::string const& message ) = 0;

    virtual ~FancyLogger() = default;
};


#endif //OOP_LOGGING_EXERCISE_FANCYLOGGER_HPP
