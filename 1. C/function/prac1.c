#include <stdio.h>

void sum(int a)
{

    for (int i = 1; i <= a; i++)
    {
        if (i < a)
        {
            printf("%d ", i);
        }

        else
            printf("%d", i);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    sum(n);

    return 0;
}

/*
    input: 5
    output: 1 2 3 4 5

    shobgulay space hobe, but last index e kono space hobe na. ei tricks ta shikhe rakhte hobe.
*/