#include <stdio.h>
void main()
{
    int i,a[10]={2,5,6,1,12,4,8,9,41,10};
    void sort(int *p,int n);
    sort(a,10);
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
}

void sort(int *p,int n)
{
    int i,j,t;

    /**********Program**********/
    for(i=1;i<n;i++)
        for(j=0;j<n-i;j++)
            if(*(p+j)>*(p+j+1))
            {
                t=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=t;
            }




    /**********  End  **********/
}

