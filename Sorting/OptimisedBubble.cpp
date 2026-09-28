#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    

    for(int i=n-1; i>=0; i--){
        int didSort = 0;
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1])
            swap(arr[j], arr[j+1]);
            didSort = 1;
        }
        if(didSort == 0){
            break;
        }
        
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

        return 0;
}