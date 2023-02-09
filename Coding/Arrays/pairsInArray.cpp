#include <iostream>
using namespace std;

void pairsOfArray(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        int firstNo = arr[i];
        for (int j = i + 1; j < size; j++) {
            cout << "(" << firstNo << "," << arr[j] << ")";
            count++;
        }
        cout << endl;
    }
    cout << count << endl;
} 
int main ()
{
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    pairsOfArray(arr, size);
    return 0;
}