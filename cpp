// -----------------------------------------------------------------------------------------------------------------------------
// GENERAL
// -----------------------------------------------------------------------------------------------------------------------------
//
// author: Sebastiaan Van Hoecke
// mail: sebastiaan@sevaho.io
//
// NOTE:
//
// -----------------------------------------------------------------------------------------------------------------------------

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <getopt.h>

using namespace std;

// -----------------------------------------------------------------------------------------------------------------------------
// GLOBAL
// -----------------------------------------------------------------------------------------------------------------------------

#define CONSTANT 100

// -----------------------------------------------------------------------------------------------------------------------------
// CLASSES
// -----------------------------------------------------------------------------------------------------------------------------

class Main {

    private:

        string arg0;
        string arg1;

    public:

        Main (string arg) {
        
            this->arg0 = arg;

        
        }

        int print (string arg) {

            try {

                this->arg1 = arg;

                cout << "argument1: " << this->arg1 << endl;

            } catch (exception const& e) {

                cout << "There was an error: " << e.what() << endl;
                return 1;

            }

            return 0;
        
        } 

};

// -----------------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
// -----------------------------------------------------------------------------------------------------------------------------

void usage () {

    const char* usage =
    "Usage: app [OPTIONS]... [ARGS]...\n"
    "\n"
    "   description\n"
    "\n"
    "OPTIONS:\n"
    "\n"
    "   -h, --help       display the help and exit\n"
    "\n"
    "EXAMPLES:\n"
    "\n"
    "NOTE:\n"
    "\n";

    fprintf(stdout, "%s", usage);

}

// -----------------------------------------------------------------------------------------------------------------------------
// MAIN
// -----------------------------------------------------------------------------------------------------------------------------

int main (int argc, char *argv[]) {

    Main main("arg");

    static struct option long_options[] = {

        {"help", no_argument, NULL, 'h'},

    };

    while (1) {
    
        int option_index = 0;
        int option = getopt_long(argc, argv, "a:b:h", long_options, &option_index);

        if (option == -1) {

            break;

        }

        switch (option) {

            case 'h':
                usage();
                exit(0);
                break;

            case 'a':
                main.print(optarg);
                break;

            case 'b':
                main.print(optarg);
                break;

        }

    }

	return 0;

}
