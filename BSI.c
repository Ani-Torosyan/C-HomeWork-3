#include <stdio.h>
#include <stdlib.h>

int BSI(int array[], int n, int key)
{
    int left = 0;
    int right = n - 1;
    int mid;
    while(left <= right)
    {
        mid = (left + right)/2;

        if(array[mid] == key)
        {
            return mid;
        }
        else if(array[mid] < key)
        {
            left = mid + 1;
        }
        else 
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 4, 5, 5, 6, 8};
    int len = sizeof(arr) / sizeof(arr[0]);
    int T = 1;

    int result = BSI(arr, len, T);

    if(result == -1)
    {
        printf("Not found.");
    }
    else
        printf("The index is: %d", result);

    return 0;
}