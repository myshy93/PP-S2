#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[101], ss[100];
    char* p;
    char separatori[10];
    strcpy(separatori, "aeiou");
    fgets(s, 100, stdin);
    p = strtok(s, separatori);
    while(p != NULL){
        strcat(ss, p);
        p = strtok(NULL, separatori);
    }
    printf("%s", ss);
    return 0;
}
