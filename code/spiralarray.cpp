class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int sr = 0;
        int sc = 0;
        int er = matrix.size() - 1;
        int ec = matrix[0].size() - 1;
        int t = (matrix.size())*(matrix[0].size());
        int i = 0;
        while(i<t){
            for(int j = sc;i<t && j<ec;j++){
                ans.push_back(matrix[sr][j]);
                i++;
            }
            for(int j = sr;i<t && j<er;j++){
                ans.push_back(matrix[j][ec]);
                i++;
            }
            for(int j = ec;i<t && j>=sc;j--){
                ans.push_back(matrix[er][j]);
                i++;
            }
            for(int j = er-1;i<t && j>sr;j--){
                ans.push_back(matrix[j][sc]);
                i++;
            }
            sr++;
            sc++;
            er--;
            ec--;

        }
        return ans;
    }

};