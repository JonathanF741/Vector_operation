#include <stdio.h>
#include <stdlib.h>
#define MAX_case1 100U
#define MAX 100

void prod_vec(float x1, float y1, float z1, float x2, float y2, float z2, float *x3, float *y3, float *z3)
{
*x3 = y1*z2-z1*y2;
*y3 = z1*x2-x1*z2;
*z3 = x1*y2-y1*x2;
}

int main(void)
{
    int opcion = 0;
	do{
		printf("1.- Sum of vectors a and b\n");
		printf("2.- Product of a vector and scalar\n");
		printf("3.- Product of two vectors\n");
		printf("4.- Vector product *Cross product*\n");
		printf("5.- Exit\n");
		printf("Insert option: ");
		scanf("%d",&opcion);
		switch(opcion){
			case 1:{
				puts("\nSum of vectors a and b");

                int    vector3[MAX_case1];
                double a[MAX_case1],b[MAX_case1];

                size_t n;
                do {
                    printf("Enter the length of the vectors:");
                    scanf("%zu", &n);
                } while ((n < 0U) || (n > MAX_case1));

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
                break;
			}
			case 2:{
			    puts("\nProduct of a vector and scalar");
                int    scalar[] = {1};
                int*   p1       = scalar;
                int    vector2[MAX];
                double a[MAX];

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

                puts("\nEnter scalar:");
                for (size_t i = 0; i < 1U; i++) {
                    printf("enter value %zu: ", i + 1);
                    scanf("%d", &scalar[i]);
                }

                puts("\nProduct of a vector and scalar:");
                for (size_t i = 0; i < n; i++) {
                    vector2[i] = scalar[0] * (int) a[i];
                    printf("vector2[%zu] = %d\n", i, vector2[i]);
                }
                break;

			}
			case 3:{
			    printf("\nProduct of two vectors\n");
                int i,n;
                double a[MAX],b[MAX],p;

                do
                {
                    printf("Enter the length of the vectors:",MAX);
                    scanf("%d",&n);
                } while( (n<=0)|| (n>MAX) ) ;

                //reading vector a
                printf("\nEnter vector a:\n");
                for(i=0; i<n; i++)
                {
                    printf("\tEnter a[%d]?:",i);
                    scanf("%lf",&(a[i]));
                }

                //reading vector b
                printf("\nEnter vector b:\n");
                for(i=0; i<n; i++)
                {
                    printf("\tEnter b[%d]?:",i);
                    scanf("%lf",&(b[i]));
                }

                //calculation of the dot product of both vectors
                p=0;
                for(i=0; i<n; i++)
                {
                    p=p+a[i]*b[i];

                }

                //result
                printf("The dot product between vectors a and b is %lf\n",p);
                break;

			}
			case 4:{
			    printf ("Vector product *Cross product*");
                float x1, y1, z1, x2, y2, z2;
                float x3, y3, z3;

                printf ("\nEnter the components of two vectors:\n ");

                scanf ("%f%f%f%f%f%f", &x1, &y1, &z1, &x2, &y2, &z2);
                prod_vec(x1, y1, z1, x2, y2, z2, &x3, &y3, &z3);
                printf ("The vector product is: (%f,%f,%f) ", x3, y3, z3);
                break;

			}
		}
	} while (opcion != 5);


}
