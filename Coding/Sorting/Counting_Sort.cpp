#include <iostream>
using namespace std;

void Counting_Sort(int arr[], int size) {
    int largest = INT_MIN;
    for (int i = 0; i < size; i++) {
        largest = max(largest, arr[i]);
    }
    int count[largest + 1];
    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    int j = 0;
    for (int i = 0; i < largest + 1; i++) {
        while(count[i] > 0) {
            arr[j] = i;
            j++;
            count[i]--;
        }
    }
}

void PrintArray(int arr[], int size) {
    Counting_Sort(arr, size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
}

int main ()
{
    int arr[] = {5, 4, 1, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    Counting_Sort(arr, size);
    return 0;
}
 
 
 
// @BugRuster