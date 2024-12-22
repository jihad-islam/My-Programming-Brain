#include <stdio.h>

void world()
{
    printf("World Start\n"); // third print
    printf("World End\n");   // fourth print
}

void hello()
{
    printf("Hello Start\n"); // second print
    world();                 // world function ke call korse
    printf("Hello End\n");   // fifth print
}

int main()
{
    printf("Main Start\n"); // first print
    hello();                // hello function ke call korse
    printf("Main End\n");   // sixth print
    return 0;
}