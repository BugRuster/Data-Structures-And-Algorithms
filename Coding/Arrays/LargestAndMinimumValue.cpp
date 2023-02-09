#include <iostream>
using namespace std;

int large(int arr[], int size) {
    int largest = INT_MIN; // Minus Infinity
    for (int i = 0; i < size; i++) {
        if (largest < arr[i]) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int arr[] = {2, 3, 5, 8, 10, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = large(arr, size);
    cout << "The largest element of the array is -->> " << largest << endl;
    return 0;
}