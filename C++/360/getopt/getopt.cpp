#include <iostream>
#include <unistd.h>
#include <string>
#include <iostream>
#include <string>

//Thread includes:
#include <errno.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

//Socket includes:
#include <arpa/inet.h>
#include <netinet/in.h>

using namespace std;
void test(int argc, char ** argv);

int main(int argc, char ** argv)
{
	test(argc, argv);

   	//Get URLs passed on the command line. if you want the next one, iterate through it by incrementing optind.
    	if (optind >= argc)
    	{
		exit(-1);
    	}
    	string url(argv[optind]);
}

void test(int argc, char ** argv)
{
 	// process command line options using getopt()
    	// see "man 3 getopt"
	int option;
	int threads;
	
    	while ((option = getopt(argc, argv, "n:p:")) != -1)
    	{
		cout << "whileloop: option: " << (char)option << endl;
		cout << "whileloop: optarg: " << optarg << endl;
		cout << "whileloop: optind: " << optind << endl;
		switch (option)
		{
			case 'p':
				cout << "p" << endl;
				break;
			case 'n':
	 	 		cout << "n" << endl;
	  			break;
			case '?':
				cout << "?" << endl;
		   		break;
			default:
		    		cout << "default" << endl;
		    		break;
		}
    	}
	cout << "option: " << option << endl;
	cout << "optind: " << optind << endl;
	cout << "argc: " << argc << endl;

	/* RESULTS


	getopt returns ? if:
		1) all command-line arguments have been parsed
		2) getopt() encounters an option with a missing argument. 
		   (and the first character in optstring is not ":")

	getopt returns : if:
		1) getopt() encounters an option with a missing argument. 
		   (and the first character in optstring _IS_ ":")

	KEY POINT!
	++++++++++
	If there are no more option characters, getopt() returns -1. Then optind is the index in argv of the first argv-element that is not an option.

	*/
}
