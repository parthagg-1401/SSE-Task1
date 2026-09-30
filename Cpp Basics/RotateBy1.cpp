#include<bits/stdc++.h>
using namespace std;

void rotateRight(int arr[], int n) {
    for (int i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = arr[n-1];
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    rotateRight(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}