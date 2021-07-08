#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int maximumSumSubarray(int K, vector<int> &arr , int N){
        
        int ans = 0;
        int sum =0;
       for(int i=0; i<K; i++){
           ans+=arr[i];
       }
       sum = ans;
    //   cout<<ans<<endl;
       for(int i=K; i<N; i++ ){
           sum+= arr[i]-arr[i-K];
        //   cout<<sum<<endl;
           ans = max(sum, ans);
        //   cout<<ans<<endl;
       }
        return ans;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}   // } Driver Code Ends
