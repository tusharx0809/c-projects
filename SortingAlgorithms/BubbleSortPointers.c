#include <stdio.h>
#include <stdbool.h>

void bubbleSortPointers(int *arr, int size){
    for(int i=0; i<size-1; i++){
        bool swapped = false;
        for(int j=0; j<size-i-1; j++){
            int *first = arr + j;
            int *second = arr + j + 1;
            if(*first > *second){
                int temp = *first;
                *first = *second;
                *second = temp;
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
}

int main(){
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];

    for(int i=0; i<size; i++){
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Original Array: ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    bubbleSortPointers(&arr, size);
    printf("Sorted Array: ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}