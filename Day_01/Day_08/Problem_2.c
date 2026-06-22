#include<stdio.h>
#include<string.h>
void reverseString(char s[]){
    int left = 0;
    int right = strlen(s) -1;
    char temp;
    while(left<right){
        temp = s[left];
        s[left] = s[right];
        s[right]= temp;
        left++;
        right--;
    }
}
int main(){
    char s1[] = "Computer";
    reverseString(s1);
    printf("Reversed string: %s\n", s1);
    return 0;
}