#include <iostream>
using namespace std;
// int main(){
//     //A 1-D char array is called string
//     //String is ended by '\0' whose ascii value is 0 and it tells us about the termination of string
//     /*Agar kuch normal cin kita tn jivein Akshit space Kumar, tn sirf Akshit he print hona, jadon cin krvavange tn
//     agar space dbya, yaa tab, yaa phir enter, tn sirf pehla word he print hoega*/


    // char name[20];int count=0;
    // cout<<"Enter your name : "<<endl;
    // cin>>name;
    // for(int i=0;name[i]!='\0';i++){
    //     count ++;
    // }
    // cout<<"The length of your name is : "<<count;
//     //Simply found the length of string


// }


//Various functions which will be required while coding 


// int length(char name[]){
//     int count = 0;
//     for(int i=0;name[i]!='\0';i++){
//         count ++;
//     }
//     return count;
// }
// char UppertoLower(char ch){
//     if(ch>='a'&&ch<='z'){
//         return ch;
//     }
//     else{
//         char temp =ch-'A'+'a';/*Suppose ch is C toh when we subtract, C-A then we will be getting 2 and now we add 'a', we will get 'c'
//         which is 'C' in lowercase*/
//         return temp;
//     }
// }

// bool checkPalindrome(char a[], int n){
//     int start=0;
//     int end=n-1;
//     while(start<=end){
//         if(UppertoLower(a[start])!=UppertoLower(a[end])){//Is mein he agar kuch uppercase hoga toh usko lowercase krdenge
//         //Agar question mein bola hua hai ki Case sensitive nahi hai string then no need of doing this.
//               return 0;
//         }
//         else{
//           start++;
//           end--;
//         }

//     }
//     return 1;
// }



// int main(){
    //Check Palindrome
//     char name[1000];
//     cout<<"Enter your name : "<<endl;
//     cin>>name;
//     int len=length(name);
  
   
//     cout<<"Palindrome or Not : "<< checkPalindrome(name,len)<<endl;
// }



// char getMaxOcc(string s){
//     int arr[26]={0};
//     /*Niche wali loop se humne har char k ghar mein ghuske uska ek number increase krva diya*/
//     for(int i=0;i<s.length();i++){
//         char ch=s[i];
//         int number = 0;
//         number = ch - 'a';
//         arr[number]++;
//     }
//     /*Ab maximum occurences dekhenge kis char ki thi*/
//     int maxi=-1,ans=0;
//     for(int j=0;j<26;j++){
//     if(maxi<arr[j]){
//         ans=j;
//         maxi=arr[j];
//     }
//     }
//     return 'a'+ans;//Notebook dekhla agar sab bhul gya 
// }
// int main(){
//     //Maxinum times which character comes in a string, i.e. in pipe, p should be output bcz p comes max no. of times
//     //Theory on notebook
//     cout<<"Enter a string : "<<endl;
//     string s;
//     cin>>s;
//    cout<<"Maximum Occurences by char :" <<getMaxOcc(s)<<endl;
    
   
// }


/*Strings mein Pushback vagera sab chalta hai
We can simply s.pushback(...) in a string
Jo STL mein seekhi thi kaafi cheezein woh yahan pe apply kar sakte hain*/
 /*Nice wala question tha codestudio pe ki Kisi string mein jahan pe space dikhe wahan pe space ko @40 se replace krdo
 Easy to Understand hai bas ek nayi string s banake usko pushback ka use krke uske andar daldiya purani str string ko*/


// #include <bits/stdc++.h> 
// string replaceSpaces(string &str){
// 	 string s="";
// 	 for(int i=0;i<str.length();i++){
//          if(str[i]==' '){
//            s.push_back('@');
// 		   s.push_back('4');
// 		   s.push_back('0');
// 		 }
// 		 else{
//              s.push_back(str[i]);
// 		 }
// 	 }
// 	 return s;
// }


//Occurence deletion leetcode question, Theory on notebook
// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//         while(s.length()!=0&&s.find(part)<s.length()){
//             s.erase(s.find(part),part.length());//erase mein likha ki konsa part delete kra and kitni length ka tha woh
//         }
//         return s;
//     }
// };



//Permutations in string, Theory on notebook
//Leetcode solution below
//Chutiya question hai, Don't hesitate to check the video again
//lecture 22, 1:27:30.

// class Solution {
//     bool checkEqual(int a[], int b[]){
//         for(int i=0;i<26;i++){
//             if(a[i]!=b[i]){
//                 return 0;
//             }
           
//         }
//         return 1;
//     }
// public:
//     bool checkInclusion(string s1, string s2) {
//         int count1[26]={0};
//         for(int i=0;i<s1.length();i++){
//             int index = s1[i]-'a';
//             count1[index]++;

//         }
//         int i=0;
//         int windowSize=s1.length();
//         int count2[26]={0};
//         while(i<s2.length()&&i<windowSize){
//             int index = s2[i]-'a';
//             count2[index]++;
//             i++;
//         }//Humne 1st two components check kiya the badi string ke
//         if(checkEqual(count1,count2)){
//             return 1;
//         }
//         while(i<s2.length()){//Furthur move krne k liye ild char ko delete kra and aage wale New char ka count add kra
//         char Newchar=s2[i];
//         int index= Newchar-'a';
//         count2[index]++;
        
//         char Oldchar=s2[i-windowSize];
//          index= Oldchar - 'a';
//          count2[index]--;
//          i++;
//           if(checkEqual(count1,count2)){
//             return 1;
//         }
//         }

//     return 0;}
// };
 //Leetcode question, This was tough too, therefore you can go at the end of lec 22
 //String Compression, Theory on Notebook
// class Solution {
// public:
//     int compress(vector<char>& chars) {
//         int i=0;
//         int ansIndex=0;
//         int n=chars.size();
//         while(i<n){
//             int j=i+1;
//             while(j<n&&chars[i]==chars[j]){
//                 j++;

//             }
//             chars[ansIndex++]=chars[i];
//             int count = j-i;
//             if(count > 1){
//                 string cnt = to_string (count);
//             for(char ch : cnt){
//                 chars[ansIndex++]=ch;
//             }
//             }
//         i=j;
//         }
//         return ansIndex;
//     }
// };
