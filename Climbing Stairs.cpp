/* 
Problem Statement:-

You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
 

Constraints:

1 <= n <= 45

it is more of like fibonacci series where you have to print n'th fibonacci number.
happy coding!!!
*/

#include<bits/stdc++.h>
using namespace std;

int climbStairs(int n) {
        if (n<=2) {
            return n;
        }
        int x=1,y=2,temp=0;
        for(int i=3; i<n;i++) {
            temp = y;
            y = x+y;
            x=temp;
        }
 
        return (x+y);
}
//or can use this function
int climbStairs1(int n) {
    int step[n+1];
    step[0] = 1;
    step[1] = 1;
    for(int i=2;i<=n;i++) {
        step[i] = step[i-1] + step[i-2];
    }
 
    return step[n];
}

//Driver Function
int main()
{
    int n;
    cin >> n;
    cout << climbStairs(n)<<endl;
    return 0;
}
