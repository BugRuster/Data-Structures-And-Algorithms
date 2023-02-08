#include <iostream>
#include <array>
using namespace std;

void example1() {
    int arr[100];
    cin >> arr[0]; // physics
    cin >> arr[1]; // chemistry
    cin >> arr[2]; // maths

    cout << arr[0] << " - Marks Of Physics \n" << arr[1] << " - Marks of Chemistry \n" << arr[2] << " - Marks of Maths " << endl;
    cout << "Percentage = " << (arr[0] + arr[1] + arr[2]) / 3 << "%" << endl;

    int SizeOfArray = sizeof(arr) / sizeof(arr[0]) ;

    cout << "Length of array = " << SizeOfArray << endl;
}

int main ()
{
    example1();
    return 0;
}