#include <stdio.h>

int main() 
{
    int n, i, key;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of array in sorted order:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &key);
    
    int start = 0, end = n - 1, mid;
    
    while (start <= end) {
        mid = (start + end) / 2;
        
        if (arr[mid] == key) {
            printf("\nElement found at index %d\n", mid);
            return 0;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    
    printf("\nElement not found in the array.\n");
    return 0;
}


