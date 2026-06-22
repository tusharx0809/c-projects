#include <stdio.h>
#include <stdbool.h>

int main(){
    int size;
    printf("Enter Array Size:");
    scanf(" %d", &size);
    printf("Enter elements of array\n");

    int arr[size];

    for(int i=0; i<size; i++){
        printf("Enter element %d:",i);
        scanf("%d",&arr[i]);
    }
    printf("Original Array: ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    
    for(int i=0; i<size-1;i++){
        bool swapped = false;
        for(int j=0; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=true;
            }
        }
        if(!swapped){
            break;
        }
    }

    printf("Sorted Array: ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}