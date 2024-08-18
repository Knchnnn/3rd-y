
#include <stdio.h>

int main() {
    int n,k,temp,i,j;
    printf("enter rray size:");
    scanf("%d",&n);
    int a[n];
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("enter no. of times array to rotate:");
    scanf("%d",&k);

    // Rotate the array k times
    for (i = 0; i < k; i++) {
        temp = a[n - 1];
        for (j = n - 1; j > 0; j--) {
            a[j] = a[j - 1];
        }
        a[0] = temp;
    }

    printf("Array after rotation: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
