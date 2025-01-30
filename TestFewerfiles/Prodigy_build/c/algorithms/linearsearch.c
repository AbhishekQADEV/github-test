#include <stdio.h>

int linsearch(const int *yarr, int val)
{
    for(int i = 0; i < sizeof(yarr)/sizeof(int); i++)
    {
        if(yarr[i] == val)
        {
            return 0;
        }    
    }
    return 1;
}

int main()
{
    const int yarr[] = {1, 2, 3, 4, 5};
    int val = 3;
    linsearch(yarr, val);
}