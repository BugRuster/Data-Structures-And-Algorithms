#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0, end = size - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == key) {
            return mid + 1;
        }
        if (arr[mid] > key) {
            end = end - 1;
        }
        else {
            start = start + 1;
        }
    }
    return -1;
}
int main ()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 4;
    int sol = binarySearch(arr, size, key);
    cout << sol << endl;
    return 0;
}