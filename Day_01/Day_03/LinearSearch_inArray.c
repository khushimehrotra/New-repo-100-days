#include<stdio.h>
int LinearSearch(int arr[], int n, int target){
    for(int i=0; i<n ;i++){
        if(arr[i]== target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] ={4,7,8,9,1};
    int n =sizeof(arr)/sizeof(arr[0]);
    int target = 9;
    int result =LinearSearch(arr,n,target);
    if(result != -1){
        printf("Target found at %d\n", result);
    }else {
        printf("Target not found\n");
    };
    return 0;
}