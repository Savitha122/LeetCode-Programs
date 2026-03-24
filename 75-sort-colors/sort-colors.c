void sortColors(int* nums, int numsSize) {
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]>nums[j])
            {
                char temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }

        }
    }
    for(int i=0;i<numsSize;i++)
    {
        printf("%d",nums[i]);
    }
}