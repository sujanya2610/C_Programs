/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdbool.h>
int findmissing(int arr[],int n)
{
    int sum=((n+1)*(n+2))/2;
    int i;
    for(i=0;i<n;i++)
    {
        sum=sum-arr[i];
    } 

    return sum;
}
int findunique(int arr[],int n)
{
    int unique;
    for(int i=0;i<n;i++)
    {
        unique^=arr[i];
    }

    return unique;
}
int secondmax(int arr[],int n)
{
    int firstmax=0;
    int secondmax=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>firstmax)
         {
         secondmax=firstmax;
         firstmax=arr[i];
         }
         
        else if ((arr[i]>secondmax) && (arr[i]!=firstmax ))
          {
            secondmax=arr[i];
        }
    }
return secondmax;
}

int findmaxpair(int arr[],int n,int target)
{
     int count=0;
    for(int i=0;i<n-1;i++)
    {
        if((arr[i]-arr[i+1]==target) || (arr[i+1]-arr[i]==target))
        {
          count++;
          printf("\n [%d %d]\n",arr[i],arr[i+1]);
        }    
   }
return count;
    
}

bool subsetarr(int arr1[], int arr2[],int m, int n)
{
     for(int i=0;i<n;i++)
     { 
          bool found=false;
         for(int j=0;j<n;j++)
          {
           if(arr1[i]==arr2[j])
            {
                 found=true;
                 break;
            }
         
           }

         if(!found)return false;
         
        }
        
    return true;    
 }
int main()
{
   int arr1[]={1,3,5,7,9};
   int arr2[]={3};
   int m=sizeof(arr1)/sizeof(arr1[0]);
   int n=sizeof(arr2)/sizeof(arr2[0]);
   bool res=subsetarr(arr1,arr2,m,n);
   if(res)
   {
    printf("subset");
   }
   else
   {
    printf("not subset");   
   }
    return 0;
}
