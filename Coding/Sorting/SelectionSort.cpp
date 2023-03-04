#include <iostream>
using namespace std;

void SelectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min = i;
        for (int j = i + 1; j < size - 1; j++) {
            if (arr[min] < arr[j]) { // Comparing The elements of the array
                min = j; 
            }
        }
        // Swaping 
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        SelectionSort(arr, size);
        cout << arr[i] << endl;
    }
}

int main ()
{
    int arr[] = {5, 4, 1, 3, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, size);
    return 0;
}
 
 
 
// @BugRuster