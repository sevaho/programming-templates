#include <stdio.h>

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

// -----------------------------------------------------------------------------------------------------------------------------
// VARIABLES
// -----------------------------------------------------------------------------------------------------------------------------

#define CONSTANT 100

// -----------------------------------------------------------------------------------------------------------------------------
// MAIN
// -----------------------------------------------------------------------------------------------------------------------------

int main (int argc, char *argv[]) {

	if (argc < 2) {

		printf("%s\n", "Pass 1 argument");

	} else {

		printf("%s\n", argv[1]);

	}
	
	return 0;

}
