lues of end with respect to the loop
            CurrentSum = 0;
            for (int k = start; k <= end; k++) {
                CurrentSum += arr[k]; // updating current sum
            }
            if (MaxSum < CurrentSum) {
                MaxSum = CurrentSum; // initializin