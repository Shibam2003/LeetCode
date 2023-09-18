//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        if (n <= 0) {
            return false;
        }
        
        // A power of two in binary has only one '1' bit.
        // For example, 8 is 1000, 16 is 10000, etc.
        // So, if we bitwise AND n and (n - 1), it should be zero for powers of two.
        // For example, 8 & 7 = 1000 & 0111 = 0000 (zero)
        // For non-powers of two, it won't be zero.
        return (n & (n - 1)) == 0;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{

    int t;
    cin>>t;//testcases

    for(int i=0;i<t;i++)
    {
        long long n; //input a number n
        cin>>n;

        Solution ob;
         if(ob.isPowerofTwo(n))//Now, if log2 produces an integer not decimal then we are sure raising 2 to this value
             cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;

    }

    return 0;
}

// } Driver Code Ends