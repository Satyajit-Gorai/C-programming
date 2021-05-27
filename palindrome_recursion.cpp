#include<bits/stdc++.h>
using namespace std;

bool isPlaindrome(string s,int i,int j) {
    //base condition or terminating condition
    if(i>j){
        return true;
    }
    else {
        if(s[i]==s[j]) {
            cout << s[i] <<" " << s[j]<<endl;
            return isPlaindrome(s,i+1,j-1);
        }
    }
    return false;
}

int main()
{
     string s;
     cin >> s;
     int i=0,j;
     j = s.length();
     cout << j<<endl;
    bool b = isPlaindrome(s,i,j-1);
    //returns 1 is palindrome else 0
    cout << b <<endl;
    return 0;
}