
#include "FileLogger.hpp"

FileLogger::FileLogger()
    : stream_("log.txt")
{}

FileLogger::FileLogger( std::string file_path ) : stream_( std::move(file_path) ) {}


void FileLogger::log_message( std::string const& message )  {
    stream_ << message << "\n";
}