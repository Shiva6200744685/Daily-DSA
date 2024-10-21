#include <stdio.h>

int main() {
    int arr[10], size, pos, i, num;
    
    printf("Enter the size: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter the position you want to delete: ");
    scanf("%d", &pos);
    
    if(pos < 1 || pos > size) {
        printf("Invalid position\n");
    } else {
        
        for(i = pos - 1; i < size - 1; i++)
            arr[i] = arr[i + 1];
        size--;  

        printf("The remaining elements are:\n");
        for(i = 0; i < size; i++)
            printf("%d ", arr[i]);
    }

    return 0;
}
