#include <iostream>
#include <stack>
using namespace std;
// int main(){
//     //Understanding stack- It basicallly means last in first out
//     stack<int>s;
//     s.push(2);
//     s.push(5);
//     s.push(7);

//     cout<<"Top element : "<<s.top()<<endl;
//     s.pop();//Sabse upar wala pop hoga 
//     cout<<"Top Element : "<<s.top()<<endl;
//     //Size and empty vagera ohdan he kad skde aan
//     if(s.empty()){
//         cout<<"Stack is Empty"<<endl;
//     }
//     else{
//         cout<<"Stack is not Empty"<<endl;

//     }
//     cout<<"Size of Stack is : "<<s.size()<<endl;
// }

// Implementation of Stack using Array, LL se Implementation kr lena by yourself
// class Stack{
//     public: 
//     int *arr;
//     int top;
//     int size;

//     Stack(int size){
//         this -> size = size;
//         arr = new int[size];
//         top = -1;//Will be the Index
//     }

//     void push(int element){
// //size - top  Agar 1 se bada hai i.e. space available hai, Therefore
//          if(size - top > 1){
//          top++;
//          arr[top] = element;
// }
//         else{
//             cout<<"Stack Overflow"<<endl;
//         }
// }
//     void pop(){
//       if(top>=0){
//         top--;

//       }
//       else{
//         cout<<"Stack Underflow"<<endl;
//       }
//     }
//     int peak(){
//         if(top>=0 ){
//         return arr[top];
//         }
//         else{
//             cout<<"Stack is Empty"<<endl;
//             return -1;
//         }
//     }
//     bool isEmpty(){
//         if(top==-1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };

// int main(){
//     Stack st(5);
//     st.push(22);
//     st.push(43);
//     st.push(44);

//     cout<<st.peak()<<endl;
//     st.pop();
//     cout<<st.peak()<<endl;
//     st.pop();
//     cout<<st.peak()<<endl;
//     st.pop();
//     cout<<st.peak()<<endl;

//     if(st.isEmpty()){
//         cout<<"Stack is Empty"<<endl;
//     }
//     else{
//         cout<<"Stack is Empty"<<endl;

//     }
// }


//Question 1, Two Stacks , Theory on the Notebook
// #include <bits/stdc++.h> 
// class TwoStack {
//     int *arr;
//     int top1;
//     int top2;
//     int size;

// public:

//     // Initialize TwoStack.
//     TwoStack(int s) {
//         this -> size = s;
//         top1 = -1;
//         top2 = size;
//         arr = new int[s];
//     }
    
//     // Push in stack 1.
//     void push1(int num) {
//        if(top2-top1>1){
//            //i.e. Atleast ekjagah toh hai array mein
//            top1++;
//            arr[top1]=num;
//        }
//     }

//     // Push in stack 2.
//     void push2(int num) {
//         //Yahan bhi size ki condition toh same he rahegi
//         if(top2-top1>1){
//             top2--;
//             arr[top2] = num;
//         }
//     }

//     // Pop from stack 1 and return popped element.
//     int pop1() {
//         if(top1>=0){
//             int ans = arr[top1];
//             top1--;
//             return ans;
//             //Jo element pop kiya usko return krna hai
//         }
//         else{
//             return -1;
//         }
//     }

//     // Pop from stack 2 and return popped element.
//     int pop2() {
//        if(top2 < size){
//            int ans = arr[top2];
//              top2++;
//              return ans;
//        }
//        else{
//            return -1;
//        }
//     }
// };

//Reversing a string using Stack
// int main(){
//     string str = "akshit";
//     stack<char>s;
//     //String nu stack vich sutt ta
//     for(int i=0;i<str.length();i++){
//         char ch = str[i];
//         s.push(ch);
//         }
//         //Khaali String banai Ans
//         string ans = "";
//         //Uss vich top ton element push krte , jo ki Reverse hoke he jaange
//         while(!s.empty()){
            
//                 char ch = s.top();
//                 ans.push_back(ch);
//                 s.pop();
            
//         }

//         cout<<"Answer is : "<<ans<<endl;
// }

//Question - 2 , Deleting Middle Element of a stack, Theory on Notebook
// #include <bits/stdc++.h> 
// void solve(stack<int>&inputStack,int count,int size){
//    //Base Case
//    if(size/2 == count){
//       inputStack.pop();
//       return;
//    }
//   // Top wala stor krke udaa diya
//    int num = inputStack.top();
//    inputStack.pop();

//   // Recursion baaki cases sambhalega
//    solve(inputStack,count+1,size);
//    // Number add krdiya baadmein
//    inputStack.push(num);
// }
// void deleteMiddle(stack<int>&inputStack, int N){
	
//    int count = 0;
//    solve(inputStack,count,N);
//    return;
// }


// Question - 3, Valind Parenthesis, Theory on Notebook
// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char>sta;
//     for(int i=0;i<s.length();i++){
//         char ch = s[i];
//         //if Opening bracket then push krdena hai stack mein
//         if (ch == '('  || ch == '{'  || ch == '[' ) {
//           sta.push(ch);
//         }
        

//         // if closing bracket hai toh compare with top element and then pop the top element
        
//         else{

//           if (!sta.empty()) {
//             //sta empty he na ho kahin, yeh bhi check krna hai bcz sidha he closing bracket se start nahi kr skte thus iska else false hoga
//             char peak = sta.top();
//             if (ch == '}'&& peak == '{' || ch == ')'&& peak == '(' || ch == ']'&& peak == '[') {

//               sta.pop();
//             }
//             else{
//                 return false;
//             }
//           } 
//           else {
//             return false;
//           }
//         }
//     }
//     if(sta.empty()){
//         //i.e. Sarri openings k pass Closing bracket bhi thi, Thus Nothing's left
//         return true;
//     }
//     else{
//         return false;
//     }
//     }
// };


// Question - 4, Insert an element in the Bottom of the Stack, Theory on NB and khud likha tha bhai
// #include <bits/stdc++.h> 
// void solve(stack<int>& myStack, int x){

//     if(myStack.empty()){
//         myStack.push(x);
//         return;
//     }

//     int a = myStack.top();
//     if(!myStack.empty()){
//         myStack.pop();
//     }
//     solve(myStack,x);

//     myStack.push(a);
// }
// stack<int> pushAtBottom(stack<int>& myStack, int x){

    
//     solve(myStack,x);
//     return myStack;
// }

//Question - 5, Reverse a stack using recursion
// void insertBottom(stack<int> &stack, int ans){
//     if(stack.empty()){
//         stack.push(ans);
//         return;
//     }

//     int num = stack.top();
//     stack.pop();
//     insertBottom(stack,ans);

//     stack.push(num);
// }
// void reverseStack(stack<int> &stack) {
//     //Base Condition for ReverseStack function
//     if(stack.empty()){
//         return;
//     }
//     int ans = stack.top();
//      stack.pop();
//      reverseStack(stack);//Reverse Stack krke Pura stack reverse ho jana, Bas jo top element nikala usnu end vcih push krna
//      insertBottom(stack,ans);
// }




/*Kya ho raha hai niche wale question mein??
Pehle har element ko num mein store krliya, pher pop krdiya , Ab stack khali hai, Chal yaar ek example lete hain,
Suppose stack was 1,5,3 ans sorted output hogi 5,3,1(upar se niche)
1 num mein rakha fer pop krdiya then recursion hui, 5 store krdiya num mein then pop kra and then phir recursion and then
3 ko num mein store krke, woh bhi pop krdiya, Stack hogya empty and sortStack ki base Condition satisfy hogyi.
Ab Recursion back maaregi i.e. 3 se piche ko
Ab 3 k liye InsertSorted chala then base condition satisfy hogyi and woh bottom pe chala gya then
5 k liye InsertSorted chala and woh bhi base condition mein he satisfy hogya as stack.top which is 3 is less than num
thus 5,3 store hogya Stack mein, Ab 1 k liye Insertsorted call hua and iss baar base conditon fail hogyi as 1 < 5
therefore n mein 5 store hogya , and 5 ko pop krdiya
waapis InsertSorted call and phir condition fail as 1 is less than 3 too ,thus 3 ko bhi n mein store krke pop krdiya.
Now base case is satisfied as Stack got empty and 1 last pe store hogya, ab 3 se recursion chali and woh push krdiya
then 5 k liye recursion kri and usko push krdiya and finally 5,3,1 Sorted stack store hogya...YAYYYYYYYYYYYYY*/

// Question - 6, Sort A Stack, Theory on the Notebook
// #include <bits/stdc++.h> 
// void InsertSorted(stack<int> &stack,int num){
//      if(stack.empty() || stack.top()<num){
// 		 //Yaa toh khali he ho, yaa phir khaali nahi hai and num bada hai top wale se, uss case meinpush krdenge
// 		 stack.push(num);
// 		 return;
// 	 }
// 	 int n = stack.top();
// 	 stack.pop();

// 	 InsertSorted(stack,num);

// 	 stack.push(n);
// }
// void sortStack(stack<int> &stack)
// {
// 	if(stack.empty()){
// 		return;
// 	}
// 	int num = stack.top();
// 	stack.pop();

// 	//Recursive call
// 	sortStack(stack);
// 	//Saare elements pop hogye last wale tak, ab niche se upar push shuru hoga, InsertSorted wale function mein
// 	InsertSorted(stack,num);
// }


//Question - 7, Redundant Brackets, Theory on the Notebook

// bool findRedundantBrackets(string &s)
// {
//    
//     stack<char>st;
//     for(int i=0;i<s.length();i++){
//         char ch = s[i];
//         if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/'){
//       //Agar inn saari cheezoin mein se hoga toh push krdenge otherwise lesssgo to else
//             st.push(ch);
//                     }

//         else{
//             //Yaa toh lowercase letter hai yaa phir Closing bracket
//             if(ch == ')'){
//                 bool isRedundant = true;
//                 while(st.top()!='('){
//                     char top = st.top();
//                     if(top=='+' || top=='-' || top=='*' || top=='/'){
//                         isRedundant = false;
// //We know ki Closing and opening bracket dono exist krti hain, Agar inn dono k beexh operator aaya i.e. redundancy nahi hai, otherwise hai
//                     }
//                     st.pop();
//                 }
//                 if(isRedundant == true){
//                     return true;
//                 }
//                     st.pop();//Yeh '(' iske liya kra bcz jab do brackets(opening and closing) waali uss case mein help krega
//             }
//         }             
//     }
//     return false;
// }



// Question - 8, Minimum cost to make a string Valid , Theory on the Notebook

// #include <bits/stdc++.h> 
// int findMinimumCost(string str) {
//   stack<char>s;
//   if (str.length() & 1) {
//     return -1;
//   }

//   for(int i=0;i<str.length();i++){
//       char ch = str[i];
//       if(ch == '{'){
//         s.push(ch);
//       } else {
        
//           if(!s.empty() && s.top()=='{'){
//             s.pop();
//           }
//           else{
//             s.push(ch);
//             //Invalid hogya hai ab, Ab count kro valid hone tak
//           }
        
//       }
      
//   }
//       int a = 0, b = 0;//a is count of closing braces and b is count of closing braces
//       while(!s.empty()){
//         if (s.top() == '{') {
//           b++;
//           s.pop();
//         }
//        else{
//           a++;
//           s.pop();
//         }
//       }
//       int ans = (a+1)/2 + (b+1)/2;
//       return ans;
// }


// Question - 9, Next smallest element, Theory on Notebook, easy he hai question
//#include <stack>

// vector<int> nextSmallerElement(vector<int> &arr, int n)
// {
//     stack<int>s;
//     s.push(-1);
//     vector<int>ans(n);

//     for(int i=n-1;i>=0;i--){
//     int curr = arr[i];
//     while(s.top()>=curr){
//     s.pop();
//     }
//     ans[i]=s.top();//i ka use krke piche se he bhardiya
//     s.push(curr);
   
//     }
   
//     return ans;
   
// }



//Question - 10, Max area of the histogram blocks, Theory on notebook


/*Purri approach likhenge yaar, It's our first damn HARD Question
Humare pass Blocks ki length is given by the heights array
Largest Rectangle nikalne k liye humne yeh hisaab lagaya ki agar just prev yaa just next existing se length mein bada hai
toh uss side ko breadth increase ho skti hai,length to constant he rehni hai
Right side k liye nextElement bna liya and Left Side k liye prevElement function bana liya
Ab humne bas indexes se khelna hai and woh humein milenge from the loops

Example lete hain
Suppose heights mein = {2,1,5,6,2,3} 

Breadths kaise li hain woh NB se dekhle and ek special case hai jismein next can be -1 woh case bhi dekhliyo

next element k liye jo nextElement ka code tha woh chalaya and for
{2,1,5,6,2,3} Next Samllest elements will be {1,-1,2,2,-1,-1} and Prev smallest Elements will be {-1,-1,1,5,1,2} respectively
Inn sabko ans mein store kraya with the help of for loop.

Uske baad for loop ka use krke har function ka max area nikala and we compared with each other using int area 
and jo maximum area tha usko return krdiya
*/




//  #include <stack>
//  vector<int> nextSmallerElement(vector<int> arr, int n){
//     stack<int>s;
//     s.push(-1);
//     vector<int>ans(n);

//     for(int i=n-1;i>=0;i--){
//     int curr = arr[i];
//     while(s.top()!= -1 && arr[s.top()]>=curr){
//     s.pop();
//     }
//     ans[i]=s.top();
//     s.push(i);//Pichle question mein curr push kra tha but yahan humein index chahiye toh i push kraa
   
//     }
   
//     return ans;
//  }
//   vector<int> prevSmallerElement(vector<int> arr, int n){
//     stack<int>s;
//     s.push(-1);
//     vector<int>ans(n);

//     for(int i=0;i<n;i++){
//     int curr = arr[i];
//     while(s.top()!= -1 && arr[s.top()]>=curr){
//     s.pop();
//     }
//     ans[i]=s.top();
//     s.push(i);//Pichle question mein curr push kra tha but yahan humein index chahiye toh i push kraa
   
//     }
   
//     return ans;
//   }
//  int largestRectangle(vector < int > & heights) {
//    int n = heights.size();//n is the number of sranding blocks
//    vector<int> next(n);
//    next = nextSmallerElement(heights,n);

//    vector<int> prev(n);
//    prev = prevSmallerElement(heights,n);

//    int area = -1;

//    for(int i=0;i<n;i++){
//      int l = heights[i];
//      if(next[i]==-1){
//        next[i] = n;
//      }
//      int b = next[i] - prev[i] - 1;


//      int newArea = l*b;
//      area = max(area,newArea);
// }
// return area;
//  }


#include <bits/stdc++.h> 
/*
	This is signature of helper function 'knows'.
	You should not implement it, or speculate about its implementation.

	bool knows(int A, int B); 
	Function 'knows(A, B)' will returns "true" if the person having
	id 'A' know the person having id 'B' in the party, "false" otherwise.
*/

//Question - 11, Celebrity Problem, Theory on the Notebook
//Approach - 2 Using Stacks

// int findCelebrity(int n) {
//  	stack<int>s;
// 	for(int i=0;i<n;i++){
// 		//Saare elements Stack mein push krdiye
// 		s.push(i);
// 	}

// 	while(s.size()>1){
// 		int a = s.top();
// 		s.pop();
// 		int b = s.top();
// 		s.pop();
// //Ek baar loop run hone se ek element to eliminate hoga he bcz agar a jaanta hua toh a cannot be
// // a celeb , toh b ko push krdiya, aur agar a naa jaanta hua i.e. b cannot be celeb bcz Celeb ko 
// // toh sab jaante hain thus uss case mein a push krdiya
// 		if(knows(a,b)){
// 			s.push(b);
// 		}
// 		else{
// 			s.push(a);
// 		}
// 	}
// 	int PotentialCeleb = s.top();
// /*Verification part is somewhat not correct for one case only , jismein PotentialCeleb and i dono 0 hain. Pata nahi kya scene hora hai , 
// Verify once and we got 64/80 points on coding ninjas
// */
// 	int i=0;
// 	while(i<n){
// 		if(i!=PotentialCeleb){
			
		
// 		if(knows(i,PotentialCeleb)){
// 			i++;
// 		}
// 		else{
// 			return -1;
// 		}
// 		}
// 		else{
// 			i++;
// 		}
// 	}
// 	return PotentialCeleb;
// }


// Question - 12, Max Area of Rectangle in binary matrix with all 1's, Theory on the Notebook

//   #include <stack>
//    vector<int> nextSmallerElement(vector<int> arr, int n){
//     stack<int>s;
//     s.push(-1);
//     vector<int>ans(n);

//     for(int i=n-1;i>=0;i--){
//     int curr = arr[i];
//     while(s.top()!= -1 && arr[s.top()]>=curr){
//     s.pop();
//     }
//     ans[i]=s.top();
//     s.push(i);//Pichle question mein curr push kra tha but yahan humein index chahiye toh i push kraa
   
//     }
   
//     return ans;
//  }
  
//    vector<int> prevSmallerElement(vector<int> arr, int n){
//     stack<int>s;
//     s.push(-1);
//     vector<int>ans(n);

//     for(int i=0;i<n;i++){
//     int curr = arr[i];
//     while(s.top()!= -1 && arr[s.top()]>=curr){
//     s.pop();
//     }
//     ans[i]=s.top();
//     s.push(i);//Pichle question mein curr push kra tha but yahan humein index chahiye toh i push kraa
   
//     }
   
//     return ans;
//   }

//  int largestRectangle(vector<int> heights,int n) {
//   // int n = heights.size();//n is the number of sranding blocks
//    vector<int> next(n);
//    next = nextSmallerElement(heights,n);

//    vector<int> prev(n);
//    prev = prevSmallerElement(heights,n);

//    int area = -1;

//    for(int i=0;i<n;i++){
//      int l = heights[i];
//      if(next[i]==-1){
//        next[i] = n;
//      }
//      int b = next[i] - prev[i] - 1;


//      int newArea = l*b;
//      area = max(area,newArea);
// }
// return area;
//  }

/*Yahan tak toh pura code Histogram wala he chepa hai, we just coverted rows into histogram blocks and then area nikal k compare krdiya*/

// int maximalAreaOfSubMatrixOfAll1(vector<vector<int>> &mat, int n, int m){
// 	int area = largestRectangle(mat[0],m);//Computing area of the 1st row

// 	for(int i=1;i<n;i++){
// 		for(int j=0;j<m;j++){
    /*Bas ek he if wali condition hai agar agar base pe zero ho toh usko zero he consider krke chalna hai*/
// 			if(mat[i][j]!=0){
// 			mat[i][j] = mat[i][j] + mat[i-1][j];//Isse pichli row add ho rahi hai
// 			}
// 			else{
// 				mat[i][j] = 0;
// 		}
// 			}
// 	area = max(area,largestRectangle(mat[i],m));
// 	}
// 	return area;
// }

//Ek baar dry run krlin upar wala




/*Question - 13, Implementing N stacks in an array, Whole theory on the notebook*/
// #include <bits/stdc++.h> 
// class NStack
// {
//     int* arr;
//     int* top;
//     int* next;

//     int n,s;

//     int freespot;
// public:
//     // Initialize your data structure.
//     NStack(int N, int S)
//     {
//         n = N;
//         s = S;
//         arr = new int[s];
//         top = new int[n];
//         next = new int [s];
//          //Sarre top mein -1 push krdiye
//         for(int i=0;i<n;i++){
//             top[i] = -1;
//         }
//          // saare next mein index se ek bada and last wale mein -1 put krdiya
//         for(int i=0;i<s;i++){
//             next[i] = i+1;
//         }

//         next[s-1] = -1;

//         freespot = 0;


//     }

//     // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
//     bool push(int x, int m)
//     {
//        //check for overflow
//        if(freespot == -1){
//            return false;
//        }
//        Dry run of these 5 steps on the notebook
//        int index = freespot;

//        freespot = next[index];

//        arr[index] = x;

//        next[index] = top[m-1];

//        top[m-1] = index;
       
//        return true;

//     }

//     // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
//     // Dry run on the Notebook, m tells on what stack the shit is required to be performed
//     int pop(int m)
//     {
//        if(top[m-1] == -1){
//            return -1;
//        }
//        int index = top[m-1];

//         top[m-1] = next[index];

//         next[index] = freespot;

//         freespot = index;

//         return arr[index];

        
//     }
// };


/*Question - 14, Design a stack that supports getmin(), Whole damn theory on the notebook*/
// #include <stack>
// class SpecialStack {
//     stack<int>s;
//     int mini;
//     public:
        
//     void push(int data) {
//        if(s.empty()){
//            s.push(data);
//            mini = data;
//        }
//        else{
//            if(data<mini){
//                int val = 2*data - mini;
//                s.push(val);
//                mini = data;
//            }
//            else{
//                s.push(data);
//            }
//        }
//     }

//     void pop() {
//         if(s.empty()){
//             return ;
//         }
//         int curr = s.top();
//         s.pop();
//          if(curr>mini){
//             return ;
//         }
//         else{
//             int prevMin = mini;
//             int val = 2*mini - curr;
//             mini = val;
//             return ;
//         }
       
//     }

//     int top() {
//        if(s.empty()){
//            return -1;
//        }
//        int curr = s.top();
//        if(curr<mini){
//            return mini;
//        }
//        else{
//            return curr;
//        }

//     }

//     int getMin() {
//        if(s.empty()){
//            return -1;
//        }
//        return mini;
//     }  
// };

//Yeh val ki kahani notebook pe smjahi hui hai, Dry run vagera sab hai toh chilllllllll

/*Don't know kab padh raha hoga tu but Don't lose hope bhai, You r the best, Just Trust Yourself*/


