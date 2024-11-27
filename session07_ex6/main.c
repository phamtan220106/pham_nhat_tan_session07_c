#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham_nhat_tan_session07_ex6\n");
    int A[5];
    for(int i=0;i<5;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<5;i++){
        if(A[i]%2==0){
            A[i]=A[i]+3;
        }else{
            A[i]=A[i]+2;
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ",A[i]);
    }
    printf("Hello world!\n");
    return 0;
}
