// { Driver Code Starts
//Initial Template for C++


#include <iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//Complete this function
int RecursivePower(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    if(p==1)
    {
        return n;
    }
    return n*RecursivePower(n,p-1);
}


// { Driver Code Starts.


int main() {
	int T;
	cin>>T;//testcases
	while(T--)
	{
	    int n,p;
	    
	    //taking n and p as inputs
	    cin>>n>>p;
	    
	    //calling RecursivePower() function
	    cout<<RecursivePower(n,p)<<endl;
	}
	return 0;
}  // } Driver Code Ends