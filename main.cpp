
#include "FileLogger.hpp"
#include "ConsoleLogger.hpp"

FileLogger& get_logger()
{
    // Change this to FileLogger once you have implemented that class
    static FileLogger l;
    return l;
}

void do_something()
{
    get_logger().log_message("Entered the do_something() function");
    get_logger().log_info("Logging information into the File Logger");
    get_logger().log_warning("TEST: Logging warning information");
    get_logger().log_error("TEST: Logging error information");


}

ConsoleLogger& get_console() {
    static ConsoleLogger con;
    return con;
}

void do_console() {
    get_console().log_message("Entered the do_console() function");
    get_console().log_info("Logging information to the Console Logger");
    get_console().log_warning("TEST: Logging warning information");
    get_console().log_error("TEST: Logging error information");
}

int main( void )
{
    do_something();
    do_console();

    return 0;
}