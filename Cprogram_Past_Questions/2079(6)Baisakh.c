#include <stdio.h>

void input(int a, int b, int mat[a][b]);
void add(int a, int b, int mat1[a][b], int mat2[a][b], int result[a][b]);
void display(int a, int b, int mat[a][b]);

int main() {
    int i, j;
    
    printf("Enter number of rows and columns:\n");
    scanf("%d%d", &i, &j);
    
    int mat1[i][j], mat2[i][j], result[i][j];


    input(i, j, mat1);
    input(i, j, mat2);

    
    add(i, j, mat1, mat2, result);

    
    printf("\nThe resulting matrix after addition is:\n");
    display(i, j, result);

    return 0;
}


void input(int a, int b, int mat[a][b]) {
	int i,j;
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < a; i++) {
        for ( j = 0; j < b; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}


void add(int a, int b, int mat1[a][b], int mat2[a][b], int result[a][b]) {
	int i,j;
    for (i = 0; i < a; i++) {
        for ( j = 0; j < b; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void display(int a, int b, int mat[a][b]) {
	int i,j;
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

