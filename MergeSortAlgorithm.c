#include<stdio.h>

void merge(int arr[] , int l , int mid , int r)
{
    int n1 = mid - l + 1 ;
    int n2 = r - mid ;

    int a[n1] , b[n2];

    for(int i = 0 ; i < n1 ; i++){
        a[i] = arr[l + i];
    }
    for(int i = 0 ; i < n2 ; i++){
        b[i] = arr[mid + 1 + i];
    }

    int i = 0 , j= 0 ;
    int k = l ;

    while(i < n1 && j < n2){
        if(a[i] < b[j]){
            arr[k] = a[i];
            i++;
        }
        else{
            arr[k] = b[j];
            j++;
        }
        k++;
    }

    while( i < n1){
        arr[k] = a[i];
        i++;
        k++;
    }

    while(j < n2){
        arr[k] = b[j];
        j++ ;
        k++;
    }
}

void mergeSort(int arr[] , int l , int r)
{
    if(l < r){
        int mid = (l+r)/ 2 ;

        mergeSort(arr , l , mid);
        mergeSort(arr , mid+1 , r);

        merge(arr , l , mid , r);
    }
}

void printArray(int arr[] , int size)
{
    int i ;
    printf("The sorted array is ---->\n");
    for( i = 0 ; i < size ; i++){
        printf("%d    ", arr[i]);
    }
    printf("\n");
}

int main()
{
    printf("Your code is in those moment\n\n");

    int arr[] = {12, 11, 13, 5, 6, 7};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    printArray(arr,sizeOfArray);

    mergeSort(arr , 0 , sizeOfArray-1);
    printArray(arr, sizeOfArray);
}
