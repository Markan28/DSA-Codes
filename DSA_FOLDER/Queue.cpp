#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(11);
    cout<<"Front element of queue is : "<<q.front()<<endl;
    q.push(15);
    cout<<"Front element of queue is : "<<q.front()<<endl;
    q.push(13);
    cout<<"Front element of queue is : "<<q.front()<<endl;

    cout<<"Size of queue is : "<<q.size()<<endl;

    q.pop();
    cout<<"Front element of queue is : "<<q.front()<<endl;
    cout<<"Size of queue is : "<<q.size()<<endl;

    cout<<"Is queue empty?? "<<q.empty()<<endl;
}


/*Question - 1, Implementing a queue using an array, Theory on the notebook*/

// #include <bits/stdc++.h> 
// class Queue {

//     int *arr;
//     int front2;//Front bhi lei skte hain, woh codestudio pe already ek function bna hua tha toh error through hora tha
//     int rear;
//     int size;
// public:
//     Queue() {
//         size = 1000001;//Size given nhi tha toh apne hisaab se leliya
//         arr = new int [size];
//         front2 = 0;
//         rear = 0;

       
//     }

//     /*----------------- Public Functions of Queue -----------------*/

//     bool isEmpty() {
//         if(front2 == rear){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }

//     void enqueue(int data) {
//         // enqueue == push
//         if(rear == size){
//             return ;
//         }

//         arr[rear] = data;
//         rear++;
//     }

//     int dequeue() {
//         // dequeue == pop
//         if(front2 == rear){
//             return -1;
//         }
//         int ans = arr[front2];
//         arr[front2] = -1;
//         front2++;

//         if(front2 == rear){
//             front2 = 0;
//             rear = 0;
//         }
//         return ans;
//     }

//     int front(){
//         if(front2 == rear){
//             return -1;
//         }
//         return arr[front2];
//     }
// };


/*Question - 2, Implementation of Circular Queue, Whole Damn theory on Notebook*/
// #include <bits/stdc++.h> 
// class CircularQueue{
//     public:
//    int *arr;
//    int front;
//    int rear;
//    int size;
//     CircularQueue(int n){
//        size = n;
//        arr = new int [size];
//        front = -1;
//        rear = -1;
//     }

//     // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
//     bool enqueue(int value){
//         //Conditions for full queue
        // if(front == 0 && rear == size - 1|| rear == (front-1)%(size-1)){
        //     return false;
        // }

//         //Conditions jismein element chala jayega
//         else if(front == -1){
//             //Pehla element insert kr rhe hain
//             front = 0;
//             rear = 0;
            
           
//         }

//         //if mein woh case hai jismein rear ghoomke aage aata hai and else normal case hai
//        else if(front!=0 && rear == size-1){
//             rear = 0;
           
//             }
//         else{
//             //Sabse normal push
//             rear++;
//         }
//         arr[rear] = value;
//         return true;
//     }

//     // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
//     int dequeue(){
    //     if(front == -1){
    //         return -1;
    //     }
    //     int ans = arr[front];
    //     arr[front] = -1;
        
    //    if(front == rear){
    //         //Ek he element hai bs, front and rear ko dubara -1 krdo
    //         front = rear = -1;
    //     }
    //     else if(front == size-1){
            
    //         front = 0;
    //     }
    //     else{
        
       
    //     front++;
    //     }
       
    //     return ans;
//     }
// };


// int main(){
//     //Understanding STL of deque
//     deque<int>d;
//     d.push_back(12);
//     d.push_front(14);

//     cout<<d.front()<<endl;

//     d.pop_back();
//     cout<<d.back()<<endl; 
// }


/*Question - 3, Implementing a deque, Whole Theory on Notebook*/
// #include <bits/stdc++.h> 
// class Deque
// {
//     int *arr;
//     int front;
//     int rear;
//     int size;
// public:
//     // Initialize your data structure.
//     Deque(int n)
//     {
//        size = n;
//        arr = new int [size];
//        front = -1;
//        rear = -1;
//     }

//     // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
//     bool pushFront(int x)
//     {
//     if(isFull()){//isFull and isEmpty hain woh waale use mein aa jaenge
//             return false;
//         }
//     else if(isEmpty()){
//         front = rear = 0;
//     }
//     else if(front == 0 && rear != size-1){
//         front = size-1;
//     }
//     else{
//     //front k piche space hogi he hogi bcz full space wali conditions humne upar laga di hain
//         front--;
//     }
//     arr[front] = x;
//     return true;
//     }

//     // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
//     bool pushRear(int x)
//     {
//     if(isFull()){
//             return false;
//         }
//     else if(isEmpty()){
//         front = rear = 0;
//     }
//     else if(rear == size - 1 && front != 0){
//        // rear 0 hone k baad usmein value jaa rhi hai, agar front 0 hota toh iska matlab deque full hai
//         rear = 0;
//     }
//     else{
//         rear++;
//     }
//     arr[rear] = x;
//     return true;
//     }

//     // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
//     int popFront()
//     {
//              if(isEmpty()){
//             return -1;
//         }
//         int ans = arr[front];
//         arr[front] = -1;
        
//        if(front == rear){
//             //Ek he element hai bs, front and rear ko dubara -1 krdo
//             front = rear = -1;
//         }
//         else if(front == size-1){
            
//             front = 0;
//         }
//         else{
        
       
//         front++;
//         }
       
//         return ans;
//     }

//     // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
//     int popRear()
//     {
//      if(isEmpty()){
//             return -1;
//         }
//         int ans = arr[rear];
//         arr[rear] = -1;
        
//        if(front == rear){
//             //Ek he element hai bs, front and rear ko dubara -1 krdo
//             front = rear = -1;
//         }
//         else if(rear == 0){
            
//             rear = size -1;
//         }
//         else{
        
       
//         rear--;
//         }
       
//         return ans;
//     }

//     // Returns the first element of the deque. If the deque is empty, it returns -1.
//     int getFront()
//     {
//        if(isEmpty()){
//            return -1;
//        }
//        else{
//            return arr[front];
//        }
//     }

//     // Returns the last element of the deque. If the deque is empty, it returns -1.
//     int getRear()
//     {
//         // Write your code here.
//         if(isEmpty()){
//            return -1;
//        }
//        else{
//            return arr[rear];
//        }
//     }

//     // Returns true if the deque is empty. Otherwise returns false.
//     bool isEmpty()
//     {
//         if(front == -1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }

//     // Returns true if the deque is full. Otherwise returns false.
//     bool isFull()
//     {
//     if(front == 0 && rear == size - 1||front!=0 && rear == (front-1)%(size-1)){
//             return true;;
//         }
//         else{
//             return false;
//         }
//     }
// };



/*Question - 4, Reversing a Queue*/

//Approach - 1, Using Stack , Sexy Approach
// #include <bits/stdc++.h> 
// queue<int> reverseQueue(queue<int> q)
// {
//     stack<int>s;
//     while(!q.empty()){
//         int element = q.front();
//         q.pop();
//         s.push(element);
//     }
//     while(!s.empty()){
//         int element = s.top();
//         s.pop();
//         q.push(element);
//     }
//     return q;
// }


//Approach - 2 Using Recursion
// #include <bits/stdc++.h> 
// queue<int> reverseQueue(queue<int> q)
// {
//     if(q.empty()){
//         return q;
//     }
//     int topElement = q.front();
//     q.pop();
    
//     q = reverseQueue(q);//q mein store krna is necessary
//     q.push(topElement);

//     return q;
    
// }


/*Question - 5, First negative integer in every window of size k*/
// #include <bits/stdc++.h> 
// vector<int> firstNegativeInteger(vector<int> &arr, int k, int n)
// {

//    deque<int>dq;
//    vector<int>ans;//Ismein final answer store krenge

//    for(int i=0;i<k;i++){
//        if(arr[i]<0){
//            dq.push_back(i);//Pehle -ve number ka index mil jaega and uss index ko dq mein store krdiya
//        }
//     }
//     //Storing answer of first k sized window
//     if(dq.size()>0){
// //i.e. dq mein kuch toh aa chuka hai and that kuch is the 1st -ve integer of first window
// // Ab agar by chance yeh  khaali hai i.e. dono element positive the and we have to return 0.     
//         ans.push_back(arr[dq.front()]);

//     }
//     else{
//         ans.push_back(0);
//     }
// //For remaining windows now
//    for(int i=k;i<n;i++){
//        //For removing
//        if(!dq.empty() && i-dq.front()>=k){
//         //i - dq.front() should be greater than equal to k as if k = 2 and i = 2(== k) then dq.front() should be 0 and 1 and 2 
//         //Baaki saare cases ko yeh wali condition nullify krdegi, thus agar dq.front 0 tha toh 2 - 0 = 2 and uss case mein pop_front
//            dq.pop_front();
//        }
//        if(arr[i]<0){
//            dq.push_back(i);//index store kra
//        }
//        //Baaki saare same steps
//        if(dq.size()>0){
         
//         ans.push_back(arr[dq.front()]);

//     }
//     else{
//         ans.push_back(0);
//     }

//    }
//    return ans;

//    }


/*Question - 6, Reversing 1st K elements of a queue, Saara khud likha tha and submitted in one go*/
// #include <bits/stdc++.h> 
// queue<int> reverseElements(queue<int> q, int k)
// {
//    stack<int>s;
//    queue<int>qExtra;
//    while(!q.empty() && k!=0){
//        int element = q.front();
//        q.pop();
//        s.push(element);
//        k--;
//    }
//    while(!q.empty()){
//        int element = q.front();
//        q.pop();
//        qExtra.push(element);
//    }
//    while(!s.empty()){
//        int element = s.top();
//        s.pop();
//        q.push(element);
//    }
//    while(!qExtra.empty()){
//        int element = qExtra.front();
//        qExtra.pop();
//        q.push(element);
//    }
//    return q;
// }


//Question - 7, First Non Repeating character in a stream, Theory on notebook
// #include <bits/stdc++.h> 
// char firstNonRepeatingCharacter(string str) {

//   unordered_map<char,int>count;//Har character ka count store krne k liye use kiya
//   queue<int>q;//q mein string store krate rahe
//   char ans;//Final first Non Repeating character ismein store krvaya

//   if(str.length() == 1){
//     return str[0];//Single element case
//   }

//   for(int i=0;i<str.length();i++){
//     char ch = str[i];

//     count[ch]++;//Uss particular element ka count increase krdiya

//     q.push(ch);// q mein daaldiya

//     while(!q.empty()){
//       if(count[q.front()]>1){
//         q.pop();//Agar count 1st element ka greater than 1 hogya i.e. woh aage bhi hai, toh usko pop krdo
//       }
//       else{
//         ans = q.front();//Agar single hai woh teri tarah toh store krle and loop se bahar aane k liye break lagadi
//         break;
//       }
//     }

//     if(q.empty()){
//       ans = str[0];//Agar sab ne ek doosre ko udaa diya toh a mein store he nahi hoga kuch toh question ne kaha ki string ka 1st element return krdo
//     }
//   }
//   return ans;
// }


/*Niche wala question important tha toh uska Pura Dry Run hindi mein likhenge
Suppose Question is
Petrol  Distance
1  5
10 3
4  5

Iss case mein size 3 hai, ab code se line by line chalte hain balance hoga 0+1-5 which -4 and less than zero therefore deficit hogya
-4 and index 0 toh fail hogya and now index = 0+1 kiya and index 1 pe chale gye.
Ab balance hua 7 and fir loop chali and balance hua 7-1 which is 6 and hum purana toh traverse kr chuke hain
Ab bas dekhna hai ki agar balance + deficit >= 0 hai i.e. truck pura geda nikal dega otherwise nahi nikal skta toh -1 
return krdo and iss case mein 6-4 , 2 bachega and index 1 return hojaega
*/

// Question - 8, Very Important problem ka easy solution, Circular tour
// #include <bits/stdc++.h> 
// int firstCircularTour(vector<int>& petrol, vector<int>& distance, int N)
// {
// 	int balance = 0;
// 	int deficit = 0;
// 	int start = 0;

// 	for(int i=0;i<N;i++){
// 		balance = balance + petrol[i] - distance[i];//Balance calculate kiya
// 		if(balance < 0){
//        deficit = deficit + balance;
// 	   start = i+1;
// 	   balance = 0;
// 	}

// }
// 	if(deficit + balance >= 0){
// 		return start;
// 	}
// 	else{
// 		return -1;
// 	}

// }


//Question - 9, Interleave the first half of the queue with the second half
/*Easy question, Approach and theory on the notebook*/
// #include <bits/stdc++.h> 
// void interLeaveQueue(queue < int > & q) {
//    queue<int>newQ;

//    int s = q.size()/2;
//    while(s>0){
//        int val = q.front();
//        newQ.push(val);
//        q.pop();
//        s--;
//    }

//    while(!newQ.empty()){
//        int val = newQ.front();
//        q.push(val);
//        newQ.pop();

//        val = q.front();
//        q.pop();
//        q.push(val);
//    }
// }


//Question - 10, Implementing 'k' Queues using an array
/*Purra code yahin pe likhenge*/


// #include <iostream>
// using namespace std;

// class kQueue{
//     public:
//     int n;
//     int k;
//     int *front;
//     int *rear;
//     int *arr;
//     int freespot;
//     int *next;

//     public: 

//     kQueue(int n,int k){
//         this -> n = n;
//         this -> k = k;
//         front = new int[k];
//         rear = new int[k];
//         for(int i=0; i<k; i++){
//           front[i] = -1;
//           rear[i] = -1;
//         }
//         next = new int[n];
//         for(int i=0;i<n;i++){
//             next[i] = i+1;
//         }
//         next[n-1] = -1;
//         arr = new int[n];
//         freespot = 0;
//     }
//     void enqueue(int data, int qn){
//         //Overflow
//         if(freespot == -1){
//             cout<<"No empty space is present "<<endl;
//             return;
//         }

//         //Find first free index
//         int index = freespot;

//         //update freespot
//         freespot = next[index];

//         //check whether first element
//         if(front[qn-1] == -1){
//             front[qn-1] = index;
//         }
//         else{
//             //Link new element to the previous element
//             next[rear[qn-1]] = index;
//         }

//         //Update next
//         next[index] = -1;

//         //Update rear 
//         rear[qn-1] = index;

//         //Push Element
//         arr[index] = data;

//     }

//    int dequeue(int qn){
//         //Underflow
//         if(front[qn-1]==-1){
//             cout<<"Queue Underflow"<<endl;
//             return -1;
//         }

//         //Find index to pop
//         int index = front[qn - 1];

//         //Front ko aage badhao
//         front[qn-1] = next[index];

//         //freeslots ko manage kro
//         next[index] = freespot;
//         freespot = index;
//         return arr[index];

//     }

// };

// int main(){
//     kQueue q(10,3);
//     q.enqueue(10,1);
//     q.enqueue(15,1);
//     q.enqueue(20,2);
//     q.enqueue(25,1);

//     cout<< q.dequeue(1) <<endl;
//     cout<< q.dequeue(2) <<endl;
//     cout<< q.dequeue(1) <<endl;
//     cout<< q.dequeue(1) <<endl;

//     /*Doubtful and tough question, Ache se samjhna hai teacher se*/
// }



// Question - 11, Sum of minimum and maximum elements of all subarrays of size K
// #include <bits/stdc++.h> 
// long long sumOfMaxAndMin(vector<int> &nums, int n, int k) {
// 	deque<int>maxi(k);
// 	deque<int>mini(k);

// 	/*First k sized window*/
// 	for(int i=0;i<k;i++){
//       while(!maxi.empty() && nums[maxi.back()] <= nums[i])
// 	  maxi.pop_back();
// 	  while(!mini.empty() && nums[mini.back()] >= nums[i])
// 	  mini.pop_back();

// 	  maxi.push_back(i);
// 	  mini.push_back(i);

// 	}

//    long long int sum = 0;
//    sum += nums[maxi.front()] + nums[mini.front()];
// 	for(int i=k;i<n;i++){
      

//       //Removal
// 	  while(!maxi.empty() && i-maxi.front() >= k){
// 		  maxi.pop_front();
// 	  }
// 	  while(!mini.empty() && i-mini.front() >= k){
// 		  mini.pop_front();
// 	  }

// 	  //Addition, The way we did earlier
// 	  while(!maxi.empty() && nums[maxi.back()] <= nums[i])
// 	  maxi.pop_back();
// 	  while(!mini.empty() && nums[mini.back()] >= nums[i])
// 	  mini.pop_back();

// 	  maxi.push_back(i);
// 	  mini.push_back(i);
// 	  sum += nums[maxi.front()] + nums[mini.front()];

// 	}

// 	//Don't Forget to consider the last case
	

// 	//sum += nums[maxi.front()] + nums[mini.front()];
// 	return sum;

// }






