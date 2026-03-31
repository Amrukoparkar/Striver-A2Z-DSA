#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int n, vector<int> &arr)
{
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) return -1;
    return secondLargest;
}
