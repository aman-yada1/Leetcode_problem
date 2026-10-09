// 0 ms | 9 MB
class Solution {
public:
    vector<int> getRow(int rowIndex) {

        vector<int> ans;
        for(int i=0;i<=rowIndex;i++){
            vector<int> row;
            long long val = 1;
            for(int j=0;j<=i;j++){
                row.push_back(val);
                val = val * (i-j) / (j + 1);
            }
            if(i == rowIndex){
                return row;;
            }
        }
        return ans;
    }
};