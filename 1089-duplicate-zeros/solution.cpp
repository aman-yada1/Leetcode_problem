// 0 ms | 14.2 MB
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int j = 0;

        for(int i=0;i<n && j<n;i++){

            if (arr[i] == 0) {
                arr.insert(arr.begin() + i + 1, 0);
                arr.pop_back();
                i++;
            }
        }
    }
};