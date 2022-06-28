class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0 ; i < 9; i++){
            if(validrow(board, i)){
                return false;
            }
        }
        
        for(int i = 0 ; i < 9; i++){
            if(validcol(board, i)){
                return false;
            }
        }
        
        for(int i = 0; i < 9; i+=3){
            for(int j = 0 ; j < 9; j+=3){
                if(validsquare(board, i, j)){
                    return false;
                }
            }
        }
        
        return true;
    }
    
    bool validrow(vector<vector<char>>& board, int row){
        unordered_set <char> check;
        for(int i = 0 ; i < 9; i++){
            if(board[row][i] != '.'){
                if(check.count(board[row][i])){
                    return true;
                }
                check.insert(board[row][i]);
            }
        }
        return false;
    }
    
    bool validcol(vector<vector<char>>& board,int col){
        unordered_set <char> check;
        for(int i = 0 ; i < 9; i++){
            if(board[i][col] != '.'){
                if(check.count(board[i][col])){
                    return true;
                }
                check.insert(board[i][col]);
            }
            
        }
        return false;
    }
    
    bool validsquare(vector<vector<char>>& board, int start_row, int start_col){
        unordered_set <char> check;
        for(int i = start_row; i < start_row + 3; i++){
            for(int j = start_col; j < start_col + 3; j++){
                if(board[i][j] != '.'){
                    if(check.count(board[i][j])){
                        return true;
                    }
                    check.insert(board[i][j]);
                }
            }
        }
        return false;
    }
};
