#include <stdio.h>

int main()
{
    int rows = 4; // Number of rows in the pattern

    for(int i=0; i<rows; i++) {
        for(int j=0; j<rows; j++) {
            if(j >= rows-i-1) {
                printf("#");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}