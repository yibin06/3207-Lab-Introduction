#include <stdio.h>
#include <stdlib.h>

char randchar() {
    // generates random uppercase letter from A-Z
    int randomLetter = rand() % 26 + 'A';
    return (char)randomLetter;
}