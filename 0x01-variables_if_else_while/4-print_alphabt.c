#include <stdio.h>

/*
 * main- print all alphabet in lowercase except 'q&e'
 *
 * return (0): always a success 
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

