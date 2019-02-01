
#include "FileLogger.hpp"

FileLogger::FileLogger()
    : stream_("log.txt")
{}

FileLogger::FileLogger( std::string file_path ) : stream_( file_path ) {}


void FileLogger::log_message( std::string const& message )  {
    stream_ << message << "\n";
}

void FileLogger::log_info( std::string const& message ) {
    stream_ << "Info: " << message << "\n";
}

void FileLogger::log_warning( std::string const& message ) {
    stream_ << "Warning: " << message << "\n";
}

void FileLogger::log_error( std::string const& message ) {
    stream_ << "Error: " << message << "\n";
}

FileLogger::~FileLogger() {
    stream_.close();
}