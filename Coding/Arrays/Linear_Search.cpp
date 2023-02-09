#include <iostream>
using namespace std;

int linear_search(int arr1[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] == key) { return i; }
    }
    return -1;
}

int main ()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 10;
    int x = linear_search(arr, size, key);
    if (x == -1) { cout << "Key Not Found" << endl; }
    else { cout << "Key Found - " << x << endl; }
    return 0;
}