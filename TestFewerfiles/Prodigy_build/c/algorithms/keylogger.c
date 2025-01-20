#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int keylog()
{
    FILE * fPtr;
    fPtr = fopen("keylogger.txt", "w+");

    if (fPtr != NULL) {
        const char *a = getchar();
        
        if(a != NULL)
            fprintf(fPtr, "%s", a);
        
        time_t now = time(NULL);
        struct tm tm_struct;
        localtime_r(&now, &tm_struct);
        int hour = tm_struct.tm_hour;
        
        if(hour == 24)
            fclose(fPtr);
    }
}

int main()
{
    keylog();
}