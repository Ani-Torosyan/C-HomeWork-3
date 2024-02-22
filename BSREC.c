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

int main()
{
    int arr[] = {1, 3, 4, 5, 5, 6, 8};
    int len = sizeof(arr) / sizeof(arr[0]);
    int T = 5;

    int result = BSREC(arr, len, 0, len - 1, T);

    if(result == -1)
    {
        printf("Not found.");
    }
    else
        printf("The index is: %d", result);

    return 0;
}