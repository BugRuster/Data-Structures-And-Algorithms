#include <iostream>
using namespace std;

void MaximuSubarraySum(int arr[], int size) { // this is a brute force method with worst complexity of O(n^3)
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

void MaximuSubarraySum(int arr[], int size) {
    int prefix[size];
    int currSum = 0;  // This is a Prefix Method to find Maximum Subarray Sum
    int MaxSum = INT16_MIN;
    prefix[0] = arr[0];
     for (int i = 1; i < size; i++) {
        prefix[i] = prefix[i - 1] - prefix[i];
     }

     for (int i = 0; i < size; i++) {
        int start = i;
        for (int j = i; j < size; j++) {
            int end = j;

            currSum = start == 0 ? prefix[end] : prefix[end] - prefix[start -1];

            if (MaxSum < currSum) {
                MaxSum = currSum;
            }
        }
     }
     cout << MaxSum << endl;
}


void MaximuSubarraySum(int arr[], int size) {
    int mn = INT_MIN;
    int cn = 0;
    for (int i = 0; i < size; i++) {
        cn = cn + arr[i];
        if (cn < 0) {
            cn = 0;  // Kadane's Algorithm
        }
        mn = max(cn, mn);
    }
    cout << mn << endl;
}

int main ()
{
    int arr[] = {1 ,-2, 6, -1 ,3};
    int size = sizeof(arr)/sizeof(arr[0]); // Working as Main Function
    MaximuSubarraySum(arr, size);
    return 0;
}