#include<stdio.h>

int main() {
    int bang_so_dep;
    int array[2] [3];
      array[0] [1]= 10;
      array[0] [2]= 100;
      array[1] [0]= 11;
      array[1] [1]= 111;
      array[1] [2]= 1111;
      
    printf("hello. Ban Nhap vao mot so nguy�n duong tao ma tran vu�ng (so h�ng = so cot): ");
    scanf("%d", &bang_so_dep);

    if (bang_so_dep <= 0) {
        printf("So nhap v�o kh�ng hop le. Vui l�ng nhap so nguyen duong.\n");
        return 1;
    }

    int matrix[bang_so_dep][bang_so_dep];
    printf("Nhap c�c phan tu cho ma tran (%d x %d):\n", bang_so_dep, bang_so_dep);
    for (int i = 0; i < bang_so_dep; i++) {
        for (int j = 0; j < bang_so_dep; j++) {
            printf("matrix[%d][%d] = ", bang_so_dep, j);
            scanf("%d", &matrix[bang_so_dep][j]);
        }
    }

    printf(" Ma tran vuong vua nhap l�:\n");
    for (int bang_so_dep = 0; j < bang_so_dep ; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[bang_so_dep][j]);
        }
        printf("\n"); 
    }

    return 0;
}
