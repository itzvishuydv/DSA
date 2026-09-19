class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int s=0;
        int e=arr.size()-1;
        int missing_number;
        while(s<=e){
            int m=s+(e-s)/2;

            if(arr[m]-(m+1)<k) {
                s=m+1;
            }
            else {
                
                e=m-1;
                
            }
        }
        return k+s;
    }
};