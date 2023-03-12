#include <iostream>
using namespace std;

void BubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) { // This Loop Will select one element of the array at a time
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        BubbleSort(arr, size);
        cout << arr[i] << endl;
    }
}

int main ()
{
    int arr[] = {5, 4, 1, 3, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, size);
    // More Algorithms will be uploaded soon Stay Tuned !
    return 0;
}
 
 
 
// @BugRuster