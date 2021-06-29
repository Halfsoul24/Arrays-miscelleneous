// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge(long long arr[],long long int start,long long int mid,long long int end){
    long long int n1 = mid-start+1;
    long long int n2 = end-mid;
    long long int a[n1],b[n2];
    long long int  inv=0;
    
    for(long long int i=0; i<n1; i++){
        a[i]=arr[start+i];
    }
    
    for(long long int i=0; i<n2; i++){
        b[i] = arr[mid+i+1];
    }
    long long int i=0, j=0, k=start;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            arr[k] = a[i];
            k++;i++;
        }
        else{
            arr[k] = b[j];
            k++;j++;
            inv+=n1-i;
           
        
        }
    }
    while(i<n1){
        
        arr[k] = a[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = b[j];
        k++;j++;
    }
    // cout<<inv;
    return inv;
}

long long int mergeSort(long long arr[],long long int start,long long int end){
    long long int mid  = start + (end-start)/2;
    long long int inv=0;
    if(start<end){
         inv+=mergeSort(arr,start,mid);
        inv+=mergeSort(arr,mid+1,end);
        inv+=merge(arr,start, mid, end);
    
    }
   
    return inv;
}
long long int inversionCount(long long arr[], long long N)
{
    long long int start = 0;
    long long int end = N;
     return mergeSort(arr,start,end);
    // return 1;
}
   
};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends
