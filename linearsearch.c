                                                             --1.LINEAR SEARCH--
                                   
//AIM: To find the required element in linear Search/
                                                                 
🧭 Algorithm:  
                                                                 
1.Start

2.Read the size of the array n.

3.Read the n elements of the array into a[0..n-1].

4.Read the key element to search.

5.Initialize a flag found = 0.

6.For each element i from 0 to n-1, do:
a. If a[i] equals the key element, then:

Print "Element found at position i+1"

Set found = 1

Exit the loop

7.If found == 0, then print "Element not found in the array"

8.Stop                                                                 

🧭 Code:

#include <stdio.h>
int main()
{
    int a[10], key, i, n;
    printf("Enter the size of array:\n");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the key element:\n");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("\nElement is found at position %d\n", i + 1);
            return 0;
        }
    }
    printf("\nElement is not found in the array\n");
    return 0;
}


