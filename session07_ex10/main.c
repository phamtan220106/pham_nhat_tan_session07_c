#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("pham_nhat_tan_session07_ex10\n");
    int n,dem,solg=0;
    printf("nhap va so phan tu cua mang:\n");
    scanf("%d",&n);
    int A[n];
    printf("nhap vao gia tri cho mang:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&A[i]);
    }
    for(int i=0 ; i<n; i++){
        dem=0;
        for(int j=2;j<=sqrt(A[i]);j++){
            if(A[i]%j==0){
                dem++;
                A[i]=0;
                break;
            }
        }
    }
    if(solg!=0){
        printf("cac so la so nguyen to la:\n");
        for(int i=0; i<n ; i++){
            if(A[i]!=1 && A[i]!=0){
                printf("%d ",A[i]);
            }
        }
    }else{
        printf("ko co so nguyen to\n");
    }
    printf("Hello world!\n");
    return 0;
}
