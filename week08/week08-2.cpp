//week08-2.cpp
//設定一堆0
//不能一邊讀,一邊設成0,要兩階段,再設0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //第一階段,先讀完,記下全部0對應i和j
        int M=matrix.size(),N=matrix[0].size();//左手M,右手N
        vector<int>markI(M,0),markJ(N,0);//宣告C++的陣列,長度分別M N,裡面都設成0
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(matrix[i][j]==0){///要計下對應的i,j
                    markI[i]=1;//標記一下i的這整橫條,等一下清為0
                    markJ[j]=1;//標記一下j的這整橫條,等一下清為0
                }
            }
        }
        //第2階段 再照著markI和markJ的標記,把整條清0
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(markI[i]==1||markJ[j]==1)matrix[i][j]=0;
            }//如果有標記,再把它對應的項變成0
        }
    }
};
