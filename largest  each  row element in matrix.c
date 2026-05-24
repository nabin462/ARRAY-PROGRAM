// WAP to display the largest element of each row in a matrix

#include <stdio.h>

int main() {
    int a[3][3], i, j, max;

    
    printf("Enter matrix elements:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    printf("\nLargest element in each row:\n");

    for(i = 0; i < 3; i++) {
        max = a[i][0];   // Assume first element is largest

        for(j = 1; j < 3; j++) {
            if(a[i][j] > max) {
                max = a[i][j];
            }
        }

        printf("Row %d = %d\n", i + 1, max);
    }

    return 0;
}
