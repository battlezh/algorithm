

int findMin(int* nums, int numsSize){
    int p1 = 0;
    int p2 = numsSize-1;
    int mid;

    while(p1 < p2)
    {
        if(nums[p1] < nums[p2])
        {
            return nums[p1];
        }

        mid = (p1 + p2) / 2;
        if(nums[mid] >= nums[p1])
        {
            p1 = mid + 1;
        }
        else
        {
            p2 = mid;
        }
    }
    return nums[p1];
}

