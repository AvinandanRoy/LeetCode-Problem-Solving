#include<stdio.h>

int binarySearch(int arr[], int l , int r , int searchElement)
{
    while(l <= r ){
        int m = l + (r-1)/ 2 ;

        if(arr[m] > searchElement){
            r = m-1 ;
        }
        else if(arr[m] < searchElement){
            l = m + 1 ;
        }
        else
            return m ;
    }
    return -1 ;
}

int search(int* nums, int numsSize, int target)
{
    int temp = numSize - 1 ;

}

int main()
{

}
