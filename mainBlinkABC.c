#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//-----------------------------------
void delay(int milliseconds);
//-----------------------------------
int main()
{
    int i;
    printf("Hello world\n");
    printf("I am ABC blinker\n");

    for (i=0 ; i< 4 ; i++)
    {
        printf("A B C\n");
        delay(1000);
        printf("C A B\n");
        delay(1000);
        printf("B C A\n");
        delay(1000);
    }
    return 0;
}

//-------------------------------------------
void delay(int milliseconds)
{
    long pause;
    clock_t now,then;

    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}

