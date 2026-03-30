#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
    int mini, maxi;
    int i;
    if(n % 2 == 0){
        if(arr[0] < arr[1]){
            mini = arr[0];
            maxi = arr[1];
        } else {
            mini = arr[1];
            maxi = arr[0];
        }
        i = 2;
    } else {
        mini = maxi = arr[0];
        i = 1;
    }

    while(i < n - 1){
        int localMin, localMax;

        if(arr[i] < arr[i+1]){
            localMin = arr[i];
            localMax = arr[i+1];
        } else {
            localMin = arr[i+1];
            localMax = arr[i];
        }

        if(localMin < mini) mini = localMin;
        if(localMax > maxi) maxi = localMax;

        i += 2;
    }

    return mini + maxi;
}
