
#include "FileLogger.hpp"
#include "ConsoleLogger.hpp"

Logger& get_logger()
{
    // Change this to FileLogger once you have implemented that class
    static FileLogger l;
    return l;
}

void do_something()
{
    get_logger().log_message("Entered the do_something() function");
}

ConsoleLogger get_console() {
    static ConsoleLogger con;
    return con;
}

void do_console() {
    get_console().log_message("Entered the do_console() function");
}
int main( void )
{
    do_something();
    do_console();

    return 0;
}