#include <stdio.h>
#include <stdlib.h>
#define MAX 100U

int main(void)
{
    puts("\nSum of vectors a and b");

    int    vector3[MAX];
    double a[MAX],b[MAX];

    size_t n;
    do {
        printf("Enter the length of the vectors:");
        scanf("%zu", &n);
    } while ((n < 0U) || (n > MAX));

    puts("\nEnter vector a:");
    for (size_t i = 0; i < n; i++) {
        printf("\tEnter a[%zu]:", i);
        scanf("%lf", &a[i]);
    }

    puts("\nEnter vector b:");
    for (size_t i = 0; i < n; i++) {
        printf("\tEnter b[%zu]:", i);
        scanf("%lf", &b[i]);
    }

    puts("\nSum of vectors a and b:");
    for (size_t i = 0; i < n; i++) {
        vector3[i] = (int) a[i] + (int) b[i];
        printf("vector3[%zu] = %d\n", i, vector3[i]);
    }

    return EXIT_SUCCESS;
}
