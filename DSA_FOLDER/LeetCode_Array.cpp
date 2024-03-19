// Started on 1st jan 2024, This gotta be our year 

// Q-26, Remove Duplicates in a sorted array ************

// class Solution { // Stack ka use krke kr diya
// public:
//     int removeDuplicates(vector<int>& nums) {
        // stack<int>st;
        // st.push(nums[0]);
        // int p=1;
        // for(int i=1;i<nums.size();i++){
        //     if(st.top() != nums[i]){
        //         st.push(nums[i]);
        //         nums[p] = nums[i];
        //         p++;
        //     }
        // }

//         int k = st.size();
//         /*for(int i=k-1;i>=0;i--){
//             nums[i] = st.top();
//             st.pop();
//         }*/


//         return k;
//     }

// };


// class Solution {  // Yeh bhi ek acha solution laga
// public:
//    int removeDuplicates(vector<int>& nums) {
//         int j = 1;
//         for(int i = 1; i < nums.size(); i++){
//             if(nums[i] != nums[i - 1]){
//                 nums[j] = nums[i];
//                 j++;
//             }
//         }
//         return j;
//     }

// };



// Q-27, Remove element *************
// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         int k=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i] != val){
//                 nums[k] = nums[i];
//                 k++;
//             }
//         }
        
//         return k;
//     }
// };



// Q-1 Two Sum ***************
// class Solution { // Do loops laagke Brute Force nal easily hogya
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
        
//         vector<int>ans;int k=0;
//         for(int i=0;i<nums.size()-1;i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i] + nums[j] == target){
//                     ans.push_back(i);
//                     ans.push_back(j);
//                     break;
//                 }
//             }
         
//         }

//         return ans;
//     }
// };


// Optimised solution using Hashtable
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int>ans;
//         unordered_map<int,int>mapp;
//         for(int i=0;i<nums.size();i++){
//            mapp[nums[i]] = i; 
//         }
//         for(int i=0;i<nums.size();i++){
//             int complement = target - nums[i];
//             if(mapp.count(complement) && mapp[complement] != i){// mapp.count[complement] matlab agar hashtable vich exist krda hai complement
//                 ans.push_back(i);
//                 ans.push_back(mapp[complement]);// Index he push krega
//                 break;
//             }
//         }

//         return ans;
//     }
// };



// Q-13 Roman to Integer , Har ek condition likhke khud krya c *******************
// class Solution {
// public:
//     int romanToInt(string s) {
//         unordered_map<char,int>val;
//         val['I'] = 1;
//         val['V'] = 5;
//         val['X'] = 10;
//         val['L'] = 50;
//         val['C'] = 100;
//         val['D'] = 500;
//         val['M'] = 1000;
//         int ans = 0;

//         for(int i=0;i<s.length();){
//             if(i<s.length()-1){
//             if(s[i] == 'I' && s[i+1] == 'V'){
//                 ans = ans + 4;
//                 cout<<ans<<" ";
//                 i = i + 2;
//                 continue;
//             }
//             if(s[i] == 'I' && s[i+1] == 'X'){
//                 ans = ans + 9;
//                 cout<<ans<<" ";
//                 i = i + 2;
//                 continue;
//             }
//             if(s[i] == 'X' && s[i+1] == 'L'){
//                 ans = ans + 40;
//                 cout<<ans<<" ";
//                 i = i + 2;
//                 continue;
//             }
//             if(s[i] == 'X' && s[i+1] == 'C'){
//                 ans = ans + 90;
//                 cout<<ans<<" ";
//                 i = i + 2;
//                 continue;
//             }
//             if(s[i] == 'C' && s[i+1] == 'D'){
//                 ans = ans + 400;
//                 cout<<ans<<" ";
//                 i = i + 2;
//                 continue;
//             }
//             if(s[i] == 'C' && s[i+1] == 'M'){
//                 ans = ans + 900;
//                 cout<<ans<<" ";
//                 i = i + 2;
//                 continue;
//             }
//             }
//             ans = ans + val[s[i]];
//             cout<<ans<<" ";
//             i++;
//         }

//         return ans;
        
//     }
// };


// class Solution { // Yeh observation hai ki jab chota roman numeral pehle ho toh woh subtract hota hai and agar bada ho toh add
// Uss Intuition ka use kiya
// public:
//     int romanToInt(string s) {
//         unordered_map<char,int>val;
//         val['I'] = 1;
//         val['V'] = 5;
//         val['X'] = 10;
//         val['L'] = 50;
//         val['C'] = 100;
//         val['D'] = 500;
//         val['M'] = 1000;
//         int ans = 0;

//         for(int i=0;i<s.length();i++){
//             if(val[s[i]] < val[s[i+1]]){
//                 ans = ans - val[s[i]];
//             }
//             else{
//                 ans = ans + val[s[i]];
//             }
//         }

//         return ans;
        
//     }
// };


// Q-34 Find First and last Position of an element in a sorted array *********************
// class Solution { // Ek loop aage laayi ek piche laayi te krte Baaki vdia approach niche dekh
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         vector<int>ans;
//         int n = nums.size();
//         cout<<n;
//          if(nums.size() == 0){
//          ans.push_back(-1);
//          ans.push_back(-1);
//        }

//        for(int i=0;i<n;i++){
//            if(nums[i] == target){
//            ans.push_back(i);
//            break;
//         }
//         if(i == n-1)
//         ans.push_back(-1);
//        }

//        for(int i=n-1;i>=0;i--){
//            if(nums[i] == target){
//            ans.push_back(i);
//            break;
//            }
//            if(i==0)
//        ans.push_back(-1);

//        }
      
//        return ans;
//     }
// };


// Using Binary Search and Creating two functions for first and last iteration
// class Solution {
// public:
//     int FrontSearch(vector<int>& nums, int target){
//         int start=0,end=nums.size()-1;
//         int mid = start + (end-start)/2;
//         int ans = -1;
//         while(start<=end){
//             if(nums[mid] == target){
//                 ans = mid;
//                 end = mid - 1;
//             }
//             else if(nums[mid] > target){
//                 end = mid - 1 ;
//             }
//             else{
//                 start = mid + 1;
//             }

//             mid = start + (end - start)/2;
//         }
//         return ans;
//     }
//     int LastSearch(vector<int>& nums, int target){
//         int start=0,end=nums.size()-1;
//         int mid = start + (end-start)/2;
//         int anslast = -1;
//         while(start<=end){
//             if(nums[mid] == target){
//                 anslast = mid;
//                 start = mid + 1;
//             }
//             else if(nums[mid] > target){
//                 end = mid - 1 ;
//             }
//             else{
//                 start = mid + 1;
//             }

//             mid = start + (end - start)/2;
//         }
//         return anslast;
//     }
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int FrontIndex = FrontSearch(nums,target);
//         int LastIndex = LastSearch(nums,target);
//         vector<int>ans;
//         ans.push_back(FrontIndex);
//         ans.push_back(LastIndex);
   

//         return ans;

//     }
// };


// Count krke Kitta toh It beats 65% in Leetcode
// class Solution {
// public:
//     int FrontSearch(vector<int>& nums, int target){
//         int start=0,end=nums.size()-1;
//         int mid = start + (end-start)/2;
//         int ans = -1;
        
//         while(start<=end){
//             if(nums[mid] == target){
//                ans = mid;
//                end = mid - 1;
//             }
//             else if(nums[mid] > target){
//                 end = mid - 1 ;
//             }
//             else{
//                 start = mid + 1;
//             }

//             mid = start + (end - start)/2;
//         }
//         return ans;
//     }
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int CountTarget=0;
//         vector<int>ans;
        
//         for(int i=0;i<nums.size();i++){
//            if(nums[i] == target){
//                CountTarget++;
//            }
//         }
//         int FrontIndex = FrontSearch(nums,target);
//         if(FrontIndex == -1){
//             ans.push_back(-1);
//             ans.push_back(-1);
//             return ans;
//         }
//         int lastIndex = FrontIndex + CountTarget-1;

//         ans.push_back(FrontIndex);
//         ans.push_back(lastIndex);

//         return ans;
//     }
// };




// Q - 28 Find the index of the first occurence of the string **************

// class Solution { // Pyaare question ka pyaara solution
// public:
//     int strStr(string haystack, string needle) {
//         int m = needle.size();
//         int n = haystack.size();

//         for(int i=0;i<=n-m;i++){
//             int j=0;
//             for(j;j<m;j++){
//               if(haystack[i+j] != needle[j]) // Har m size ki string haystack mein se uthake compare krli
//               break;
//             }
//             if(j == m) // Agar j == m hogya matlab exactly match krgya
//             return i;
//         }

//         return -1;

//     }
// }; // Bas ehi approach esi and vdai lagi and it beats 100% 



// Q - 169, Finding the Majority element in the array **********************
// class Solution { // Simple map ka use krke krdiya
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<int,int>count;
//         int maxFreq=0,ans=0;
//         for(int i=0;i<nums.size();i++){
//             count[nums[i]]++; // Har ek number jitni baar aaya usko store kiya
//             maxFreq = max(maxFreq,count[nums[i]]);
//         }

//         for(int i=0;i<nums.size();i++){
//             if(maxFreq == count[nums[i]]){ // Max Count se jo number tha woh nikal liya
//                 ans = nums[i];
//                 break;
//             }
               
//         }
//         return ans;
//     }
// };



// class Solution { // Self Build Wow Approach
// public:
//     int majorityElement(vector<int>& nums) {
//         if(nums.size() == 1)
//         return nums[0];
//         sort(nums.begin(),nums.end()); // Sort kiya
//         int count1 = 0,count2 = 1; 
//         int change = nums.size()/2;
//         for(int i=1;i<nums.size();i++){
//             if(nums[i-1] == nums[i]){
//                 count2++;
//             }
//             else{
//                 count2 = 1;
//             }
//             if(count2 - count1 > change) // Guaranteed element ek hai array mein jo n/2 times se zyada hai, uss condition ka use kiya
//             return nums[i];
//         }
//         return -1;
//     }
// };


// Cute Approach
// The intuition behind this approach is that if an element occurs more than n/2 times in the array
//  (where n is the size of the array), it will always occupy the middle position when the array is sorted. 
//  Therefore, we can sort the array and return the element at index n/2.
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         if(nums.size() == 1)
//         return nums[0];
//         sort(nums.begin(),nums.end());
        
//         int change = nums.size()/2;
        
//             return nums[change];
        
//         }
    
// };




// Q-56 Length of Last Word *******************
// class Solution { // Beats 100%
// public:
//     int lengthOfLastWord(string s) {
//         int len = 0,lastlength;
//         for(int i=0;i<s.length();i++){
//             if(s[i] != ' '){
//                 len++;
//                 lastlength = len;
//             }
//             else{
//                 len = 0;
//             }
//         }

//         return lastlength;
//     }
// };




// Q-66 Plus One , Need to check why this is Incorrect ************************
// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         int count = 0;
        
//         int n = digits.size();
//         if(digits[n-1] != 9){
//          digits[n-1]++;
//          return digits;
//         }
//         else{
           
//             for(int i=0;i<n;i++){
//                 if(digits[i] != 9)
//                 count++;
//             }
//             if(count == 0){
//                 digits[0] = 1;
//                 int k = n;
//                 while(k>0){
//                     digits[k] = 0;
//                     k--;
//                 }

//                 return digits;
//             }
//             else{
//                 int i = n-1;
//                 while(i>=0){
//                     if(digits[i] == 9){
//                         digits[i] = 0;
//                         i--;
//                     }
//                     else{
//                         digits[i]++;
//                         break;
//                     }
//                 }

//                 return digits;
//             }
            
//         }

//         return digits;
//     }
// };


// Good Approach
// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         // move backwards
//         for (int i = digits.size() - 1; i >= 0; i--) {
//             int num = digits[i] + 1;
//             if (num == 10 && i != 0) {
//                 digits[i] = 0;
//             }
//             else {
//                 // Normal Case lyii
//                 digits[i] = num;
//                 break;
//             }
//         }
//         // 9,9,9 wale cases k liye yeh kiya
//         if (digits[0] == 10) {
//             digits[0] = 1;
//             digits.push_back(0);
//         }
//         return digits;
// }
// };


// Q-29 Majority Element *******************
// This was Completely Submitted on CodingNinjas But Runtime Error on LeetCode
// #include <bits/stdc++.h>
// vector<int> majorityElementII(vector<int> &arr)
// {
    // sort(arr.begin(),arr.end());
    // unordered_map<int,int>mapp;
    // vector<int>ans,ans2;
    // for(int i=0;i<arr.size();i++){
    //     mapp[arr[i]]++;
    // }
    // int n = arr.size()/3;
    //     int count = 0;
    
//     if(arr.size() < 3){
//         for(int i=1;i<arr.size();i++){
//             if(arr[i-1] == arr[i])
//             count++;
//         }
//         if(count == 0){
//             for(int i=0;i<arr.size();i++)
//             ans.push_back(arr[i]);
//             return ans;
//         }
//     }
        
    
// for(int i=1;i<arr.size();){
//     if(arr[i-1] == arr[i] && mapp[arr[i]] > n){
//         ans.push_back(arr[i]);
            
//    while(nums[i-1] == nums[i]){
//             i++;
//             if(i>=nums.size())
//             break;
//             }
//         continue;
//     }
//     i++;

// Iska bhi error nikal gya, Just While loop mein ek break Statement add krni thi
    // }

//      return ans;
    
// }

// Count1 Count2 wali approach bhi chal gyi CodingNinjas pe, Leetcode pe dubara Runtime error
// #include <bits/stdc++.h>
// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//     sort(nums.begin(),nums.end());
//     vector<int>ans;
//     int count1 = 0,count2 = 1;
   
//     int n = nums.size()/3;
//         int count = 0;
    
//     if(nums.size() < 3){
//         for(int i=1;i<nums.size();i++){
//             if(nums[i-1] == nums[i])
//             count++;
//         }
//         if(count == 0){
//             for(int i=0;i<nums.size();i++)
//             ans.push_back(nums[i]);
//             return ans;
//         }
//      }
    
//     for(int i=1;i<nums.size();){
//         if(nums[i-1] == nums[i]){
//             count2++;
//         }
//         else{
//             count2 = 1;
//         }
//         if(count2 - count1 > n){
//             ans.push_back(nums[i]);
//             int j = i+1;
//             if(j<nums.size()){
//             while(nums[i] == nums[j]){
//                 j++;
//                 if(j>=nums.size())
//                   break;
                
//             }
//             }
//             else{
//                 break;
//             }
//             if(j < nums.size()){
//             i = j;
//             count2 = 1;
//             }
//             else{
//                 break;
//             }
//         }
//         i++;
//     }
    
//      return ans;
//     }
// }; 

// Runtime error theek hua by using all those ELSE Statements for that int j, Woh kabhi bhi nums.size() se equal yaa bada nahi ho skta
// Jab bhi aisa ho toh uss case mein BREAK krdo


// Q-287, Find the Duplicate Number *******************
// class Solution { // Hashtable ka use krke simply krdiya
// public:
//     int findDuplicate(vector<int>& nums) {
//         unordered_map<int,int>mapp;
//         int n = nums.size() - 1;
//         for(int i=0;i<nums.size();i++){
//             mapp[nums[i]]++;
//         }
    
//         for(int i=0;i<nums.size();i++){
//             if(mapp[nums[i]] > 1)
//             return nums[i];
//         }
//         return 0;
//     }
// };


// Very Clever Approach
// /* nums[i] wale numbers ki abs value ko as an index use kiya and Har value ko negative krdiya 
// Ab agar duplicate wale index pe jayenge toh Uski val already negative ho chuki hogi thus Humein Duplicate milgya*/
// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         for(int i=0;i<nums.size();i++){
//             int index = abs(nums[i]); // Absolute value leni zaroori hai

//             if(nums[index] < 0)
//             return index;

//             nums[index] = -nums[index];
//         }
//         return 0;
//         // TC = O(n) and SC = O(1)
//     }
// };



// Q-56 Merge Intervals *********************
// class Solution { Did it Ourselves
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//        vector<vector<int>> ans;
//         int n=intervals.size();
//         if(n==0)
//         return ans;
//        sort(intervals.begin(),intervals.end()); // Sort krna zaroori hai
//         int j = 0;
        
//          ans.push_back(intervals[0]);
        
//         for(int i=1;i<intervals.size();i++){
          
//         if(ans[j][1] >= intervals[i][0]){
           
//             ans[j][1] = max(ans[j][1],intervals[i][1]); // Bcz you never know next interval da baad wala number chota hove
//         }
//         else{
//             j++;
//             ans.push_back(intervals[i]);

//         }
//     }
//        return ans;
//     } 
// };



// Q-31 Next Permutation *******************
// class Solution { // Dry Ryn krke dekhle, Difficult question
// public:
//     void nextPermutation(vector<int>& nums) {
//         int n = nums.size(), index = -1;
//         for(int i=n-2; i>=0; i--){
//             if(nums[i] < nums[i+1]){
//                 index = i;
//                 break;
//             }
//         }
//         for(int i=n-1; i>=index && index != -1; i--){
//             if(nums[i] > nums[index]){
//                 swap(nums[i], nums[index]);
//                 break;
//             }
//         }
//         reverse(nums.begin() + index + 1, nums.end());
        
//     }
// };


// Chocolate Distribution Problem on GFG ********************
// Simple Approach se khud krdiya
// long long findMinDiff(vector<long long> a, long long n, long long m){
//      sort(a.begin(),a.end());
//      int i=0;
//      int j = m-1;
     
     
//      long long mini = 1000000;
//      for(int z=0;z<n;z++){
//          if(i<a.size() && j<a.size()){
//       mini = min(mini,(a[j]-a[i]));
//       i++;
//       j++;
//          } 
//     }
//     return mini;
//     }


// Palindromic Array *********************
// int PalinArray(int a[], int n)
//     {
//         for(int i=0;i<n;i++){
//     	    int check = a[i];
//     	    int rev=check;
//     	    int sum=0;
//     	    int remainder;
    	    
//     	    while(rev > 0){
//     	        remainder = rev%10;
//     	        sum = sum*10 + remainder;
//     	        rev = rev/10;
    	       
//     	    }
//     	       // cout<<sum<<" ";
//     	    if(sum != check)
//     	    return 0;
    	    
    	    
//         }
        
//     	    return 1;
//     }


// Clumsy Factorial *******************
// class Solution { // Self Made Soln Dry Run krke changi tarah smjh aajayega
// public:
//     int clumsy(int n) {
//         if(n == 1 || n == 2)
//         return n;

//         if(n == 3)
//         return 6;

//         vector<int>ans;
//         while(n > 0){
//           int sum = 1;
//           if(n-1>0)
//           sum = n*(n-1);

//           if(n-2>0)
//           sum = sum/(n-2);

//           ans.push_back(sum);
//           if(n-3>0)
//           ans.push_back(n-3);

//           n = n-4;
//         }

//         int FinalAns = ans[0]+ans[1];
//         int size = ans.size();
//         cout<<size;
       
//         for(int i=2;i<ans.size();){
//            FinalAns = FinalAns - ans[i];
//            i=i+2;
//         }
//         for(int i=3;i<ans.size();){
//            FinalAns = FinalAns + ans[i];
//            i=i+2;
//         }
    

//         return FinalAns;
//     }
// };

// Iss Pattern k hisaab se chal raha hai
// i * (i-1) / (i-2) = i+1 when i >= 5, We used this Formula
// class Solution {
//  public:
//   int clumsy(int N) {
//     if (N == 1)
//       return 1;
//     if (N == 2)
//       return 2;
//     if (N == 3)
//       return 6;
//     if (N == 4)
//       return 7;
//     if (N % 4 == 1)
//       return N + 2;
//     if (N % 4 == 2)
//       return N + 2;
//     if (N % 4 == 3)
//       return N - 1;
//     return N + 1;
//   }
// };



// Alternate Positive and Negative Numbers **********************

// void rearrange(int arr[], int n) {
// 	      queue<int> pos;
//           queue<int> neg;
    
    
//     for(int i=0; i < n; i++)
//     {
//         if( arr[i] > -1 )
//         pos.push( arr[i] );
//         else
//         neg.push( arr[i] );
//     }
// Upar Positive negative alag alag krlae
    
//    Dono Queues ek ek element krke traverse kriyan and arr vich waapis daalte element
    
//     int i= 0;
//     while( !pos.empty() || !neg.empty() )
//     {
//         if( !pos.empty() )
//         {
//             arr[i]= pos.front();
//             pos.pop();
//             i++;
//         }
        
//         if( !neg.empty() )
//         {
//             arr[i] = neg.front();
//             neg.pop();
//             i++;
//         }
        
//     } 
// }


// Move all negative elements to the right *******************
// Simple Approach using two queues
// void segregateElements(int arr[],int n)
//     {
//         queue<int>pos;
//         queue<int>neg;
//         for(int i=0;i<n;i++){
//             if(arr[i]>=0){
//                 pos.push(arr[i]);
//             }
//             else{
//                 neg.push(arr[i]);
//             }
            
//         }
//         int i=0;
//         int j;
//         if(pos.empty())
//         j=0;
        
//         while(!pos.empty()){
//             arr[i]=pos.front();
//             pos.pop();
//             i++;
//             j=i;
            
//         }
//         while(!neg.empty()){
//             arr[j]=neg.front();
//             neg.pop();
//             j++;
//         }
//     }


// Count Pairs with Given Sum***********************
// Brute Force se TLE aayega toh Map ka use krke krdiya
// int getPairsCount(int arr[], int n, int k) {
//         vector<int>ans;
//         unordered_map<int,int>mapp;
//         for(int i=0;i<n;i++){
//             mapp[arr[i]]++; // Count store krliya
//             int sub = k - arr[i];
//             if(sub > 0)
//             ans.push_back(sub); // Subtraction save kriii
//         }
//         int count = 0;
        
//         for(int i=0;i<ans.size();i++){
//             if(mapp.count(ans[i]) && k - ans[i] != ans[i]){ // mapp.count se pata chalta hai ki woh cheez map mein exist krti hai yaa nahi
//                 count = count + (mapp[ans[i]]);
//                 mapp[k - ans[i]]--;
//             }
//             else if(mapp.count(ans[i]) && k - ans[i] == ans[i]){ // Ek exception sa case tha
//                 count = count + mapp[ans[i]] - 1;
//                 mapp[ans[i]]--;
//             }
//         }
        
//         return count;
//     }


// Common Elements in 3 Sorted Arrays********************

// vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
//         {
//             vector<int>ans;
//             int i=0,j=0,k=0; // Three Pointers ka use krke krna hai
//             while(i<n1&&j<n2&&k<n3){
                
//                 int mini = min(A[i],min(B[j],C[k]));
                
//                 if(A[i] == B[j] && B[j] == C[k])
//                 ans.push_back(A[i]);

/* Yeh Niche wali teen While loops se Duplicates wala scene set krdiya... Kaise
 Usse Pointers jo bhi duplicate elements honge unko skip krte jayenge last second elment tak ++ hojaega and then Final mein dubara
 ++ hoga Means saare duplicate elements skip hogye < size - 1 toh Runtime Error bachane k liye lagaya hai??
*/               
//                 while(i<n1-1 && A[i] == A[i+1])
//                 i++;
//                 while(j<n2-1 && B[j] == B[j+1])
//                 j++;
//                 while(i<n3-1 && C[k] == C[k+1])
//                 k++;
                
//                 if(A[i] == mini)i++;
//                 else if(B[j] == mini)j++;
//                 else
//                 k++;
//             }
            
//             return ans;
//         }


// GFG mein Sort krne k liye Arrays.sort(arrayName);


// Q-35, Search Insert Position
// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int start=0,end=nums.size()-1;
//         int mid=start+(end-start)/2;
//         if(target < nums[0])
//         return 0;

//         if(target > nums[end])
//         return nums.size();
        
//         while(start<=end){
//             if(target==nums[mid]){
                
//                 return mid;
//             }
//             if(target>nums[mid]){
//                 if(start == end)
//                 return mid+1;
//                 start=mid+1;

//             }
//             else{
//                 if(start == mid)
//                 return mid;
//                 end=mid-1;
//             }
//             mid=start+(end-start)/2;
            
//         }
//         return 0;
//     }
    
// };


// Third Maximum Number, LEETCODE QUESTION *****************
// Khud kiya, Me and Urvi Same brain
//  int thirdMax(vector<int>& nums){
//         sort(nums.begin(),nums.end());
//         if(nums.size() == 1)
//         return nums[0];
//         if(nums.size() == 2){
//          return nums[1];
//         }
//         int z = 0;
//         for(int i=nums.size()-1;i>0;i--){
//             if(nums[i] != nums[i-1]){
//                 z++;
//                 if(z==2)
//                 return nums[i-1];
//             }

//         }
//         if(z == 1)
//         return nums[nums.size()-1];
//         if(z == 0)
//         return nums[0];
//         return 0;
//     }

            

