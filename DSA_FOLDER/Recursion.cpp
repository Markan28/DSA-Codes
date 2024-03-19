#include <iostream>
using namespace std;
// int factorial(int n){
//     if(n==0){
//         //Base Condition
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// int main(){
//     /*factorial Problem using recursion */
//     int n;
//     cout<<"Enter a number whose factorial is to be found : ";
//     cin>>n;
//     int ans = factorial(n);
//     cout<<"The factorial of "<<n<<" is : "<<ans<<endl;

// }


// int Poweroftwo(int p){
//     if(p==0){
//         return 1;
//     }
//     return 2*Poweroftwo(p-1);
// }

// int main(){
//     //Power of 2 Using Recursion
//     int p;
//     cout<<"Enter power of 2 to be found : "<<endl;
//     cin>>p;
//     int ans = Poweroftwo(p);
//     cout<<p<<" times power of 2 is : "<<ans<<endl;
// }



// int Givecount(int count){
//     if(count == 0){
//         return 1;
//     }
//     cout<<count<<" ";
//     Givecount(count - 1);
//     /*Agar hum Givecount function ko cout<<count k upar likhenge toh 1 2 3 4 5 6 7 print hojaega if count is 7
//     Iska Call Stack or Flowchart notebook pe hai*/
// }

// int main(){
//     int count;
//     //Counting Print using Recursion, Suppose count is 5, Output should be 5 4 3 2 1 
//     cout<<"Enter Count : "<<endl;
//     cin>>count;
//     Givecount(count);
// }

// int Fibo(int n){
//     int i;
//     if(n==1){
//         return 0;
//     }
//     if(n==2){
//         return 1;
//     }
//     i = Fibo(n-1)+Fibo(n-2);
    


// }

// int main(){
//     /*Fibonacci series mein batana hai ki nth place pe konsa number hai i.e. Fibonacci series is 0 1 1 2 3 5 8.....
//     So 3rd place pe hai 1 therefore return 1 krdo*/
//     int n;
//     cout<<"Enter the number to be found for the term of the Fibonacci series : "<<endl;
//     cin>>n;
//     cout<<"The number at nth place is : "<< Fibo(n);

// }

//codeStudio Solution of Problem climbing nth stairs using recursion, Theory on notebook
// #include <bits/stdc++.h> 
// int countDistinctWays(int nStairs) {
//     if(nStairs<0){
//         return 0;
//     }
//     if(nStairs==0){
//         return 1;
//     }
   
//     int ans = countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
//     return ans;
// }

// void sayDigit(string arr[],int n){
//     int digit;
//     if(n==0){
//         return;
//     }
//     digit=n%10;
//     n=n/10;
//     sayDigit(arr,n);
//     /*sayDigit function ko cout se upar rakhne ka yeh fayda hoga ki jo string ulti print ho rahi thi woh sidhi print hogi
//     bcz Base condition se piche ko code chalega and we will get our desired output*/
//     cout<<arr[digit]<<" ";
// }
// int main(){
//     //Say digits Problem i.e. Input - 412 Output - Four One Two
//     int n;
//     cout<<"Enter the number to be known in english : ";
//     cin>>n;
//     string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
//     sayDigit(arr,n);
// }

// bool isSorted(int arr[],int size){
//     if(size==0||size==1){
//         return 1;
//     }
//     if(arr[0]>arr[1]){
//         return 0;
//     }
//     else{
//     bool ans = isSorted((arr+1),size-1);
//     return ans;
//         }
// }

// int main(){
//     //Check if an array is sorted using Recursion
//     int arr[6]={2,4,5,6,12,15};
//    cout<<"The array is sorted Yes or No --> "<< isSorted(arr,6);

// }


// int getSum(int arr[6],int size){
//     if(size==0){
//         return 0;
//     }
//     if(size==1){
//         return arr[0];
//     }
//     int end = size-1;
//     int sum = arr[end];
//     sum = sum+getSum(arr,size-1);
//     return sum;

// }
// int main(){
//     //Return sum of elements of an array using recursion
//    int arr[6]={1,2,3,4,5,6};
//    cout<<"Sum of elements of an array is : "<<getSum(arr,6);
// }

// bool linSearch(int arr[], int size , int target){
//     if(size==0){
//         return false;
//     }
//     if(arr[0]==target){
//         return true;
//     }
   
//         bool ans = linSearch(arr+1,size-1,target);
// //arr+1 ka matlab hai ki ab arr[0] ko pass he nhi kr rhe
// //arr[1] se pass kr rhe hain, tabhi size bhi decrease kra tha.
// //basically arr[1], arr[0] ki tarah check hoga if mein and pura array check hojaega
// //Agar pura array check hogya and kuch bhi naa mila that means size = 0 hogya thus Target not found.
//         return ans;
    
    
// }

// int main(){
//     int target;
//     //Linear Search using Recursion
//     int arr[6]={1,5,3,78,45,12};
//     cout<<"Enter the number to be searched : "<<endl;
//     cin>>target;
//     cout<<"Was the no. present Yes or No -->"<<linSearch(arr,6,target)<<endl;
// }



//Binary search using Recursion,Sexy Code, khud likhea
// BinSearch(int arr[], int size, int target,int start,int end){
//     if(size==0){//Base Condition can be if(start>end) toooooo.
/*Agar usko base condition lenge toh yeh size wali cheez krne ki zaroorat he nahi hai bas function mein 4 cheezein denge except size
Baaki saara code waise he chalte rahega, Size doesn't matter
But Yeh size wale scene k saath bhi Codestudio pe submit hogya tha*/
//         return false;
//     }
   
//     int mid = start + (end-start)/2;
//     if(arr[mid]==target){
//         return true;
//     }
//     if(arr[mid]>target){
//     BinSearch(arr,size/2,target,start,mid-1);
//     }
//     else{
//         BinSearch(arr,size/2,target,mid+1,end);
//     }
// }
// int main(){
//     int target;
//     int arr[6]={1,4,6,8,12,56};
//     cout<<"Enter the target to be searched : "<<endl;
//     cin>>target;
//     cout<<"Was the element found 0 or 1 --> "<<BinSearch(arr,6,target,0,5)<<endl;
// }

// void ReverseStr(string &str,int i,int j){
//     if(i>j){
//         return ;
//     }
//    swap(str[i],str[j]);
//    i++;
//    j--;
//    /*i++ and j-- agar function k naam k andar likhte hain toh output nahi aa rahi, Confirm this once why */
   
//     ReverseStr(str,i,j);
    
// }

// int main(){
//     //Reversing a string using Recursion
//     string str="abcde";
//     ReverseStr(str,0,4);
//     cout<<"The reversed string is : "<<str<<endl;
// }

// bool CheckPalin(string str,int i,int j){
//     if(i>j){
//         return true ;
//     }
//    if(str[i]!=str[j]){
//     return false;
//    }

//    else{
//    return CheckPalin(str,i+1,j-1);
//    }
    
   
// }

// int main(){
//     //Checking Palindrome using recursion
//    string str;
//    cout<<"Enter the string to be checked : "<<endl;
//    cin>>str;
 
//     bool isPalin = CheckPalin(str,0,str.length()-1);
//     cout<<isPalin<<endl;

// }

/*Babbar Sir ne iss question nu kise hor way nal kraya which is longer too, Niche wala code kise ton confirm krlin*/
// int Powerbitch(int a,int power){
//     if(power==0){
//         return 1;
//     }
//     int product = a*Powerbitch(a,power-1);
//     return product;
// }
// int main(){
//     //Given a number a and b, Find a raise to power b using recursion
//     int a,power;
//     cout<<"Enter the digit and Power : "<<endl;
//     cin>>a>>power;
    
//     cout<<"Answer is : "<<Powerbitch(a,power)<<endl;
// }

/*Babbar Sir's Solution*/
// int PowerBitch(int a,int power){
//     if(power==0){
//         return 1;
//     }
//     if(power==1){
//         return a;
//     }
//     int ans=PowerBitch(a,power/2);
//     if(power%2==0){
//     return ans*ans;//which is a*b/2 * a*b/2 which is considered as ans above
//     }
//     else{
//         return a*ans*ans;
//     }
// }
// int main(){
//     int a,power;
//     cout<<"Enter the number and its power : "<<endl;
//     cin>>a>>power;
//     int ans= PowerBitch(a,power);
//     cout<<"Answer is : "<<ans<<endl;
// }

//Bubble Sort using recursion,Boht he easily hogya bc
// void BubbleSort(int* arr,int size){
//     if(size==0||size==1){
//         return;
//     }
//     for(int i=0;i<size-1;i++){
//     if(arr[i]>arr[i+1]){
//         swap(arr[i],arr[i+1]);
//     }
// }
// BubbleSort(arr,size-1);
// }
// int main(){
//     int arr[6]={12,31,56,8,1,59};
//     BubbleSort(arr,6);
    
    
//     cout<<endl<<"Sorted Array is : ";
//     for(int k=0;k<6;k++){
//         cout<<arr[k]<<" ";
//     }

// }

//Leetcode solution of the problem named --> Power Set Problem
// class Solution {
//   void  solve(vector<int>nums,vector<int>output,int index, vector<vector<int>>&ans){
//           if(index>=nums.size()){
//               ans.push_back(output);//Last wale case mein jitni cheezein output mein aayi thi woh saari ans mein store krdenge
//               return;
//           }

//           //Exclude wale case mein kuch nhi krna, jo hai bas sahi hai, Humne bas index ko increase krna hai 
//           solve(nums,output,index+1,ans);
//            int element = nums[index];
//           //Include wale case mein ouput mein element daalna hai and index ko aage badhana hai
//           output.push_back(element);
//           solve(nums,output,index+1,ans);
//     }
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> ans;//Ismein jo elements honge ewoh saare store krenge
//         vector<int>output;//Jo array mein nums k saath exclude, include kr rhe hain woh array hai yeh
//         int index = 0;
//         solve(nums,output,index,ans);
//         return ans;
//     }
// };


//Leetcode solution of the problem --> Subsequences of a string
// #include <bits/stdc++.h>
// void solve(string str,string output,int index,vector<string>&ans){
//   if (index >= str.length()) {
// 	  if(output.length()>0){
//      ans.push_back(output);
// 	  }//if isliye use kra bcz leetcode pe they didn't want ({" "}) empty string in the output
//       //Therefore usko avoid krne k liye agar length > 0 hai tabhi pushback kiya hai
    
//     return;
//   }

//   //Almost same logic as the previous one bas string and char use kiye hain ismein

//   solve(str, output, index + 1, ans);
//   char element = str[index];
//   output.push_back(element);
//   solve(str, output, index + 1, ans);
// }
// vector<string> subsequences(string str){

// 	 vector<string>ans;
// 	 string output;
// 	 int index = 0;
// 	 solve(str,output,index,ans);
// 	 return ans;

// }

//Leetcode Solution of the problem --> Phone Keypad Problem is given below, Theory on the notebook

// class Solution {
//     void solve(string digits,string output,int index, vector<string>& ans,string mapping[]){
//         if(index>=digits.length()){
//             if(digits.length()>0){
//             ans.push_back(output);//Bcz we don't need an empty string solution i.e. " "
//             }
            
//             return;
//         }
//         int number = digits[index]-'0';//if input is 23 toh 2(1st digit) tak pahunchne k liye yeh kiya
//         0 se subtract isliye kiya nahi toh '2' iski ASCII value mil jaati, - 0 krne se 57-55 = 2 milgya
//         string value = mapping[number];//Ab 2 se abc tak yahan se pahaunchege

//         for(int i=0;i<value.length();i++){

//             output.push_back(value[i]);//Yahan se basically a ko andar ghusa diya
//             solve(digits,output,index+1,ans,mapping);//ab 3 k liye index ko badhaya and wohi purana process repeat hoga and 
//             //usse 3 ka jo def hai us tak pahunch jayenge and  abcdef sab pushback hojaenge do-do k pairs mein
//             //Ab jo second step mein saaman add hua before entering solve usko udaana bhi hai so we used popback
//             //baaki Notebook mein dry run se smjhlio
//             output.pop_back();
//         }


//     }
// public:
//     vector<string> letterCombinations(string digits) {
//         vector<string>ans;//Ismein mein final answer store krenge
//         string output;
//         int index = 0;
//         string mapping[10] = {" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};//Mapping krni padegi
//         solve(digits,output,index,ans,mapping);
//         return ans;
//     }
// };

//Permutations of a String Problem, Easy hai, All theory on notebook
// #include <bits/stdc++.h> 
// void solve(vector<int> &vec,int index,vector<vector<int>>&ans){
//     if(index>=vec.size()){
//         ans.push_back(vec);
//         return;
//     }
  
//     for(int i=index;i<vec.size();i++){
//         swap(vec[index],vec[i]);
//         solve(vec,index+1,ans);
//         swap(vec[index],vec[i]);
//     }
// }
// vector<vector<int>> permutations(vector<int> &vec, int size) {
//     vector<vector<int>>ans;
//     int index=0;
//     solve(vec,index,ans);
//     return ans;
// }

// Rat in a Maze Problem, Badia question hai
// #include <bits/stdc++.h>
// bool isSafe(int x,int y,int n,vector<vector<int>>&visited,vector<vector<int>> &arr){
//     if((x>=0&&x<n) && (y>=0&&y<n) && visited[x][y]==0 && arr[x][y]==1){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// void solve(vector<vector<int>> &arr,int n,vector<string>&ans,int x,int y,vector<vector<int>>&visited,string path){
//     if(x==n-1&&y==n-1){
//         ans.push_back(path);
//         return;
//     }
//     visited[x][y]=1;//Start mein 1 daaldiya
//     //Down
//     int newx=x+1,newy=y;
//     if(isSafe(newx,newy,n,visited,arr)){
//       path.push_back('D');
//       solve(arr,n,ans,newx,newy,visited,path);
//       path.pop_back();
//     }
//     //Left
//     newx=x;newy=y-1;
//     if(isSafe(newx,newy,n,visited,arr)){
//       path.push_back('L');
//       solve(arr,n,ans,newx,newy,visited,path);
//       path.pop_back();
//     }
//     //Right

//       newx=x;newy=y+1;
//     if(isSafe(newx,newy,n,visited,arr)){
//       path.push_back('R');
//       solve(arr,n,ans,newx,newy,visited,path);
//       path.pop_back();
//     }
//     //UP
//       newx=x-1;newy=y;
//     if(isSafe(newx,newy,n,visited,arr)){
//       path.push_back('U');
//       solve(arr,n,ans,newx,newy,visited,path);
//       path.pop_back();
//     }

// visited[x][y]=0;//For backtracking, Dry run mein samjh le notebook se

// }
// vector<string> searchMaze(vector<vector<int>> &arr, int n) {
//     vector<string>ans;
//     if(arr[0][0]=0){
//         return ans;
//     }
//     int srcx=0,srcy=0;
//     vector<vector<int>>visited = arr;//Ab isko zero k saath initialise krdo 
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             visited[i][j]=0;
//         }
//     }
//     string path = "";
//     solve(arr,n,ans,srcx,srcy,visited,path);
//     sort(ans.begin(),ans.end());
//     return ans;
// }