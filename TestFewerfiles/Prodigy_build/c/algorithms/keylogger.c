#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

void keylog()
{
    FILE * fPtr;
    fPtr = fopen("keylogger.txt", "w+");

    char a = getchar();
    
    if(a != '\0')
        fprintf(fPtr, "%c", a);
    
    time_t now = time(NULL);
    struct tm tm_struct;
    struct tm *tm_ptr = &tm_struct;
    localtime_r(&now, tm_ptr);
    const struct tm *tm_const_ptr = tm_ptr;
    int hour = tm_const_ptr->tm_hour;
    
    if(hour == 24)
        fclose(fPtr);
}

int main()
{
    #pragma omp parallel
    {
        #pragma omp single
        {
            keylog();
        }
    }
    return 0;
}