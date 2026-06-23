#include<stdio.h>
void removeSpaces(char *s){
    int read = 0, write = 0;
    while (s[read] != '\0'){
        if (s[read] != ' '){
            s[write] = s[read];
            write++;
        }
        read++;
    }
    s[write] = '\0';
}
int main(){
    char s1[] = "  Hello, World! ";
    removeSpaces(s1);
    printf("'%s'\n", s1);
    return 0;
}