#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham_nhat_tan_session07_ex5\n");
    int A[5],min,max;
    for(int i=0;i<5;i++){
        scanf("%d",&A[i]);
    }
    min=max=A[0];
    for(int i=0;i<5;i++){
        if(A[i]>max){
            max=A[i];
        }else if(A[i]<min){
            min=A[i];
        }
    }
    printf("max la: %d\n",max);
    printf("min la: %d\n",min);
    printf("Hello world!\n");
    return 0;
}
