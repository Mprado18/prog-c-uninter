/*
Realize um loop com uma função recursiva para imprimir números de 1 a 100.
*/

#include <stdio.h>
#include <stdlib.h>

int recursiveLoop(int start, int end);

int main() {

    int x = 1;
    int y = 101;

    recursiveLoop(x, y);

    return 0;
}

int recursiveLoop(int start, int end) {
    if (start < end)
    {
        printf("O valor eh: %i \n", start);
        recursiveLoop(start += 1, end);
    }
    
}