#include<stdio.h>
#include<limits.h>
int findLargestElement(int nums[], int size){
    if (size ==0){
        return INT_MIN;
    }
    int max_val = nums[0];
    for (int i=0; i<size; i++){
        if (nums[i]> max_val){
            max_val = nums[i];
        }
    }
    return max_val;
}
int main(){
    int array1[] = {12, 34, 56, 7,8};
    int size = sizeof(array1)/sizeof(array1[0]);
    int max = findLargestElement(array1, size);
    printf("Largest element in the array is: %d\n", max);
    return 0;
}