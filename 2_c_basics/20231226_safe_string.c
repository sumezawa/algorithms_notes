#include <string.h>
#include <stdio.h>

// safely reads and responds to a three-character word from the user.

int main(int argc, char **argv) {
    if (argc == 2) { // check for correct argument count
        char buff[4]; // c-strings have null terminators
        strncpy(buff, argv[1], sizeof(buff)); 
        // strcpy() is unsafe against buffer overflow attacks
        // sizeof(buffer) makes it overflow safe
        
        // buff == "cat" comparison doesn't work
        // use strcmp() instead

        if (!(strcmp(buff, "cat"))) {
            printf("meow"); // all C-strings are in double-quotes
        }
        else if (!(strcmp(buff, "dog"))) {
            printf("hola, mis amigos");
        }
        else {
            printf("jesse it's time to cook");
        }
    }
    else if (argc > 2) {
        printf("too many arguments supplied.\n");
    }
    else {
        printf("one argument expected.\n");
    }

    return 0;
}

