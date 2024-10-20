// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[10],size,i,pos,num;
    printf("Enter the size of an array:");
     scanf("%d",&size);
    printf("Enter the elements of an array:");
    for(i=0;i<size;i++)
     scanf("%d",&arr[i]);
    
      
      printf("Enter the number you want to insert:");
      scanf("%d",&num);
      printf("Enter the position you want to insert:");
      scanf("%d",& pos);
      for(i=size-1;i<pos-1;i--)
      {
          arr[i+1]=arr[i];
      }
       arr[pos-1]=num;
       size++;
       
    for(i=0;i<size;i++)
        printf("%d\n",arr[i]);
    return 0;
      
}