class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row=mat.size();
        int col=mat[0].size();
        int idx=0;
        if(row*col!=r*c){
            return mat;
        }
        vector<vector<int>>ans(r,vector<int>(c));   

            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                   idx=col*i+j;
                   
                   int newrow=idx/c;
                   int newcol=idx%c;
                   ans[newrow][newcol]=mat[i][j];
                }
            }
            return ans;    
        
    }
};
