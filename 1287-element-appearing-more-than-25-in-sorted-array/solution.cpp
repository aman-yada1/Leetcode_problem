// 0 ms | 16.3 MB
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size()/4;

        for(int i=0;i<arr.size();i++){
            int num = arr[i];
            if(arr[i] == num && arr[i+n] == num){
                return num;
            }
        }
        return 0;
    }
};