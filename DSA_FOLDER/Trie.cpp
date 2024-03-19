#include<iostream>
using namespace std;

class TrieNode{
    public: 
    char data;
    TrieNode* children[26];//Array of TrieNodes hai yeh, Har Node k 26 ho skte hain
    bool isTerminal;//last wali node

    TrieNode(char ch){
        data = ch;
        for(int i=0;i<26;i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie{
    public:
    TrieNode* root;

    Trie(){
        root = new TrieNode('\0');
    }

    void insertWord(string word){
        insertUtil(root,word);
    }
    void insertUtil(TrieNode* root, string word){
    //Base Case
    if(word.length() == 0){
        root->isTerminal = true;//Last ko terminal node k equal krdiya
        return;
    }
    //Sirf Caps wale words he aayenge
    int index = word[0]-'A';

    TrieNode* child;
    //Present
    if(root->children[index] != NULL){
        child = root->children[index];
    }
    else{//Absent
        child = new TrieNode(word[0]);
        root->children[index] = child;//Root k children mein daaldiya
    }
    //Recursion
    insertUtil(child,word.substr(1));//word k aage wala part pass krdiya, pehle character ko chodkar
    }

    bool searchUtil(TrieNode* root, string word){
        if(word.length() == 0){
            return root->isTerminal;
        }

        int index = word[0] - 'A';//word ka pehla character
        TrieNode* child;

        if(root->children[index] != NULL){//Yeh char present hai
            child = root->children[index];//Aage Badhgye
        }
        else{
            return false;
        }

        return searchUtil(child,word.substr(1));
    }

    bool searchWord(string word){
    return searchUtil(root,word);
    }


};

int main(){
    Trie *t = new Trie();
    t->insertWord("ARM");
    t->insertWord("ARMY");

    cout<<"Present or Not "<<t->searchWord("ARMY")<<endl;

}


//Question - 1, Implementation of TRIE
//  class TrieNode{
//     public: 
//     char data;
//     TrieNode* children[26];
//     bool isTerminal;//last wali node

//     TrieNode(char ch){
//         data = ch;
//         for(int i=0;i<26;i++){
//             children[i] = NULL;
//         }
//         isTerminal = false;
//     }
// };


// class Trie {

// TrieNode* root;
// public:


//     /** Initialize your data structure here. */
//     Trie() {
//      root = new TrieNode('\0');
//     }

//     /** Inserts a word into the trie. */
//      void insertUtil(TrieNode* root, string word){
//     //Base Case
//     if(word.length() == 0){
//         root->isTerminal = true;//Last ko terminal node k equal krdiya
//         return;
//     }
//     //Sirf Caps wale words he aayenge
//     int index = word[0]-'a';

//     TrieNode* child;
//     //Present
//     if(root->children[index] != NULL){
//         child = root->children[index];
//     }
//     else{//Absent
//         child = new TrieNode(word[0]);
//         root->children[index] = child;//Root k children mein daaldiya
//     }
//     //Recursion
//     insertUtil(child,word.substr(1));//word k aage wala part pass krdiya, pehle character ko chodkar
//     }

//     void insert(string word) {
//       insertUtil(root,word);
//     }

//     /** Returns if the word is in the trie. */
//         bool searchUtil(TrieNode* root, string word){
//         if(word.length() == 0){
//             return root->isTerminal;
//         }

//         int index = word[0] - 'a';//word ka pehla character
//         TrieNode* child;

//         if(root->children[index] != NULL){//Yeh char present hai
//             child = root->children[index];//Aage Badhgye
//         }
//         else{
//             return false;
//         }

//         return searchUtil(child,word.substr(1));
//     }

//     bool search(string word) {
//     return searchUtil(root,word);
//     }

//     /** Returns if there is any word in the trie that starts with the given prefix. */
//     bool prefixUtil(TrieNode* root, string word){
//         if(word.length() == 0){
//             return true;//Same as SearchUtil, Bas yahin pe change kra hai
//             //Ki agar Prefix jo diya tha uski length 0 hogyi i.e. woh exist krta hai toh True return krdo 
//         }

//         int index = word[0] - 'a';//word ka pehla character
//         TrieNode* child;

//         if(root->children[index] != NULL){//Yeh char present hai
//             child = root->children[index];//Aage Badhgye
//         }
//         else{
//             return false;
//         }

//         return prefixUtil(child,word.substr(1));
//     }
//     bool startsWith(string prefix) {
//     return prefixUtil(root,prefix);
//     }
// };


//Question - 2, Longest Common Prefix
//Simple Approach 1
// string longestCommonPrefix(vector<string> &arr, int n)
// {
//    //Getting 1st String
//        string ans = "";
//    for(int i=0;i<arr[0].size();i++){
//        char ch = arr[0][i];
//        bool match = true;

//    for(int j=1;j<n;j++){
//      if (ch != arr[j][i] ||
//          arr[j].size() < i) { // Matlab yaa toh ch he different hai yaa phir j
//                               // wali string he khatam hogyi
//        match = false;
//        break; // j wali loop se
//      }
//    }
//        if(match == false){
//            break;// i wali loop se
//        }
//        else{
//            ans.push_back(ch);
//        }
//    }  

   
//    return ans;
// }

//Approach - 2 Using Trie
// class TrieNode{
//     public: 
//     char data;
//     TrieNode* children[26];
//     int childCount;
//     bool isTerminal;//last wali node

//     TrieNode(char ch){
//         data = ch;
//         for(int i=0;i<26;i++){
//             children[i] = NULL;
//         }
//         childCount = 0;
//         isTerminal = false;
//     }
// };
// class Trie{
//     public:
//     TrieNode* root;

//     Trie(char ch){
//         root = new TrieNode(ch);
//     }

//     void insertWord(string word){
//         insertUtil(root,word);
//     }
//     void insertUtil(TrieNode* root, string word){
//     //Base Case
//     if(word.length() == 0){
//         root->isTerminal = true;//Last ko terminal node k equal krdiya
//         return;
//     }
//     //Sirf Caps wale words he aayenge
//     int index = word[0]-'a';

//     TrieNode* child;
//     //Present
//     if(root->children[index] != NULL){
//         child = root->children[index];
//     } else { // Absent
//         child = new TrieNode(word[0]);
//         //Insert krte time, root ka childCount badhate jao
//         root->childCount++;
//         root->children[index] = child; // Root k children mein daaldiya
//     }
//     // Recursion
//     insertUtil(child, word.substr(1)); // word k aage wala part pass krdiya,
//                                        // pehle character ko chodkar
//     }

// void lcp(string str, string &ans){
//      for(int i=0;i<str.size();i++){
//          char ch = str[i];
//          if(root->childCount == 1){
//            ans.push_back(ch);
//            //Aage badhna hai
//            int index = ch - 'a';
//            root = root->children[index];
//          }
//          else{
//              break;
//          }

//          //Agar Terminal pe khade hain toh
//          if(root->isTerminal){
//              break;
//          }
//      }
// }

// };


// string longestCommonPrefix(vector<string> &arr, int n) {
//     Trie *t = new Trie('\0');
//     for(int i=0;i<n;i++){
//     t->insertWord(arr[i]);
//     }
//     string first = arr[0];
//     string ans = "";

//     t->lcp(first,ans);

//     return ans;

// }



//Question - 3, Implement a Phone Directory
// class TrieNode{
//     public: 
//     char data;
//     TrieNode* children[26];//Array of TrieNodes hai yeh, Har Node k 26 ho skte hain
//     bool isTerminal;//last wali node

//     TrieNode(char ch){
//         data = ch;
//         for(int i=0;i<26;i++){
//             children[i] = NULL;
//         }
//         isTerminal = false;
//     }
// };

// class Trie{
//     public:
//     TrieNode* root;

//     Trie(){
//         root = new TrieNode('\0');
//     }

//     void insertWord(string word){
//         insertUtil(root,word);
//     }
//     void insertUtil(TrieNode* root, string word){
//     //Base Case
//     if(word.length() == 0){
//         root->isTerminal = true;//Last ko terminal node k equal krdiya
//         return;
//     }
//     //Sirf Caps wale words he aayenge
//     int index = word[0]-'a';

//     TrieNode* child;
//     //Present
//     if(root->children[index] != NULL){
//         child = root->children[index];
//     } else { // Absent
//         child = new TrieNode(word[0]);
//         root->children[index] = child; // Root k children mein daaldiya
//     }
//     // Recursion
//     insertUtil(child, word.substr(1)); // word k aage wala part pass krdiya,
//                                        // pehle character ko chodkar
//     }


//     void printSuggestions(TrieNode* curr,vector<string> &temp, string prefix){
//         if(curr->isTerminal){
//             temp.push_back(prefix);
//            //Yahan return nahi lgna, bcz 1st terminal node milne k baad woh return krjaega
//         }
//         for(char ch = 'a';ch <='z';ch++){
//             TrieNode* next = curr->children[ch-'a'];

//             if(next != NULL){
//                 prefix.push_back(ch);
//                 printSuggestions(next,temp,prefix);
//                 prefix.pop_back();
//             }
//         }
//     }
    
//     vector<vector<string>>getSuggestion(string str){
//         TrieNode* prev = root;
//         vector<vector<string>>output;

//         string prefix = "";

//         for(int i=0;i<str.length();i++){
//             char lastch = str[i];

//             prefix.push_back(lastch);

//             //Check for last ch
//             TrieNode* curr = prev->children[lastch - 'a'];

//             //if not found
//             if(curr == NULL){
//                 break;
//             }
//             //if found
//             vector<string>temp;
//             printSuggestions(curr,temp,prefix);

//             output.push_back(temp);
//             temp.clear();
//             prev = curr;
//         }
//         return output;

//     }
    
// };
//  vector<vector<string>> phoneDirectory(vector<string> &contactList, string &queryStr) {
//      Trie *t = new Trie();

//      //Inserting all contacts in Trie
//      for(int i=0;i<contactList.size();i++){
//          string str = contactList[i];
//          t->insertWord(str);
//      }

//     return t->getSuggestion(queryStr);
   
// }