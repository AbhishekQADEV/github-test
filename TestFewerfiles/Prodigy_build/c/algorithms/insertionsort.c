#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main()
{
    int unsorted[] = {5, 6, 4, 3, 9};
    int sorted[5];
    int size = sizeof(unsorted) / sizeof(unsorted[0]);

    #pragma omp parallel for
    for (int i = 0; i < size; i++)
    {
        int a = unsorted[i];
        int b = i;

        if (a < unsorted[b])
        {
            sorted[b] = a;
        }
    }

    return 0;
}