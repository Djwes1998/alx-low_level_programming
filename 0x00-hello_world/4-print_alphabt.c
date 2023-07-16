#include <stdio.h>
/*
 * main aim is to print all in lowercase alphabets excepts 'q & e'
 *
 * return (0):successful
 */
int main() {
    char letter;
    
    for (letter = 'a'; letter <= 'z'; letter++) {
        if (letter != 'q' && letter != 'e') {
            putchar(letter);
        }
    }
    putchar('\n');
    
    return 0;
}

