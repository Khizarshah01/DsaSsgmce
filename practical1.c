#include <stdio.h>
int main(){
    int arr[5] = {1,2,3,4,8};
    int maxi = -1111;
    int idx = -1;
    for(int i = 0; i<5;i++){
        if(arr[i]>maxi)
        {
            maxi = arr[i];
            idx = i+1; // location manje just a number not a index bro 
        }
    }

    printf("The largest number is %d  and the location is %d ", maxi, idx);

    return 0;
}