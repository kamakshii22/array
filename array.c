#include<stdio.h>
int main ()
{   int element [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
{   int element [3][3];
    // Input of Numbers from the user

    for (int i=0; i<3; i++)
    {   for (int j=0; j<3; j++)
            {
                printf("Enter the element [%d][%d]: ",i,j);
                scanf("%d",&element[i][j]);
            }
        printf("\n");
    }

    //Printing out the matrix

    printf("The matrix is :\n");
    for (int i=0; i<3; i++)
    {   for (int j=0; j<3; j++)
@@ -10,12 +23,14 @@ int main ()
            }
        printf("\n");
    }

    //Printing the sum of the Diagonal Elements
    int sum;
    for (int i=0; i<3; i++)
    {
        int *p = &element[i][i];
        sum = sum+*p;
    }
    printf("\nThe sum of Digonal elements of matrix is: %d \n",sum);
    printf("\nThe sum of Diagonal elements of matrix is: %d \n",sum);
    return 0;
}
