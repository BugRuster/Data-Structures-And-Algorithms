#include <iostream>
using namespace std;
void reverse(int arr[], int size) {
    int first = 0, last = size - 1;
    while (first < last) { // swaping 
        int temp = arr[last];
        arr[last] = arr[first]; 
        arr[first] = temp;
         first++;
         last--;
    }
}
int main ()
{
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]); // size of array
    reverse(arr, size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}