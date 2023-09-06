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
int sumofnumbers(int *arr,int n)
{
      int i,sum=0;
      for(i=0;i<n;i++)
      {
          sum=sum+arr[i];
      }
      return sum;
     
}
int main()
{
     int arr[100],n,res,summ;
     printf("enter the number of elements:");
     scanf("%d",&n);
     for(int i;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }
     res=NoOfElements(arr,n);
     printf("number of even elements is %d\n",res);
<<<<<<< HEAD
     printf("hello vivek alias SCIENCE");

=======
     summ = sumofnumbers(arr,n);
     printf("sum of numbers is %d\n",summ);
{
>>>>>>> e5ef17ada8c94a88ea891693c1419a143c4dbec5
     
}
