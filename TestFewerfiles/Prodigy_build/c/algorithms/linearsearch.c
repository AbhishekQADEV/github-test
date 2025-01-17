#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int linsearch(char **yarr, int size, char *val)
{
    for(int i = 0; i < size; i++)
    {
        if(strcmp(yarr[i], val) == 0)
        {
            return 0;
        }    
    }
    return 1;
}

int main()
{
    char *yarr[] = {"Shluck much", "much Shluck"};
    int size = sizeof(yarr) / sizeof(yarr[0]);
    char *val = "Shluck Much";
    linsearch(yarr, size, val);
    return 0;
}