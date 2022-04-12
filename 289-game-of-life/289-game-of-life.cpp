class Solution {
public:
    int R,C;
    bool isLive(int status){
        return status==1;
    } 

    int getLiveNeighboursCnt(int row,int col,vector<vector<int>> &board){
        int cnt=0;
        cnt+=row-1 >= 0 && board[row-1][col] ? 1 : 0;
        cnt+=row+1 < R && board[row+1][col] ? 1 : 0;
        cnt+=col-1 >=0 && board[row][col-1] ? 1 : 0;
        cnt+=col+1 < C && board[row][col+1] ? 1 : 0;
        cnt+=row-1 >=0 && col-1 >=0 && board[row-1][col-1] ? 1 : 0;
        cnt+=row-1 >=0 && col+1 < C && board[row-1][col+1] ? 1 : 0;
        cnt+=row+1 < R && col-1 >= 0 && board[row+1][col-1] ? 1 : 0;
        cnt+=row+1 < R && col+1 < C && board[row+1][col+1] ? 1 : 0;
        return cnt;
    }
    void gameOfLife(vector<vector<int>>& board) {
        R=board.size(),C=board[0].size();
        int liveNeighboursCnt;
        vector<vector<int>> tempBoard=board;
        
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                liveNeighboursCnt=getLiveNeighboursCnt(i,j,tempBoard);
                if(isLive(board[i][j])){
                    if(liveNeighboursCnt<2 || liveNeighboursCnt>3) board[i][j]=0;
                }
                else board[i][j]=liveNeighboursCnt == 3 ? 1 : 0;
            }
        }
        
    }
};