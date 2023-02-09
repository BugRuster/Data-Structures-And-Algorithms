#include <iostream>
using namespace std;

void printSubarrays(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int first = arr[i];
        for (int j = i; j < size; j++) {
            int end = arr[j];
            for (int k = first; k <= end-1; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main ()
{
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    printSubarrays(arr, size);
    return 0;
}