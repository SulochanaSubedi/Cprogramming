#include <stdio.h>


int main() {
	int i, j,k;
    int A[3][3], B[3][3], C[3][3];

    printf("Enter elements of Matrix A (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", *(A+i)+j);
        }
    }

    printf("Enter elements of Matrix B (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", *(B+i)+j);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            *(*(C+i)+j)=0; 
            for (k = 0; k < 3; k++) {
                *(*(C+i)+j) += *(*(A+i)+k)* *(*(B+k)+j); 
            }
        }
    }
    printf("\nResultant Matrix C after multiplication:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", *(*(C+i)+j));
        }
        printf("\n");
    }

    return 0;
}

