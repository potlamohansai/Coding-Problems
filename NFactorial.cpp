//Factorial of N numbers using Recursion

#include<bits/stdc++.h>
using namespace std;

// Recursive Function
long long int factorial(int n) {
    if (n==1 || n==0) {                     //Base Condition
        return 1;
    }

    int smallResult = factorial(n-1);       //Recursive call

    int result = n* smallResult;            // small Calculation
    return result;
}


//Driver Code
int main() {
    int n;
    cout<<"Enter the number to find Factorial"<<endl;
    cin>>n;
    int ans = factorial(n);
    cout<<ans<<endl;

}

