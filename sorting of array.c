// WAP to sort array elements
#include<stdio.h>

int main()
{
    int a[100], i, j, n, temp;

    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    printf("Enter the array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Sorting
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    
    printf("The sorted numbers are:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
