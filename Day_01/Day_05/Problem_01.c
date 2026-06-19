#include <stdbool.h>
bool canJump(int* nums, int numsSize) {
    int maxReachable = 0;
    for(int i=0;i<numsSize; ++i){
        if(i>maxReachable){
            return false;
        }
        int currentReach = i + nums[i];
        if(currentReach > maxReachable){
            maxReachable = currentReach;
        }
        if(maxReachable >= numsSize-1){
            return true;
        }
    }
    return true;
}