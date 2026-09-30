#include<bits/stdc++.h>
#include<string>
using namespace std;

bool isPalindrome(string str) {
    int i = 0;
    int j = str.length() - 1;

    while (i < j) {
        if (str[i] != str[j])
            return false;

        i++;
        j--;
    }

    return true;
}

int main() {
    string str;
    cin >> str;

    if (isPalindrome(str))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}