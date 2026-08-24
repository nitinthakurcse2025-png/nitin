#include <stdio.h>

int linearSearch(int arr[], int n)
{
    int i, element;

    printf("Enter the element to search: ");
    scanf("%d", &element);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == element)
        {
            return i;   // return index if element found
        }
    }

    return -1;  // element not found
}

int main()
{
    int arr[100], n, i, result;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    result = linearSearch(arr, n);

    if(result == -1)
    {
        printf("Element not found!");
    }
    else
    {
        printf("Element found at position %d", result + 1);
    }

    return 0;
}