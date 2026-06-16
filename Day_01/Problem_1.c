#include<stdio.h>
#include<stdlib.h>
int arraySum(int arr[], int n){
    int sum = 0;
    for (int i =0; i< n; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for(int i =0; i<n; i++){
        printf("arr[%d]:", i);
        scanf("%d", &arr[i]);
    }
    printf("Sum = %d\n", arraySum(arr, n));
    free(arr);
    return 0;
}