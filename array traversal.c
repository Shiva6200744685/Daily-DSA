#include <stdio.h>

int main() {
    int arr[5],size,i;
    printf("enter the size of an array:");
    scanf("%d",&size);
    printf("Enter the elements of an array:");
     for(i=0;i<size;i++)
        scanf("%d",& arr[i]);
    printf("the elemts of an array are:");
        for(i=0;i<size;i++)
          printf("%d\n",arr[i]);

    return 0;
}