#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham_nhat_tan_session07_ex3\n");
    int n,chan=0;
    printf("nhap so phan tu cua mang:\n");
    scanf("%d",&n);
    int A[n];
    printf("nhap gia tri cho mang:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<n;i++){
        if(A[i]%2==0){
            printf("%d ",A[i]);
            chan++;
        }
    }
    if(chan==0){
        printf("mang khong co so chan\n");
    }
    printf("Hello world!\n");
    return 0;
}
