#include<iostream>
#include<vector>
using namespace std;
int n = 9;
vector<vector<int>> hang(9, vector<int>(9, 0));
vector<vector<int>> cot(9, vector<int>(9, 0));
vector<vector<int>> square(9, vector<int>(9, 0));

int index(int i, int j){
    if(i <=2 && j <=2){
        return 0;
    }
    else if(i <= 2 && j <= 5){
        return 1;
    }
    else if(i <= 2 && j <= 8){
        return 2;
    }
    else if(i <= 5 && j <= 2){
        return 3;
    }
    else if(i <= 5 && j <= 5){
        return 4;
    }
    else if(i <= 5 && j <= 8){
        return 5;
    }
    else if(i <= 8 && j <= 2){
        return 6;
    }
    else if(i <= 8 && j <= 5){
        return 7;
    }
    else 
        return 8;
}

void out(vector<vector<char>>& board){
    for(int i = 0; i < 9; i++){
        //cout << "["
        for(int j = 0; j < 9; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

void Try(int i, int j, vector<vector<char>>& board){
    if(j == 9){
        Try(i + 1, 0, board);
    }
    else if(i == 9 && j == 0){
        out(board);
        return;
    }
    else if(board[i][j] != '.'){
        Try(i, j + 1, board);
    }
    else{
        for(int k = 1; k <= 9; k++){
            if(!hang[i][k-1] && !cot[j][k-1] && !square[index(i, j)][k-1]){
                hang[i][k-1] = 1;
                cot[j][k-1] = 1;
                square[index(i, j)][k-1] = 1;
                board[i][j] = (char)('0' + k);
                Try(i, j + 1, board);
                hang[i][k-1] = 0;
                cot[j][k-1] = 0;
                square[index(i, j)][k-1] = 0;
                board[i][j] = '.';
            }
        }
    }
}

void solveSudoku(vector<vector<char>>& board) {
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            char chr = board[i][j];
            if(chr!='.'){
                hang[i][chr-'0' -1] = 1;
                cot[j][chr - '0' - 1] = 1;
                square[index(i, j)][chr-'0' - 1] = 1;
            }
        }
    }
    Try(0, 0, board);
}

int main(){
    vector<vector<char>> board(9, vector<char> (9));
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> board[i][j];
        }
    }
    cout << "--------" << endl;
    
    solveSudoku(board);
    return 0;
}
// 5 3 . . 7 . . . .
// 6 . . 1 9 5 . . .
// . 9 8 . . . . 6 .
// 8 . . . 6 . . . 3
// 4 . . 8 . 3 . . 1
// 7 . . . 2 . . . 6
// . 6 . . . . 2 8 .
// . . . 4 1 9 . . 5
// . . . . 8 . . 7 9