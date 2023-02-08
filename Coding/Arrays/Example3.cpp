#include <iostream>
#include <array>
using namespace std;

void example() {
    array<int,5> arr = { 1, 2, 3, 4, 5 };
    // int arr[] = { 1, 2, 3, 4, 5}; 
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }
    cout << arr.size() << endl;
}
int main ()
{
    example();
    return 0;
}
