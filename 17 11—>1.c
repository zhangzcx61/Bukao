#include <stdio.h>

void fun(int array[], int n)
{
    /**********Program**********/
    int k,j,t;
    for(k=0;k<n-1;k++)
        for(j=k+1;j<n;j++)
            if(array[k]<array[j])//<a[i]???
{
    t=array[k];
    array[k]=array[j];
    array[j]=t;
}





/**********  End  **********/
}

main()
{
    int a[10],i;
    printf("请输入数组a中的十个数:\n");
    for (i=0;i<10;i++)
        scanf("%d",&a[i]);
    fun(a,10);
    printf("由大到小的排序结果是:\n");
    for (i=0;i<10;i++)
        printf("%4d",a[i]);
    printf("\n");
}
