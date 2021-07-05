void Solution::rotate(vector<vector<int> > &a) {
    /**
 * @input A : 2D integer array 
 * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 * 
 * @Output Void. Just modifies the args passed by reference 
*/
    int n11 = a.size();
    int n12 = a[0].size();
    int n = n11;
    int temp=0,temp2=0,temp3=0;
    for(int i=0; i<n11/2; i++){
        for(int j=i; j<n12-i-1; j++){
           
               int temp = a[j][n-1-i];
               a[j][n-1-i] = a[i][j];
               
               int temp2 = a[n-1-i][n-1-j];
               a[n-1-i][n-1-j] = temp;

               int temp3 = a[n-1-j][i];
               a[n-1-j][i] = temp2;

               
               a[i][j] = temp3; 
            //    cout<<temp<<" "<<temp2<<"  "<<temp3;
            
        }
       
    }
}

