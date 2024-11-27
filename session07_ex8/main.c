#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham_nhat_tan_session07_ex8\n");
    int hang,cot;
    printf("nhap so hang: ");
    scanf("%d",&hang);
    printf("nhap so cot: ");
    scanf("%d",&cot);
    int A[hang][cot];
    printf("nhap gia tri cua tung cot theo tung hang:\n");
    for(int i=0;i<hang;i++){
        for(int j=0;j<cot;j++){
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<hang;i++){
        for(int j=0;j<cot;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("Hello world!\n");
    return 0;
}
