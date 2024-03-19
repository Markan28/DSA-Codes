// N Queens Problem
// #include<bits/stdc++.h>

// void addSolution(vector<vector<int>>&board,vector<vector<int>>&ans, int n){
//     vector<int>temp;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             temp.push_back(board[i][j]);
//         }
//     }
//     ans.push_back(temp);
//     // Multiple temp vectors answer ho skte hain thus aisa krna pada
// }

// bool isSafe(int row, int col, vector<vector<int>>&board, int n){
//     // Safe tab hoga bas doosri queen ko attack naa kre
//     // Same row col and diagonal mein naa ho
//     int x = row, y = col;
//     //Check for same row, Humne L -> R Queen fill ki hain toh Bas Pichle cols ko he dekhna hai
//     while(y>=0){
//         if(board[x][y] == 1)
//         return false;
//         y--;
//     }

//     // Col check krne ki need he nahi hai bcz Ek time pe Ek col mein ek he queen hogi

//     // Diagonals check krne hain bas pichle wale
//     x = row, y = col;
//     while(x>=0 && y>=0){
//         if(board[x][y] == 1)
//         return false;
//         y--;
//         x--;
//         //Upar ko jata hua left side wala diagonal
//     }
//     x = row, y = col;
//     while(x<n && y>=0){
//         if(board[x][y] == 1)
//         return false;
//         y--;
//         x++;
//         //Niche ko jata hua left side wala diagonal
//     }

//     return true;
// }

// void solve(int col,vector<vector<int>>&ans,vector<vector<int>>&board,int n){
//     // Base Case
//     if(col == n){
//         addSolution(board,ans,n); // Jo bhi solution bana pada hai usko ans mein dalna hai
//         return;
//     }

//     //Solve 1 case baaki recursion dekhlega
//     for(int row=0;row<n;row++){ // Har row pe queen rakhke answer banega
//         if(isSafe(row,col,board,n)){
//             // If Placing queen is safe
//             board[row][col] = 1;// Bcz safe tha toh yahan pe queen rakhdi
//             solve(col+1,ans,board,n); // Ab agle col k liye call krdi
//             // Ab Backtracking
//             board[row][col] = 0; // Jo Queen rakhi thi usko hatana padega
//         }
//     }
// }

// vector<vector<int>> solveNQueens(int n) {
//     vector<vector<int>>board(n,vector<int>(n,0)); // 0 se initialise krdiya
//     vector<vector<int>>ans;

//     solve(0,ans,board,n);

//     return ans;
// }


// Sudoku Solver, Easy Question
// #include <bits/stdc++.h> 
// bool isSafe(int row, int col, vector<vector<int>>&board, int val){
//     for(int i=0;i<9;i++){
//        // row check
//        if(board[row][i] == val)
//        return false;

//        // col check
//        if(board[i][col] == val)
//        return false;

//        // 3X3 Matrix Check
//        if(board[3*(row/3)+i/3][3*(col/3)+i%3] == val)
//        return false;
//     }
//     return true;
// }

// bool solve(vector<vector<int>>&board){
//     int n = board[0].size(); // n 9 he aayega

//     for(int row=0;row<n;row++){
//         for(int col=0;col<n;col++){
//             if(board[row][col] == 0){// i.e. empty hai, Ab fill krenge val se
//                 for(int val=1;val<=9;val++){
//                     if(isSafe(row,col,board,val)){
//                         board[row][col] = val;

//                         // Recursive Call
//                         bool FurthurSolPossible = solve(board);
//                         if(FurthurSolPossible){
//                             return true;
//                         }
//                         else{
//                             // Backtracking
//                             board[row][col] = 0;
//                         }
//                     }
//                 }
//                 // Yahan tak aaye i.e. 1 - 9 saari values try krlin and ans he nahi aaya
//                 return false; // i.e. Solution Possible he nahi hai

//             }
//         }
//     }
//     return true; // Sab ache se ho gya

// }
// void solveSudoku(vector<vector<int>>& sudoku)
// {
// 	solve(sudoku);
// }