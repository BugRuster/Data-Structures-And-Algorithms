#include <iostream>
#include <array>
using namespace std;

int update(int arr[], unsigned int n) {
    cout << n << endl;
    for (int i = 0; i < n ; i++) {
        arr[i] = arr[i] + 1;
    }
}

int main ()
{
    int arr[] = {96, 97, 98};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    update(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}