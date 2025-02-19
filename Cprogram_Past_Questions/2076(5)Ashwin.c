#include <stdio.h>

void mult(int mat1[3][3], int mat2[3][3], int result[3][3])
{
	int i, j ,k;
	for(i=0; i<3; i++)
	{
		for(j=0;j<3; j++)
		{
			result[i][j]=0;
			for(k=0;k<3; k++)
			{
				result[i][j]+=mat1[i][k]*mat2[k][j];
			}
		}
	}
}


int main() {
	int i, j,k;
    int A[3][3], B[3][3], C[3][3];

    printf("Enter elements of Matrix A (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    mult(A, B, C);
    printf("\nResultant Matrix C after multiplication:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

