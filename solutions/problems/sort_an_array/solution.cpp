class Solution {
public:
    int partition(vector<int>& arr , int low , int high){
        int random = low + rand()%(high - low + 1);
        swap(arr[random] , arr[high]);
        int i = low - 1;
        int pivot = arr[high]; 
        for(int j = low ; j < high ; j++){
            if(arr[j] < pivot){
                i++;
                swap(arr[i] , arr[j]);    
            }
        }
        swap(arr[i+1] , arr[high]);
        return i+1;
    }
    void quickSort(vector<int>& nums , int low ,int high){
        if(low < high){

            int pi = partition(nums , low , high);

            quickSort(nums , low , pi-1);
            quickSort(nums , pi + 1 , high);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size() - 1;
        quickSort(nums , 0 , n);
        return nums;
        
    }
};