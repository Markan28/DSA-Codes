// Check if Strings are rotations of each other
// bool areRotations(string s1,string s2)
//     { // Self Written Code But Not Valid for large Input
//        int n = s1.length();
//        int size = s2.length();
//        int p = 0;
//        int i = 0;
//        queue<int>index;
//        for(int i=0;i<s1.length();i++){
//            if(s2[0] == s1[i])
//            index.push(i);
//        }
//        int j = index.front();
           
//            while(size > 0 && !index.empty()){
//                if(s1[j] == s2[p]){
//                    p++;
                   
//                if(j == s1.length()-1)
//                   j = 0;
                  
//                   else
//                    j++;
                   
//                    size--;
//                }
//                else{
//                    index.pop();
//                    if(!index.empty())
//                    j = index.front();
//                    else
//                    return false;
//                }
               
//            }
       
//        if(size == 0)
//        return true;
//       }

// Use of .substr() function
// The substring function takes two values pos and len as an argument 
// and returns a newly constructed string object with its value initialized to a copy of a sub-string of this object. 
// Copying of string starts from pos and is done till pos+len means [pos, pos+len).


// The .find () method returns the index of the first occurrence of the specified string or character.
//  If no result is found, string::npos is returned instead


// Count and Say Problem
// class Solution {
// public:
// // Ek Delimeter & laga dena hai end mein...Why?? Bcz Agar 1211 ho toh j = 1 se compare krna
// // shuru krenge and 2 ko 1 se then j++ and so on But Last wale ko compare nahi krr paenge
// // Thus end mein faaltu bss ej & laga diya isse easily ho jaega
// // Jab tak if mein same chalega usko count krte rahenge and, jabhi not equal hua tabhi
// // else mein ans = ans + count then ans = ans + str[i] and we continue the process
//     string countAndSay(int n) {
//         if(n == 1)
//         return "1";
//         if(n == 2)
//         return "11";
//         string s = "11";
//         for(int i=3;i<=n;i++){
//             string t="";
//             s = s + '&';
//             int count = 1;

//             for(int j=1;j<s.length();j++){
//                 if(s[j] != s[j-1]){
//                     t = t + to_string(count); // to_string isliye use kiya bcz c int hai
//                     // ans uskko string mein store krre hain toh woh convert krdega
//                     t = t+s[j-1];
//                     count = 1;
//                 }
//                 else
//                 count++;
//             }
//             s = t;

//         }

//         return s;
//     }
// };


/* WILL COME BACK TO YOU */