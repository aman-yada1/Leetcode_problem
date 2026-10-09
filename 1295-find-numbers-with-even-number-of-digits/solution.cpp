// 0 ms | 14.5 MB
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int n = 0;
        for(int x : nums){
            string s = to_string(x);
            if(s.size() % 2 == 0){
                n++;
            }
        }
        return n;
    }
};