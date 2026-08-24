#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr, n);
    printf("Sorted array: ");
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    return 0;
}
