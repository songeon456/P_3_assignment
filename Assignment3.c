#include<stdio.h> 

void quicksort(int a[],int p, int r); 
int partition(int a[],int p, int r); 

int main() 
{ 
 int a[100],i,n; 
 printf("Enter total number of elements(1 to 100): "); 
 scanf("%d",&n);

 for(i=0;i<n;i++) 
 { 
    printf("Enter number %d: ",i+1); 
    scanf("%d",&a[i]);
 } 
 
 printf("inputed elements : "); 
 for(i=0;i<n;i++)
 { 
    printf("%d ",a[i]); 
 } 
 
 quicksort(a,0,n-1); 
 
 printf("elements after quick sort : "); 
 for(i=0;i<n;i++) 
 { 
    printf("%d ",a[i]); 
 } 
 return 0; 
} 

void quicksort(int a[],int p, int r) 
{
   int q;
   if(p<r)
   {
     q=partition(a,p,r);

     quicksort(a,p,q-1);
     quicksort(a,q+1,r);
   }
}

int partition(int a[],int p, int r)
{
   int temp;
   int i=p-1;
   int j;

   int x=a[r];
 
   for(j=p;j<=r-1;j++)
   {
     if(a[j]<=x)
     {
       i=i+1;
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
     }
   }
 
   temp=a[i+1];
   a[i+1]=a[r];
   a[r]=temp;
   return (i+1);
}