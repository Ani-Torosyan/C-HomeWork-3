#include <stdio.h>

int linearSearch(int arr[], int n, int key) 
{
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == key) 
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 4, 5, 5, 6, 8};
    int len = sizeof(arr) / sizeof(arr[0]);
    int T = 10;

    int result = linearSearch(arr, len, T);

    if(result == -1)
    {
        printf("Not found.");
    }
    else
        printf("The index is: %d", result);

    return 0;
}