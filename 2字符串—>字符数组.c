#include  <stdio.h>

#define    N    20

void  fun( char  *a , char  *s)
{
/**********Program**********/
    *a=0;
    for(;*s!='\0';s++,a++)
        *a=*s;
    // *a=0;





/**********  End  **********/
}

void main()
{
    char  s1[N],  *s2="abcdefghijk";
    fun( s1,s2);
    printf("%s\n", s1);
    printf("%s\n", s2);
}

