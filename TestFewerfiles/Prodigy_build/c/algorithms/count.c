#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void count(int num) {
    printf("<html>\n");
    printf("<body>\n");
    printf("<h1>Count:</h1>\n");
    printf("<ul>\n");
    
    if(num > 20) {
        for(int i = 0; i < num; i++) {
            printf("<li>%d</li>\n", i);
        }
    } else {
        for(int i = 0; i < num; i++) {
            printf("<li>%d</li>", i);
        }
    }
    
    printf("</ul>\n");
    printf("</body>\n");
    printf("</html>\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    count(num);
    return 0;
}