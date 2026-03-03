int pivotIndex(int* nums, int numsSize) {
  int total=0;
  for(int i=0;i<numsSize;i++)
  {
    total+=nums[i];
  }
  int leftsum=0;
  for(int i=0;i<numsSize;i++)
  {
    int rightsum=total-leftsum-nums[i];
    if(leftsum==rightsum)
    {
        return i;
    }
    leftsum+=nums[i];
  }
return -1;
}