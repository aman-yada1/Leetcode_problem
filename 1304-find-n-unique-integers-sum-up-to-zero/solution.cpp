// 0 ms | 9.6 MB
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        int num = -n/2, k = n;
        while(k > 0){
            if(n % 2 == 0 && num != 0){
                ans.push_back(num++);
            }
            else if(n % 2 == 0 && num == 0){
                k++;
                num++;
            }
            else{
                ans.push_back(num++);
            }
            k--;
        }
        return ans;
    }
};