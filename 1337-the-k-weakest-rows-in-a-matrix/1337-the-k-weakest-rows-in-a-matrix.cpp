class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();

        vector<pair<int, int>> v;
        int count0=0;

        for(int i=0; i<m; i++){
            int count1=0;
            for(int j=0; j<n; j++){
                if(mat[i][j]==1){
                    count1++;
                }
            }
            v.push_back({count1, i});
        }
        sort(v.begin(), v.end());

        vector<int> ans;

        for(int i = 0; i < k; i++) {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};