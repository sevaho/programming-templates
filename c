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

#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

// -----------------------------------------------------------------------------------------------------------------------------
// GLOBAL
// -----------------------------------------------------------------------------------------------------------------------------

#define CONSTANT 100

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
                printf("%s\n", optarg);
                break;

            case 'b':
                printf("%s\n", optarg);
                break;

        }

    }
    
    return 0;

}
