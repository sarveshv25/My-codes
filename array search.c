#include <stdio.h>

int main() {
    int arr[50], i, size, no, count;
    
x:
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    if (size <= 0 || size > 50) {
        printf("\nInvalid size");
        goto x;
    }
    
    printf("\nEnter %d numbers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter number to search: ");
    scanf("%d", &no);
    
    for (i = 0, count = 0; i < size; i++) {
        if (arr[i] == no) {
            count++;
        }
    }
    
    printf("\nThe number %d is present %d times in the array.\n", no, count);
    
    return 0;
}
