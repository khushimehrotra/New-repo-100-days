def reverse(nums,start,end):
    while start < end:
        nums[start], nums[end] = nums[end], nums[start]
        start +=1
        end -=1

def rotate(nums, k):
    n = len(nums)
    k=k%n
    reverse(nums,0,n-1)
    reverse(nums,0,k-1)
    reverse(nums,k,n-1)

arr1 = [1,2,3,4,5,6,7]
rotate(arr1,3)
print(arr1)