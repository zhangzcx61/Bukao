#include <stdio.h>

void fun(int  a, int  b, long  *c)
{
/**********Program**********/
    int d,f
        d=a%10;
    f=b%10;
    a=a/10;
    b=b/10;
    *c=d*1000+f*100+a*10+b;






/**********  End  **********/
}
void main()
{
    int  a,b; long  c;
    printf("Input a, b:");
    scanf("%d%d", &a, &b);
    fun(a, b, &c);
    printf("The result is: %ld\n", c);

}

