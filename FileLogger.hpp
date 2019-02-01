

#ifndef OOP_LOGGING_EXERCISE_FILELOGGER_HPP
#define OOP_LOGGING_EXERCISE_FILELOGGER_HPP

#include "Logger.hpp"

#include <fstream>

class FileLogger : public Logger {
public:
    FileLogger();
    FileLogger( std::string file_path );
    void log_message(std::string const& message ) override;
private:
    std::ofstream stream_;
};

#endif //OOP_LOGGING_EXERCISE_FILELOGGER_HPP
