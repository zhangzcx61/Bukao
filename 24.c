#include <stdio.h>

void fun(char p1[], char p2[])
{
/**********Program**********/
    int i;
    char *m=p2;
    for(i=0;p1[i]!=0;i++);
    for(;*m!=0;m++,i++)
        p1[i]=*m;
    p1[i]=0;

/**********  End  **********/
}

void main()
{
    char s1[80], s2[40] ;

    printf("Enter s1 and s2:\n") ;
    scanf("%s%s", s1, s2) ;
    printf("s1=%s\n", s1) ;
    printf("s2=%s\n", s2) ;
    printf("Invoke fun(s1,s2):\n") ;
    fun(s1, s2) ;
    printf("After invoking:\n") ;
    printf("%s\n", s1) ;
}
