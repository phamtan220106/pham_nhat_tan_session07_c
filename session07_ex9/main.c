#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham_nhat_tan_session07_ex9\n");
    int hang,cot,rong=4;
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
    }
    for(int i=0;i<hang;i++){
        for(int j=0;j<cot;j++){
            if(i==0 || hang-i==1){
                printf("%*d",rong,A[i][j]);
            }else{
                if(j==0 || cot-j==1){
                    printf("%*d",rong,A[i][j]);
                }else{
                    printf("%*c",rong,' ');
                }
            }
        }
        printf("\n");
    }
    printf("Hello world!\n");
    return 0;
}
