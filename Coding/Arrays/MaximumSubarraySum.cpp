#include <iostream>
using namespace std;

void MaximuSubarraySum(int arr[], int size) {
    int MaxSum = INT16_MIN; // initilizing the maxsum to - infinity
    int CurrentSum = 0;


    for (int i = 0; i < size; i++) {
        int start = i; // putting the values of start with respect to the loop
        for (int j = i; j < size; j++) {
            int end = j; // putting the values of end with respect to the loop
            CurrentSum = 0;
            for (int k = start; k <= end; k++) {
                CurrentSum += arr[k]; // updating current sum
            }
            if (MaxSum < CurrentSum) {
                MaxSum = CurrentSum; // initializing the value of MaxSum
            }
        }
    }
    cout << MaxSum << endl;
}
int main ()
{
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    MaximuSubarraySum(arr, size);
    return 0;
}