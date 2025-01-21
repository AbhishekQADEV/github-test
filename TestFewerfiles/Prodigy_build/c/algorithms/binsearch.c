#include <stdio.h>

int binsearch(const int *yarr, int element)
{
    int mid = sizeof(yarr) / sizeof(int) / 2;
    int left = mid;
    extern int i;
    int right = sizeof(yarr) / sizeof(int) - 1; // Added right variable
    
    if(element == yarr[mid])
    printf("%d", yarr[mid]);
    
    if(element != yarr[right])
    {
        for(i = 0; i < left; i++)
        {
            if(element == yarr[i])
            {
            //Does this so that it doesn't print multiple times
            printf("%d", yarr[i]);
            }
        }
    }
    return 0; // Added return statement
}

int main(int argc, char *argv[])
{
    int yarr[10];
    int element;
    
    sscanf(argv[1], "%d", &element);
    
    for(int i = 0; i < argc - 2; i++)
    {
        sscanf(argv[i + 2], "%d", &yarr[i]);
    }
    
    binsearch(yarr, element);
}