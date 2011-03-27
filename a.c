#include<stdio.h>
#include <math.h>
void say_hi(void);
void say_three_hi(void);
#define HOW_MANY_TIMES 3
int main(int argc, const char *argv[])
{
    say_three_hi();
    return 0;
}

void say_hi(void)
{
    printf("hi everybody\n");
}
int i;
void say_three_hi(void)
{       
    for (i = 0; i < HOW_MANY_TIMES; i++) 
    {
        say_hi();
    }
}
