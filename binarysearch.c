//*AIM: To find the required element in Binary Search*//



#include <stdio.h>
int main()
{
    int i, n, low, high, mid, a[10], key;
    
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    
    printf("Enter the elements in sorted order:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("Enter the element to be searched:\n");
    scanf("%d", &key);
    
    low = 0;
    high = n - 1;
    
    while (low <= high)
    {
        mid = (low + high) / 2;
        
        if (key == a[mid])
        {
            printf("Successful search: element found at position %d\n", mid + 1);
            return 0;
        }
        else if (key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
        low = mid + 1;
        }
    }
}


