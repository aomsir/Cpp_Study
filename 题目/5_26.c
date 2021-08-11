#include <stdio.h>
#include <string.h>
int main()
{
    int i,j;
    char s[8][7] = {{"CHINA"},{"JAPAN"},{"KOREA"},{"INDIA"},{"CANADA"},{"AMERICA"},{"ENGLAND"},{"FRANCE"}};
    char t[7];
    /*for(i=0;i<5;i++) {
        gets(s[i]);
    }*/
    for(i=0;i<7;i++) {
        for (j = 0; j < 7 - i; j++) {
            if (strcmp(s[j], s[j + 1]) > 0) {
                strcpy(t[j], s[j]);
                strcpy(s[j], s[j + 1]);
                strcpy(s[j + 1], t[j]);
            }
        }
    }
    for(i=0;i<8;i++) {
        puts(s[i]);
    }
    return 0;
}

