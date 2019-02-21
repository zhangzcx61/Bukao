#define N 5
#include <stdio.h>
void main()
{
    int  i,j,temp;
    int a[N];
    for(j=0;j<N;j++)
        scanf("%d" ,&a[j]);
    printf("\nthe original numbers are:\n");
    for(j=0;j<N;j++)
        printf("%d\t",a[j]);
    printf("\n");

    /**********Program**********/
    for(i=1;i<N-1;i++){
        for(j=0;j<N-1;j++)
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
    }


    /**********  End  **********/

    printf("\nthe  scorted  number: \n");
    for(j=0;j<N;j++)
        printf("%d\t",a[j]);
    printf("\n");
}
