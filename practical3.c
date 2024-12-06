#include <stdio.h>

int main() {
    int arr[5] = {1, 5, 6, 7, 8}; 
    int target, left = 0, right = 4, mid;

    printf("Enter the number to search: ");
    scanf("%d", &target);

    while (left <= right) {
        mid = (left + right) / 2; // Find the middle 

        if (arr[mid] == target) {
            printf("Element %d found at index %d.\n", target, mid);
            return 0; // Exit the program
        } else if (arr[mid] < target) {
            left = mid + 1; // Move to the right side bro
        } else {
            right = mid - 1; // Move to the left side bro
        }
    }

    printf("Element %d not found in the array.\n", target);
    return 0;
}
