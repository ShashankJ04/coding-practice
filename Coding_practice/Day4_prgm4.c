#include <stdio.h>
//function prototypes 
void read_arr(int *arr,int a);
void ret_key(int *arr,int a,int key);
int main()
{
    // array declaration 
    int arr[10], arr_size,key;
    printf("Enter the number of elements \n");
    scanf("%d", &arr_size);
    printf("Enter the elements\n");
    read_arr(arr, arr_size);
    printf("Enter the key \n");
    scanf("%d", &key);
    ret_key(arr, arr_size,key);
}  

void read_arr(int *arr, int a)
{
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
}
    
void ret_key(int *arr,int a,int key)
{
    int inti=0,last,flag=0;
    for(int i=0;i<a;i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            if(inti==0)
            {
                inti=i+1;
            }
            last=i+1;
        }
    }
    if(flag)
    {
        printf("Search Successfull\n");
        printf("The first occuracne of the key is = %d\n",inti);                                                                              
        printf("The last occuracne of the key is = %d",last);
        return 0;
    }
    printf("Search Failure");
}
