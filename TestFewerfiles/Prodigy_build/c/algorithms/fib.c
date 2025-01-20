#include <stdio.h>
#include <stdlib.h> // Added to use exit() function

int main()
{
    long a;
    long b;
    
    for(a = 0, b = 1; b > a; b++)
    {
        a++;
        printf("%ld \n %ld", a, b); // Removed & from printf arguments
    }
    
    if(b == sizeof(long))
    {
        exit(1);
    }
    
    return 0; // Added return statement
}