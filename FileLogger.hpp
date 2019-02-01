

#ifndef OOP_LOGGING_EXERCISE_FILELOGGER_HPP
#define OOP_LOGGING_EXERCISE_FILELOGGER_HPP

#include "Logger.hpp"
#include "FancyLogger.hpp"

#include <fstream>

class FileLogger : public Logger , public FancyLogger {
public:
    FileLogger();
    FileLogger( std::string file_path );

    // Logger member function override
    void log_message(std::string const& message ) override;

    // FancyLogger member functions override
    void log_info( std::string const& message ) override;
    void log_error( std::string const& message ) override;
    void log_warning( std::string const& message ) override;
    ~FileLogger();
private:
    std::ofstream stream_;
};

#endif //OOP_LOGGING_EXERCISE_FILELOGGER_HPP
