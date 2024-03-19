#include <iostream>
using namespace std;
// bool isPresent(int arr[][4],int target, int row, int col){
//      for(int row=0;row<3;row++){
//         for(int col=0;col<4;col++){
//            if(target==arr[row][col]){
//             return 1;
//            }
//         }
// }
// return 0;}
// int main(){
//     int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};//Aise yeh row wise print krdega but if we want ki konsi row mein khy daalna hai then
//     //then niche wala array dekho.
//     //int arr[3][4]={{1,2,3,4},{100,200,300,400},{111,222,333,444}};//Yeh teeno row wise print hojaenge
//     // for(int row=0;row<3;row++){
//     //     for(int col=0;col<4;col++){
//     //         cin>>arr[row][col];
//     //     }
//     // }
//     // for(int col=0;col<4;col++){//Column wise print krvane k liye, inout cokumn wise lenge but print row wise krvaenge
//     // //Value put krke verify krliyo
//     //     for(int row=0;row<3;row++){
//     //         cin>>arr[row][col];
//     //     }
//     // }
    // for(int row=0;row<3;row++){
    //     for(int col=0;col<4;col++){
    //         cout<<arr[row][col]<<" ";
    //     }cout<<endl;
//     }

//     //When we pass a 2-D array as a paramter in a function then atleast uske number of columns ko batana padta hai
//     //so the compiler can pre-calculate the memory addresses of individual elements.

//     //Let's do linear search here
//     int target;
//     cout<<"Enter the number whose presence is to be checked : ";
//     cin>>target;
//     if(isPresent(arr,target,3,4)){
//         cout<<"Element is found";
//     }
//     else{
//         cout<<"Element not found";
//     }
   
//     }

// int main(){
//     //Let's find the row wise sum of the elements in the array
//     int arr[3][4]={{1,2,3,4},{11,12,13,14},{1,4,6,0}},k;
//     int maxi = -172835;
//     //Ouput should be 10,50,11 i.e. sum of all the row elements
//     for(int row=0;row<3;row++){
//         int sum=0;
//         for(int col=0;col<4;col++){
//         sum=arr[row][col]+sum;
//         }
//         cout<<"The sum of elements of row "<<i<<" is "<<sum<<endl;
        
//         i++;
//     //Suppose yeh bhi batana hai ki teeno mein se larget sum konsi row mein hai and row number bhi batado
//       if(sum>maxi){
//         maxi=sum;
//         k=row;
//       }
//     }
//       cout<<"Maximum sum was in the row "<<k<<" and it was : "<<maxi<<endl;
//     cout<<endl;



    //Let's find column wise sum too
    //Output will be 13,18,22,18

    // for(int col=0;col<4;col++){//Col constant krdiya basically
    // int sum1=0,j=1;
    //     for(int row=0;row<3;row++){
    //     sum1=arr[row][col]+sum1;
    //     }
    //     cout<<"The sum of elements of col "<<j<<" is "<<sum1<<endl;
       
    //     j++;
    // }

// }

//Printing a 2-D array like a wave, Theory will be in the notebook
// #include <bits/stdc++.h> 
// vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
// {
//   vector <int> ans;
//     for(int col=0;col<mCols;col++){
//        //m&1 in C++ basically tells if m is odd and else condition 
//        //will be followed if m is even
//    It shouldn't be m&1==0 or something...m&1 in if condition checks if m is odd
//       if(col&1){
//         for (int row = nRows - 1; row >= 0; row--) {

//           ans.push_back(arr[row][col]);
//         }
      
//       }
//     else {
//         for (int row = 0; row < nRows; row++) {
//           ans.push_back(arr[row][col]);
//         }
//       }
//     }
//       return ans;
       
// }


//Spiral Print
//Leetcode pe submit nhi hua, int startingroevagera overflow kr rhe the
//Diplicates ki care nahi krni

// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int>ans;
//         int row = matrix.size();
//         int col = matrix[0].size();
//         int count = 0;
//        int  total = row*col;
//         //Indexes hain
//          int startingRow=0;
//         int startingcol=0; 
//         int endingrow=row-1; 
//         int endingcol=col-1;
//         while(count<total){
//         //Printing starting row
//         for(int index=startingcol;total<count && index<=endingcol;index++){
//             ans.push_back(matrix[startingRow][index]);
//             count++;
//         }
//         startingRow++;

//         //Printing ending Column
//         for(int index=startingRow;total<count && index<=endingrow;index++){
//             ans.push_back(matrix[index][endingcol]);
//             count++;
//         }
//         endingcol--;

//         //Printing Ending row
//         for(int index=endingcol;total<count && index>=startingcol;index--){
//             ans.push_back(matrix[endingrow][index]);
//             count++;
//         }
//         endingrow--;

//         //Printing Starting Column
//         for(int index=endingrow;total<count && index>=startingRow;index--){
//             ans.push_back(matrix[index][startingcol]);
//             count++;
//         }
//         startingcol++;

//         }
//         return ans;

//     }
    
// }

//Binary Search in a 2-D array, Whole theory is on the notebook  
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row=matrix.size();
//         int col = matrix[0].size();
//         int start = 0;
//         int end = row*col-1;
//         int mid = start + (end-start)/2;
//         while(start<=end){
//             int element = matrix[mid/col][mid%col];
//             if(element==target){
//                 return 1;
//             }
//             if(element<target){
//              start=mid+1;
//             }
//             else{
//                 end=mid-1;
//             }
//             mid = start + (end-start)/2;

//         }
//         return 0;
//     }
// };


//Search in the 2-D array in a different way, Whole theory on notebook
//Bs kone k element ko pakad k chalna hai
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row=0,col=matrix[0].size()-1;
//         int end=matrix.size();//No. Of rows
       
     
//             while(row<end&&col>=0){
//                 int element = matrix[row][col];
//                 if(element==target){
//                     return 1;
//                 }
//                 if(element<target){
//                    row++;
//                 }
//                 else{
//                     col--;
//                 }
              
//             }
        
//         return 0;
//     }
// };