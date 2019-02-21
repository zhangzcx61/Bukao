#include<stdio.h>
#include<conio.h>
#define MAX 100

int fun(int lim,int aa[MAX])
{
    /**********Program**********/
    int a,i,t=0;
    for(a=2;a<=lim;a++)
    {
        for(i=2;i<a;i++)
        {
            if(a%i==0)
                break;
        }
        if(i==a)
            aa[t++]=a;
    }
    return t;





    /**********  End  **********/
}
main()
{
    int limit,i,sum;
    int aa[MAX];
    printf("Please input ainteger:");
    scanf("%d",&limit);
    sum=fun(limit,aa);
    for(i=0;i<sum;i++){
        if(i%10==0&&i!=0) printf("\n");
        printf("%5d",aa[i]);

    }

}
