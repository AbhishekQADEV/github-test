#include <stdio.h>

int main()
{
    int unsorted[] = {5, 6, 4, 3, 9};
    int sorted[5];
    int length = sizeof(unsorted) / sizeof(unsorted[0]);
    
    for (int i = 0; i < length; i++)
    {
        sorted[i] = unsorted[i];
    }
    
    for (int i = 1; i < length; i++)
    {
        int key = sorted[i];
        int j = i - 1;
        
        while (j >= 0 && sorted[j] > key)
        {
            sorted[j + 1] = sorted[j];
            j--;
        }
        
        sorted[j + 1] = key;
    }
    
    // SonarCloud Analysis: Issues Detected in TestFewerfiles/Prodigy_build/c/algorithms/insertionsort.c. Below are the detected issues with details.
    // Line 7: Change this loop body so that it can be executed more than once. (Severity: MAJOR) Location: offsets 4 to 6
    
    // Resolve SonarCloud issues in c by validating inputs, implementing secure authentication, preventing injection vulnerabilities, conducting regular security audits, and ensuring continuous improvement of the code's security posture.
    // Additionally, conduct regular security audits to identify and resolve potential vulnerabilities, address hotspots, and ensure continuous improvement of the code's security posture.
    
    return 0;
}