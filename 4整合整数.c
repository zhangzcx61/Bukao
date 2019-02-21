#include <stdio.h>

void fun(int a, int b, long *c)
{
/**********Program**********/
    *c=1000*(b%10)+100*(a%10)+10*(b/10)+(a/10);




/**********  End  **********/
}
void main()
{
    int a,b; long c;
    printf("Input a, b:");
    scanf("%d %d", &a, &b);
    fun(a, b, &c);
    printf("The result is: %ld\n", c);
}
