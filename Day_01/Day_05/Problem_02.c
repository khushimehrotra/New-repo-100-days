#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int compare(const void* p1, const void* p2){
    int val1 = *(const int*)p1;
    int val2 = *(const int*)p2;
    return (val1 > val2) - (val1 < val2);
}
bool checkEqual(int a[], int b[], int n){
    qsort(a, n, sizeof(int), compare);
    qsort(b, n, sizeof(int), compare);
    for(int i=0; i<n; i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}
int main(){
    int a1[] = {1,2, 5, 4,0};
    int b1[] = {2,4,5,0,1};
    int n1 = sizeof(a1)/ sizeof(a1[0]);
    if(checkEqual(a1, b1, n1)){
        printf("true\n");
    }else{
        printf("false\n");
    }
    int a2[] = {1,2,5};
    int b2[] = {2, 4, 15};
    int n2 = sizeof(a2)/sizeof(a2[0]);
    if (checkEqual(a2, b2, n2)){
        printf("true\n");
    } else{
        printf("false\n");
    }
    return 0;
}