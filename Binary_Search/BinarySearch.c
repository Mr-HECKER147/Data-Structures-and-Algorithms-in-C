#include <stdio.h>

// Function for binary search
int binarySearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;  // Avoid overflow

        if (arr[mid] == target)
            return mid;             // Element found at index mid
        else if (arr[mid] < target)
            low = mid + 1;          // Search right half
        else
            high = mid - 1;         // Search left half
    }

    return -1;  // Element not found
}

int main() {
    printf("Enter no. of elements you want in the array: ");
    
    int no;
    scanf("%d",&no);
    int arr[no];
    printf("Enter the array: ");
    for(int a=0;a<no;a++){scanf("%d",&arr[a]);}
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Enter the target no.: ");
    int t;
    scanf("%d",&t);
    int target = t;

    int result = binarySearch(arr, n, target);

    if (result != -1){
        printf("\nElement %d found at index %d\n", target, result+1);}
    else{
        printf("\nElement %d not found in the array\n", target);}

    getchar();
    getchar();
    return 0;
}

