#include <stdio.h>
void  fun( char *a, char *h,char *p )
{
/**********Program**********/
    a=h;
    for(;*h!=0;h++)
    {
        if(*h!='*'&&h<=p)
        {
            *a=*h;
            a++;
        }
        if(h>p)
        {
            *a=*h;
            a++;
        }
    }
    *a=0;
/**********  End  **********/
}

void main()
{
    char  s[81],*t, *f;

    printf("Enter a string:\n");
    gets(s);
    t=f=s;
    while(*t)
        t++;
    t--;
    while(*t=='*')
        t--;
    while(*f=='*')
        f++;
    fun( s , f,t );
    printf("The string after deleted:\n");
    puts(s);
}
