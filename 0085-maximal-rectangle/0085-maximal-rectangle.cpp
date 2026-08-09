class Solution {
public:
    int Rectangle(vector<int>& heights) {
        vector<int>v1;
        vector<int>v2;
        vector<int>width;
        vector<int>area;
        stack<int>s1;
        stack<int>s2;
        int n=heights.size();

        //Nearest smaller to right.....

        for(int i=n-1; i>=0; i--){
               while(s1.size() && heights[s1.top()] >= heights[i]){
                    s1.pop();
                }
                if(s1.size()==0){
                    v1.push_back(n);
                }
                else{
                    v1.push_back(s1.top());
                }
            s1.push(i);
        }
         reverse(v1.begin(),v1.end());

        //nearest smaller to left....

         for(int i=0; i<n; i++){
               while(s2.size() && heights[s2.top()] >= heights[i]){
              s2.pop();
}
                if(s2.size()==0){
                    v2.push_back(-1);
                }
                else{
                    v2.push_back(s2.top());
                }
            s2.push(i);
        }
       

        //width array...

        for(int i=0; i<v1.size(); i++){
            width.push_back(v1[i]-v2[i]-1);
    }
    for(int i=0; i<n; i++){
        area.push_back(heights[i]*width[i]);
}
    sort(area.begin(),area.end());
    int n1=area.size();

  return area.back();
    }

    int maximalRectangle(vector<vector<char>>& matrix) {

        int row = matrix.size();
        int col = matrix[0].size();
        vector<int>height(col,0);
        int ans=0;

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(matrix[i][j]=='0'){
                    height[j]=0;
                }
                else{
                    height[j] += 1;
                }
            }
             ans = max(ans,Rectangle(height));
        }
        return ans;
    }
};