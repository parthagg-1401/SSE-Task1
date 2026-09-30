#include<bits/stdc++.h>
using namespace std;

int findMissing(int arr[], int n) {
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < n - 1; i++)
        actualSum += arr[i];

    return expectedSum - actualSum;
}

int main() {
    int n;
    cin >> n;

    int arr[n - 1];

    for (int i = 0; i < n - 1; i++)
        cin >> arr[i];

    cout << findMissing(arr, n);

    return 0;
}