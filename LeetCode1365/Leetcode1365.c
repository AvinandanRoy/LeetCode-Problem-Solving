/*
    link : https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/


*/
#include<stdio.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize)
{
    int *answer = (int*)malloc(sizeof(int) * numsSize);
    int count = 0 ;
    for(int k = 0 ; k < numsSize ; k++)
    {
        for (int i = 0 ; i < numsSize ; i++)
        {
            for(int j = i+1 ; j < numsSize ; i++)
            {
                if(nums[i] > nums[j])
                {
                    count++;
                }
            }
        }
        answer[k] = count ;
    }
}

int main()
{
    int nums[] = {2,3,4,5,6,7};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize = numsSize;
}
