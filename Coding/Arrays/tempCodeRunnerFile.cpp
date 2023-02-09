#include <iostream>
using namespace std;
int Largest(int arr1[], int size) {
    int larg = INT_MIN; // Minus Infinity
    for (int i = 0; i < size; i++) {
        if (larg < arr1[i])
        {
            larg = arr1[i]; 
        }
    }
}
int main ()
{
    int arr[] = {2, 3, 5, 8, 10, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int solution = Largest(arr, size);
    cout << solution << endl;
    // cout << solution << endl;
    // cout << "The Largest element of the array is -- >" << solution << endl;
    // // cout << INT16_MIN << endl; 
    // return 0;
}