#include <arpa/inet.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>

#include <fstream>
#include <iostream>

using namespace std;

bool CommandLineHasDebugFlag(int argc, char ** argv);

int
main(int argc, char **argv)
{
    CommandLineHasDebugFlag(argc, argv);
    
    
}

/**
 * Returns true if the command-line arguments have the debug option, -d.
 * False otherwise.
 * 
 * @param argc the number of arguments
 * @param argv the commandline arguments in the usual char ** format
 */
bool CommandLineHasDebugFlag(int argc, char ** argv)
{
    // process command line options using getopt()
    // see "man 3 getopt"
    int option;
    while ((option = getopt(argc, argv, "d")) != -1)
    {
	switch (option)
	{
	case 'd':
	cout << "case D" << endl;
	    return true;
	case '?':
	    cout << "case ?" << endl;
		return false;
	default:
	    cout << "CommandLineHasDebugFlag: Unknown Error" << endl;
	    exit(EXIT_FAILURE);
	}
    }
	cout << "Do nothing" << endl;
    return false;
}
