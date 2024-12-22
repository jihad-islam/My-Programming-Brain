#include <stdio.h>
int main()
{
    int a[8];
    char b[8];

    printf("Full size of integer array: %d\n", sizeof(a));
    printf("Size of one element of array: %d\n", sizeof(a[2]));

    printf("Full size of character array or string: %d\n", sizeof(b));
    printf("Size of one element of array: %d\n", sizeof(b[2]));

    return 0;
}

/*
    sizeof() ei function kono array or array element er size ber korar jonne use hoy.

    jodi full array er size ber kori, sizeof(array_name)
    jodi nirdisto kono element er size ber kori, sizeof(arr_name[index number])

*/