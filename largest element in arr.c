#include<stdio.h>
int main()
{
    int arr[]={6,8,2,5,3,18,6};
    int a=arr[0];
    int lengh=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=lengh-1;i++){
        if(a<arr[i]) a=arr[i];
       
    }
        printf("%d\n",a);
    }