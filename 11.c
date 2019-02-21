#include <stdio.h>

int fun(int a[],int n)
{

    /**********Program**********/
    int i,max=0;
    for(i=0;i<n;i++)
        if(a[i]>max&&a[i]%2==0)
        max=a[i];
    return max;

    /**********  End  **********/

}

main()
{
    int a[]={1,2,9,24,35,18},k;
    k=fun(a,6);
    printf("max=%d\n",k);

}
