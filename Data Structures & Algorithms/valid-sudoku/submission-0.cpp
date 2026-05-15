class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        pair<int, int> coord;
        char cell;

        // {number, list of cell coordinates}
        unordered_map<int, vector<decltype(coord)>> seen;

        for (int i = 1; i <= board.size(); i++){
            for (int j = 1; j <= board[0].size(); j++){

                cell = board[i-1][j-1];
                if (cell != '.'){
                    for (auto it = seen[cell].begin(); it != seen[cell].end(); it++){
                        
                        // false for same row or column
                        if (i == it->first || j == it->second){
                            return false;
                        }

                        // false if in same 3x3 subgrid
                        if (ceil(i / 3.0) == ceil(it->first / 3.0) && ceil(j / 3.0) == ceil(it->second / 3.0)){
                            return false;
                        }
                    }
                    seen[cell].push_back(pair<int,int> {i, j});
                }
            }
        }
        return true;
    }
};
