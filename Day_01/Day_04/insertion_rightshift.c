#include<stdio.h>
void insertAt(int arr[], int *n, int pos, int value){
    for (int i =*n;i>pos;i--){
        arr[i]= arr[i-1];
    }
    arr[pos] = value;
    ((*n)++);
}
int main(){
    int arr[10] = {10,20,30,40,50};
    int n =5;
    insertAt(arr, &n, 2, 25);
    for(int i=0;i<n;i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}