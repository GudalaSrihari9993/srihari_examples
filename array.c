#include<stdio.h>
int NoOfElements(int *arr,int n)
{
    int i,odd=0,even=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
           even++;
        }
        else
        {
           odd++;
        }
    }  
    return even;   
}
int main()
{
     int arr[100],n,res;
     printf("enter the number of elements:");
     scanf("%d",&n);
     for(int i;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }
     res=NoOfElements(arr,n);
     printf("number of even elements is %d\n",res);

     
}
