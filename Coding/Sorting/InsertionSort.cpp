#include <iostream>
using namespace std;

void InsertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) { // starting from the index of 1.
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr) { // Updating The values till Last one 
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr; // Swaping the values 
    }
}

void PrintArray(int arr[], int size) {
    InsertionSort(arr, size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
}


int main ()
{
    int arr[] = {5, 4, 1, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    PrintArray(arr, size);
    return 0;
}
 
 
// @BugRuster