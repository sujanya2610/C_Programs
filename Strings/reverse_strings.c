/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int get_stringlength(char str[])
{
    int count =0;
    while(str[count]!='\0')
    {
        count++;
    
    }

    return count;
}
void reverse_word(char str[],int len)
{
    char temp=0;
    int i=0;
    while(i<len)
    {
        temp=str[i];
        str[i]=str[len];
        str[len]=temp;
    
        i++;
        len--;
    }
}

void reverse_words(char str[],int j,int k)
{
    char temp=0;
  
    while(j<k)
    {
        temp=str[j];
        str[j]=str[k];
        str[k]=temp;
    
        j++;
        k--;
    }
}
int main()
{
    char str[]="geeks for sujanya";
    int i=0,j=0;
    int k=get_stringlength(str)-1;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
    {
    
        k=i-1;
        reverse_words(str,j,k);
        j=i+1;
    }
    ++i;
    }
    reverse_words(str,j,i-1);
    reverse_words(str,0,get_stringlength(str)-1);
    printf("%s",str);

    return 0;
}

