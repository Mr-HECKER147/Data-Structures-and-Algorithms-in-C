// Code to create an array, insert to it, delete from it, and display it
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 50

void write(int n);
void insert(int pos, int val);
void deleteElement(int pos);
void display();

int arr[MAX_SIZE];
int n;

void write(int n) {
    if (n > MAX_SIZE) {
        printf("Array size exceeds maximum size of %d\n", MAX_SIZE);
        return;
    }

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void insert(int pos, int val) {
    if (pos < 0 || pos > n) {
        printf("Invalid position\n");
        return;
    }

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++;
}

void deleteElement(int pos) {
    if (pos < 0 || pos >= n) {
        printf("Invalid position\n");
        return;
    }

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void display() {
    printf("Array elements (size of array: %d): [ ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}
int main(){
    printf("Enter size of array: ");
    
    scanf(" %d",&n);
    write(n);
    while(1){
        printf("\n\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        int choice, val, pos;
        printf("Enter your choice: ");
        scanf(" %d",&choice);
        switch(choice){
            case 1:
                printf("Enter value to insert: ");
                scanf(" %d",&val);
                printf("Enter position to insert: ");
                scanf(" %d",&pos);
                insert(pos, val);
                break;
            case 2:
                printf("Enter position to delete: ");
                scanf(" %d",&pos);
                deleteElement(pos);
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}