class Solution {
public:
    long long minCost(vector<int>& arr, vector<int>& brr, long long k) {
        vector<int> arr1 = arr;
        sort(arr.begin(), arr.end()); // arr is sorted and arr1 is unsorted
        vector<int> brr1 = brr;
        sort(brr.begin(), brr.end());
        long long cost = k;
        long long cost1 = 0;
        for(int i= 0 ; i<arr.size() ; i++){
            cost += abs(brr[i] - arr[i]);
            cost1 += abs(brr1[i] - arr1[i]);
        }
        if(cost1<cost) return cost1;
        else return cost ;
        
        
    }
};