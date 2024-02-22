#include <stdio.h>

int interpolationSearch(int arr[], int n, int key) 
{
    int low = 0, high = n - 1;
    while (low <= high && key >= arr[low] && key <= arr[high]) 
    {
        if (low == high) 
        {
            if (arr[low] == key) return low;
            return -1;
        }
        int mid = low + (((double)(high - low) / (arr[high] - arr[low])) * (key - arr[low]));
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 4, 5, 5, 6, 8};
    int len = sizeof(arr) / sizeof(arr[0]);
    int T = 5;

    int result = interpolationSearch(arr, len, T);

    if(result == -1)
    {
        printf("Not found.");
    }
    else
        printf("The index is: %d", result);

    return 0;
}
