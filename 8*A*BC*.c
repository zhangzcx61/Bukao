#include <stdio.h>

void  fun( char *a, int  n )
{
/**********Program**********/
    int i,j;
    for(i=0;*(a+i)=='*';i++);
    if(i>n)
        for(j=0;*(a+j)!='\0';j++)
        {
            *(a+j)=*(a+j+i-n);
        }
    *(a+j)='\0';






/**********  End  **********/
}

void main()
{
    char  s[81];  int  n;
    printf("Enter a string:\n");
    gets(s);
    printf("Enter n :  ");
    scanf("%d",&n);
    fun( s,n );
    printf("The string after deleted:\n");
    puts(s);
}
