#include <stdio.h>
#include <stdlib.h>

int BSREC(int array[], int n, int left, int right, int key)
{
    int mid;
    if(left > right)
    {
        return -1;
    }
    else 
    {    
        mid = (left + right)/2;
    }

    if(array[mid] == key)
    {
        return mid;
    }
    else if(array[mid] > key)
    {
        return BSREC(array, n, left, mid - 1, key);
    }
    else 
    {
        return BSREC(array, n, mid + 1, right, key);
    }
    
}

int exponentialSearch(int arr[], int n, int key) 
{
    if (arr[0] == key) 
    {
        return 0;
    }
    int i = 1;
    while (i < n && arr[i] <= key) 
    {
        i *= 2;
    }
    return BSREC(arr, n, i / 2, (i < n - 1) ? i : n - 1, key);
}

int main()
{
    int arr[] = {1, 3, 4, 5, 5, 6, 8};
    int len = sizeof(arr) / sizeof(arr[0]);
    int T = 5;

    int result = exponentialSearch(arr, len, T);

    if(result == -1)
    {
        printf("Not found.");
    }
    else
        printf("The index is: %d", result);

    return 0;
}