#include<stdio.h>
int findFirst(int arr[], int n, int target){
    int low=0, high =n-1;
    int firstIdx = -1;
    while (low<=high){
        int mid = low + (high - low)/2;
        if(arr[mid] == target){
            firstIdx = mid;
            high = mid - 1;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return firstIdx;

}

int findLast(int arr[], int n, int target){
    int low =0, high = n-1;
    int lastIdx = -1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if (arr[mid] == target){
            lastIdx = mid;
            low = mid + 1;
        } else if(arr[mid]< target){
            low = mid + 1;
        }else{
            high = mid -1;
        }
    }
    return lastIdx;
}
int countOccurrences(int arr[], int n, int target){
    int first = findFirst(arr,n, target);
    if(first == -1){
        return 0;
    }
    int last = findLast(arr, n, target);
    return( last -first +1);

}
int main(){
    int arr1[] = {1,1,2,2,2,2,3};
    int target1 = 2;
    int count1 = countOccurrences(arr1, sizeof(arr1)/sizeof(arr1[0]), target1 );
    printf("Count of %d in arr1: %d\n", target1, count1);   
    return 0;
}