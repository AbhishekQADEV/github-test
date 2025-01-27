#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int binsearch(const int *yarr, int element)
{
    int mid = sizeof(yarr) / sizeof(yarr[0]) / 2;
    int left = mid;
    extern int i;
    
    if(element == yarr[mid])
    {
        printf("%d", yarr[mid]);
    }
    
    #pragma omp parallel for
    for(i = 0; i < left; i++)
    {
        if(element == yarr[i])
        {
            //Does this so that it doesn't print multiple times
            printf("%d", yarr[i]);
        }
    }
    return 0; // Added return statement
}

int main(int argc, char *argv[])
{
    int element = atoi(argv[1]);
    int yarr[argc - 2];
    
    for(int i = 2; i < argc; i++)
    {
        yarr[i - 2] = atoi(argv[i]);
    }
    
    binsearch(yarr, element);
}