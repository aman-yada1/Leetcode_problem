// 8 ms | 18.3 MB
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int> mp;
        for(int x : arr){
            mp[x]++;
        }
        int n = arr.size()/4;

        for(auto& x : mp){
            if(x.second > n){
                return x.first;
            }
        }
        return 0;
    }
};