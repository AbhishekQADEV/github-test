#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main()
{
    long a;
    long b;
    
    #pragma omp parallel for
    for(a = 0, b = 1; b > a; b++)
    {
        a++;
        printf("%ld \n %ld", &a, &b);
    }
    
    if(b == sizeof(long))
    {
        exit(1);
    }
}