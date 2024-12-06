#include <stdio.h>

int main(){
    int arr[100],size,value,loc;
    printf("ENter the size of arrya:\n ");
    scanf("%d",&size);

    for(int i = 0; i<size;i++){
        printf("enter your %d elment in array : \n", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter a number which you want to insert in array.");
    scanf("%d",&value);
    printf("Enter a location of that number where you want to add number:");
    scanf("%d",&loc);

    for(int i= size; i>=loc; i--){
        arr[i] = arr[i-1];
    }
    arr[loc] = value;
    size = size + 1;

    for(int i = 0; i<size; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}