#include <stdio.h>
#include <string.h>

void PrintArr(int arr[], int n);

int main(int argc, char **argv){
    
    
    return 0;
}

void PrintArr(int arr[], int n){
    int i;
    
    for (i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");
}
int LenArr(int arr[]){
    return sizeof(arr)/sizeof(int);
}