#include <stdio.h>
#include <stdlib.h>
#include <arithmetic.h>

int main(int argc, char *argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    printf("<===============>\n");
    printf("<===============>\n");
    printf("<===============>\n");
    printf("<===============>\n");
    printf("%d + %d => %d\n", a, b, add(b, a));
    printf("%d - %d => %d\n", a, b, sub(b, a));
    printf("%d * %d => %d\n", a, b, mul(a, b));
    printf("%d / %d => %d\n", a, b, dur(a, b));
    printf("===============\n");

    return 0;
}
