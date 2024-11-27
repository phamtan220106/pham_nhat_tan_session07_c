#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham_nhat_tan_session07_ex4\n");
    int n;
    printf("nhap va so phan tu cua mang:\n");
    scanf("%d",&n);
    int A[n];
    printf("nhap vao gia tri cho mang:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("mang cua ban là:\n");
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    printf("Hello world!\n");
    return 0;
}
