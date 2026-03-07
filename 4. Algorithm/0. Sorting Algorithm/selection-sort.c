#include<stdio.h>
int main()
{
    int arr[]={32,224,3,44,100,-7};
    int i,j,min;

    for(i=0; i<6; i++)  //outer loop to iterate all the numbers
    {
        min=i;

        for(j=i+1; j<6; j++)  //inner loop to find the minimum index
        {
            if(arr[j] < arr[min]){
                min=j;
            }
        }

        //swap two numbers
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    //print the sorted array
    for (i=0; i<6; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}