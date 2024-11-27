#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham_nhat_tan_session07_ex2\n");
    int A[5];
    printf("nhap gia tri cho mang A[5]: \n");
    for(int i=0 ; i<5 ;i++){
        scanf("%d",&A[i]);
    }
    printf("mang cua ban la: \n");
    for(int i=0; i<5;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    printf("Hello world!\n");
    return 0;
}
