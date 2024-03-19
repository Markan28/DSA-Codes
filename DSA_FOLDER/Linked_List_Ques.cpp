#include <iostream>
using namespace std;
//Question - 1 Reversing a linked List

//Approach 1, Iterative solution, Theory on the notebook
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if(head==NULL||head->next == NULL){
//             //Empty linked list, Single node wali ka kaam krdiya
//             return head;
//         }
//         ListNode* previous = NULL;
//         ListNode* current = head;
//         ListNode* forward = NULL;
//         while(current!=NULL){
//             forward = current -> next;
//             current -> next = previous;
//             previous = current;
//             current = forward;
//         }
//         return previous;
        
//     }
// };


//Approach 2, Using Recursion
// class Solution {
//     public:
//     void reverse(ListNode* &head, ListNode* prev,ListNode* curr,ListNode* forward){
//         if(curr==NULL){
//             head = prev;//Bcz Iss time tak prev mein reverse linked list aa chuki hai
//             //Toh head ko uske upar point krvadiya
//             return;
//         }
//         forward = curr -> next;
//         curr -> next = prev; 
//         reverse(head,curr,forward,forward);
//prev = curr tha and curr = forward tha, toh dono ko sidha function mein he likhdia
//     }

//     ListNode* reverseList(ListNode* head) {
//      ListNode* prev = NULL;
//      ListNode* curr = head;
//      ListNode* forward = NULL;
//      reverse(head,prev,curr,forward);
//      return head;   
//     }
// };



// Approach 3, Another Recursive approach , Required theory on the notebook
// Node* reverse(Node* &head){
    // if(head==NULL||head->next == NULL){
    //     return head;
    // }
    // Node* chotahead = reverse(head->next);
    // head -> next -> next = head;
    // head -> next = NULL;
    // return chotahead;
// }

// Node* reverseLinkedList(Node *head)
// {
//     reverse(head);
// }


//Question-2 Middle element se leke aage wali LL print krado

//Theory on notebook
// int getlength(Node* head){
  
//     int len = 0;
//     while(head!=NULL){
//         len++;
//         head = head -> next;
//     }
    
//     return len;
// }

// Node *findMiddle(Node *head) {
//    int length = getlength(head);
//    int ans = (length/2);
  
//    Node* curr = head;
//    int count = 0;
//    while(count < ans){
//     curr = curr -> next;
//     count++;
//    }
//    return curr;
//    }


//Approach 2, Sexy approach, Theory on Notebook

// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* Double = head->next;
//         ListNode* First = head;
//         if(head == NULL|| head -> next == NULL){
//             return head;
//         }
//         if(head->next->next==NULL){
//             return head->next;
//             //2 nodes wale case k liye
//         }
//         while(Double!= NULL){
           
//             Double = Double -> next;
//             if(Double!=NULL){
//                 Double = Double->next;
//             }
//             First = First -> next;
//         }
//         return First;
        
//     }
// };

// Question-3 , LL in K groups V IMP
// int getlength(ListNode* head){
//     int length = 0;
//     while(head!=NULL){
//         length++;
//         head = head -> next;
//     }
//     return length;
// }
//     ListNode* reverseKGroup(ListNode* head, int k) {
//         if(head == NULL||head -> next == NULL){
//             return head;
//         }
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* forward = NULL;
//         int count = 0;
//          while(curr!=NULL && count < k){
//              forward = curr -> next;
//              curr -> next = prev;
//              prev = curr;
//              curr = forward;
//              count++;
//          }
//          int len = getlength(head);
//          int ans = (len)/2 + 1;

//          if(forward != NULL){
//              if(k <= getlength(forward))
//              head -> next = reverseKGroup(forward,k);
//              else
//              head->next = forward;

//              forward = forward->next;
//          }
//          return prev;
//     }


// Question-4, Check Circular Linked list
// Apna dimaag lagaya tha but time limit exceed hogyi, so fuck it
// int getlength(Node* head){
//     int len = 0;
//     while(head!=NULL){
//         head = head->next;
//         len++;
//     }
//     return len;
// }

// bool isCircular(Node* head){
//     if(head == NULL||head->next==NULL){
//         return true;
//     }
//     int length = getlength(head),count = 0;
  
//     while(head != NULL && count<length+1){
//         head = head -> next;
//         if(head == NULL){
//             return false;
//         }
//         count++;
//     }
//     return true;
//     }

//Approach - 1
// bool isCircular(Node* head){
//     if(head == NULL){
//         return true;
//     }
//     if(head -> next == NULL){
//         return false;
//     }
    
//     Node* temp = head->next;
//     while(temp != head && temp != NULL){
//        temp = temp -> next;
       
//     }
//     if(temp==head){
        
//     return true;
//     }
//     else{
//         return false;
//     }
// }
/*Circular linked list ka pata chal jayega iss code se
But question is a bit different, jo upar wala code hai usmein cycle can be formed only be last element to first element
But case can be this too ki last element is connected to the 3rd element, toh uss case mein panga padega
Now for that case the code is written below*/
//Approach-2
// bool isCircular(Node* head){
//     if(head == NULL){
//         return true;
//     }
//     if(head->next == NULL){
//         return false;
//     }
//     map<Node*,bool>visited;
//     Node* temp = head;
//     while(temp!=NULL){
//         if(visited[temp]==true){
//             return true;
//         }
//         visited[temp]=true;
//         temp = temp->next;
//     }
//     return false;
// }
//map ka use krke kiya hai, theory is on the notebook

//Approach 2, Very easy approach, Floyd detect, Theory on notebook
// bool isCircular(Node* head){
//     if(head==NULL){
//         return true;
//     }
//     if(head->next==NULL){
//         return false;
//     }
//     Node* fast = head;
//     Node* slow = head;
//     while(fast!=NULL&&slow!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             }
//     slow = slow->next;
//     if(fast==slow){
//         return true;
//     }
//     }
//    return false;
// }

/*Starting node find kri hai, just below wala pata nahi kyun submit nahi hora tha
Uske niche wala leetcode pe submitted hai, Very easy and sexy questions, whole theory on notebook*/

//   ListNode *detectCycle(ListNode *head){
//   ListNode* fast = head;
//     ListNode* slow = head;
   
//     while(fast!=NULL&&slow!=NULL){
//         fast = fast -> next;
//         if(fast!=NULL){
//             fast = fast -> next;
//         }
//         slow = slow -> next;
//         if(slow == fast){
//             slow = head;
//      while(slow!=NULL){
//             slow = slow -> next;
//             fast = fast -> next;
            
//         }
//                 return slow;
//         }
//         }
//         return NULL;
//}

// Yeh submit hogya tha
//  ListNode *detectCycle(ListNode *head) {
//         ListNode *fast = head, *slow = head;
//         while (fast && fast->next && fast->next->next) {
//             slow = slow->next;
//             fast = fast->next->next;
//             if (slow == fast) {
//                 slow = head;
//                 while (slow != fast) {
//                     slow = slow->next;
//                     fast = fast->next;
//                 }
//                 return slow;
//             }
//         }
//         return nullptr;
//  }

//Starting Node find krne k baad, ab loop delete krni reh gyi bs
/*Saare codes combined hain , this is the way to go
Ismein remove loop wale function mein temp banke startnode se piche wali node pe aagye bas woh smjhne ki baat thi*/
// Node* floyd(Node* head){
// 	if(head == NULL){
// 		return NULL;
// 	}
// 	 Node* fast = head;
// 	 Node* slow = head;
// 	 while(fast!=NULL && slow!=NULL){
// 		fast = fast -> next;
// 		if(fast!=NULL){
// 			fast = fast -> next;
// 		}
// 		slow = slow -> next;
// 		if(slow == fast){
// 			return slow;
// 			}
// 	}
// 	return NULL;
// }
// Node* getstartnode(Node* head){
// 	if(head == NULL){
// 		return NULL;
// 	}
// 	Node* intersection = floyd(head);
// 	 Node* slow = head;
// 	 while(slow!=intersection){
// 		slow = slow -> next;
// 		intersection = intersection -> next;
// 		if(intersection==NULL){
// 			return NULL;
// 		}
// 		if(slow == intersection){
// 			return slow;
// 		}
// 	}
	
// }
// Node* removeLoop(Node* head){
// 	if(head == NULL){
// 		return NULL;
// 	}
// 	Node* startNode = getstartnode(head);
// 	if(startNode == NULL){
// 		return NULL;
// 	}
	
// 		Node* temp = startNode;
// 	while(temp->next != startNode){
// 		temp = temp -> next;
// 	}
// 	temp -> next = NULL;
// 	return head;
// }
// bool detectAndRemoveCycle(Node* head)
// {
   
// 	removeLoop(head);

// }

//Question-6, Remove duplicates in a SORTED LL
// Saara code pehli vaar vich aap likhea c te Theory is on Notebook
// Node * removeDuplicates(Node *head)
// {
//     if(head == NULL || head -> next == NULL){
//     return head;
// }
//    Node* temp1 = head;
//    Node* temp2 = head->next;
//    while(temp2!=NULL){

//    if(temp1->data != temp2->data){
//        temp1 = temp1->next;
//        temp2 = temp2-> next;
//    }
//    else{
//        temp1->next = temp2->next;
//        temp2->next == NULL;
//        temp2 = temp1->next;
//    }
//    }
//    return head;

// }

//Remove duplicates from an Unsorted LL
//Eh wala code time zyada le reha iss krke ghat points mile c, par code di approach easy hai te theory is on notebook
// Node *removeDuplicates(Node *head)
// {
    
//    Node* current = head;
   
//    while(current!=NULL){
//        Node* temp = current ;
//        while(temp->next!=NULL){
//            if(current->data == temp->next->data){
               
//                Node* NodeToDelete = temp->next;
               
//                temp->next = temp->next->next;
//                NodeToDelete->next = NULL;
//                delete(NodeToDelete);
               
//            }
//            else{
//                temp = temp->next;
//            }
// }
//        current = current->next;
//    }
//    return head;
// }


// Question - 7, Sorted LL return kro in 0's , 1's and 2's
// Very Easy Approach 1, Theory on Notebook
// Node* sortList(Node *head){
//    int ZeroCount = 0;
//    int OnesCount = 0;
//    int TwosCount = 0;
//    Node* temp = head;
//    while(temp!=NULL){
//        if(temp->data == 0){
//            ZeroCount++;
//        }
//        else if(temp->data == 1){
//            OnesCount++;
//        }
//        else if(temp->data == 2){
//            TwosCount++;
//        }
//        temp = temp->next;
//    }
//    temp = head;
//    while(temp!=NULL){
//        if(ZeroCount!=0){
//            temp->data = 0;
//            ZeroCount--;
//            }
//        else if(OnesCount!=0){
//             temp->data = 1;
//             OnesCount--;
//         }
//        else if(TwosCount!=0){
//             temp->data = 2;
//             TwosCount--;
//         }
//         temp = temp->next;
//    }
//    return head;
// }


//Sexy Approach - 2, Theory on the Notebook

// void insertAtTail(Node* &tail,Node* curr){
//    //Curr node aage connect krdi bas
 
//  tail->next = curr;
//  tail = curr;  
// }

// Node* sortList(Node *head){
//     Node* ZeroHead = new Node(-1);
//     Node* ZeroTail = ZeroHead;
//     //Dummy node pe Head and Tail point kr rhe hain, teeno cases mein
//     //Tail wala issliye bnaya bcz humein Insert by tail krna padega
//     Node* FirstHead = new Node(-1);
//     Node* FirstTail = FirstHead;
//     Node* SecondHead = new Node(-1);
//     Node* SecondTail = SecondHead;


//     Node* curr = head;
//     while(curr!=NULL){
//        int value = curr -> data;
//        if(value == 0){
//            insertAtTail(ZeroTail,curr);
//        }
//        if(value == 1){
//            insertAtTail(FirstTail,curr);
//        }
//        if(value == 2){
//            insertAtTail(SecondTail,curr);
//        }
//        curr = curr -> next;
//     }

//     //Ab merge krna hai
//     if(FirstHead->next != NULL){
//         ZeroTail->next = FirstHead->next;
//         FirstTail->next = SecondHead->next;
//     }
//     else{
//         ZeroTail->next = SecondHead -> next;
//     }
//     SecondTail->next = NULL;

//     head = ZeroHead->next;
//     delete(ZeroHead);
//     delete(FirstHead);
//     delete(SecondHead);

//     return head;
    
    
// }


// Question - 8, Merging two sorted linked lists into a single sorted LL.
// Theory very well written on the notebook and what an amazing and understandable code
// Node<int>* solve(Node<int>* first, Node<int>* second){
//     Node<int>* curr1 = first;
//     Node<int>* next1 = curr1->next;
//     Node<int>* curr2 = second;
//     Node<int>* next2 = curr2->next;
//     /*If only 1 node is there in first toh phir next1 NULL hai therefore
//     woh loop mein jaega he nahi, tabhi humein ek case bahar banana padega*/
//     if(next1==NULL){
//         curr1->next = curr2;
//         return first;
//     }

//     while(next1!=NULL && curr2!=NULL){
//     if(curr2->data >=curr1->data && curr2->data <= next1->data){
//         curr2->next = next1;
//         curr1->next = curr2;
//         next2 = curr2->next;
//         curr1 = curr2;
//         curr2 = next2;
//     }
//     else{
//         curr1 = next1;
//         next1 = next1->next;
//         if(next1==NULL){
//             curr1->next = curr2;
//             return first;
//         }
//     }
//     }
//     return first;
// }

// Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
// {
//    if(first==NULL){
//        return second;
//    }
//    if(second == NULL){
//        return first;
//    }
//    if(first->data <= second->data){
//        return solve(first,second);
//    }
//    else{
//        return solve(second,first);
//    }
// }


//Code for putting a Linked List data into an array
// vector<int>arr;
// Node* LL;//Jiska data daalna hai array mein
// Node* temp = LL;
// while(temp!=NULL){
//     arr.push_back(temp->data);
//     temp = temp->next;
// }


//Question 9, Palindrome LL, Check if the Given LL is a Palindrome or Not???
//Theory on Notebook and saara code khud likhea bc
// int getlength(LinkedListNode<int> *head){
//     int len = 0;
//     while(head != NULL){
//         len++;
//         head = head->next;
//     }
//     return len;
// }
// LinkedListNode<int> *reverse(LinkedListNode<int> *&temp){
//    LinkedListNode<int> *prev = NULL;
//     LinkedListNode<int> *curr = temp;
//     while(curr!=NULL){
//     LinkedListNode<int> *forward = curr->next;
//         curr -> next = prev;
//         prev = curr;
//         curr = forward;

//     }
//     return prev;
// }
// bool isPalindrome(LinkedListNode<int> *head) {
//    int length = getlength(head);
//    int ans = (length)/2;
//     LinkedListNode<int> *temp = head;
//     while(ans!=0){
//    temp = temp -> next;
//    ans--;
//     }
//     LinkedListNode<int> *reversed = reverse(temp);
//     while(reversed!=NULL){
//         if(head->data != reversed->data){
//             return false;
//         }
//         head = head->next;
//         reversed = reversed->next;
//     }
//     reverse(temp);
//     return true;


// }

// Question 10, Add two numbers given in the form of linked list, Almost same as we did the addition in arrays
// Theory on Notebook
// void InsertAtTail(Node* &anshead,Node* &anstail, int val){
//     Node* temp = new Node(val);
//     if(anshead == NULL){
//         //Empty list wala case
//         anshead = temp;
//         anstail = temp;
//         return;
//     }
//     else{
//         anstail -> next = temp;
//         anstail = temp;
//     }

// }
// Node* add(Node *num1, Node *num2){
//     int carry = 0;
//     Node* anshead = NULL;
//     Node* anstail = NULL;
//     while(num1!=NULL && num2!=NULL){
//         int sum =carry + num1->data + num2->data;
//         int digit = sum%10;
//       Yeh digit humne store krni hai node mein, toh usko bhej dia insert hone ke liye
//         InsertAtTail(anshead, anstail, digit);
//         carry = sum/10;
//         num1=num1->next;
//         num2=num2->next;

//     }
//     while(num1!=NULL){
//         int sum =carry + num1->data;
//         int digit = sum%10;
        
//         InsertAtTail(anshead, anstail, digit);
//         carry = sum/10;
//         num1 = num1->next;
//     }
//        while(num2!=NULL){
//         int sum =carry + num2->data;
//         int digit = sum%10;
        
//         InsertAtTail(anshead, anstail, digit);
//         carry = sum/10;
//         num2 = num2->next;
//     }
//        while(carry!=0){
//         int sum =carry;
//         int digit = sum%10;
        
//         InsertAtTail(anshead, anstail, digit);
//         carry = sum/10;
//     }
//     return anshead;
// }
// Node *addTwoNumbers(Node *num1, Node *num2)
// {
//     Node* ans = add(num1,num2);
//     return ans;
// }


//Question 11, Clone a LL using random pointer
//Whole theory on NB, It was the second approach and it is a pyaari approach, Easy to Understand the steps
// class Solution {
// public:
//     void InsertAtTail(Node* &head,Node* &tail, int data){
//          Node* newNode = new Node(data);
//      if(head == NULL){
//          head = newNode;
//          tail = newNode;
//          return;
//      }
//      else{
//         tail->next = newNode;
//         tail = newNode;
//      }

//     }
//     Node* copyRandomList(Node* head) {
//         Node* CloneHead = NULL;
//         Node* CloneTail = NULL;
//         Node* temp = head;

//         while(temp!=NULL){
//             //next tak saari cheezein Clone list mein pahunch jayengi
//             InsertAtTail(CloneHead,CloneTail,temp->val);
//             temp = temp->next;
//         }
//         unordered_map<Node*,Node*>OldToNew;
//         Node* OriginalNode = head;
//         Node* CloneNode = CloneHead;
//         //Niche wali loop se mapping krdi
//         while(OriginalNode!=NULL){
//             OldToNew[OriginalNode] = CloneNode;
//             OriginalNode = OriginalNode->next;
//             CloneNode = CloneNode->next;
//         }
//         //Ab bas random walon ko place krna hai CloneNode mein
//         OriginalNode = head;
//         CloneNode = CloneHead;
//         while(CloneNode!=NULL){
//             CloneNode->random = OldToNew[OriginalNode->random];
//             OriginalNode = OriginalNode->next;
//             CloneNode = CloneNode->next;
//         }
//         return CloneHead;
//     }
// };


// Approach - 3; Sexiiiiiiiiiiii Approach, Whole damn Theory on Notebook
// void InsertAtTail(Node* &head,Node* &tail,int d){
// 		Node* newNode = new Node(d);
// 	if(head == NULL){
// 		head = newNode;
// 		tail = newNode;
// 		return;
// 	}
// 	else{
// 		tail -> next = newNode;
// 		tail = newNode;
// 	}
// }
// Node *cloneLL(Node *head){
// 	Node* CloneHead = NULL;
// 	Node* CloneTail = NULL;
// 	Node* temp = head;
// 	while(temp!=NULL){
// 		InsertAtTail(CloneHead,CloneTail,temp->data);
// 		temp = temp->next;
// 	}
// 	Node* OriginalNode = head;
// 	Node* CloneNode = CloneHead;
// 	Node* next = NULL;

//  Criss Cross wali LL iss step mein banadi hai
// 	while(OriginalNode != NULL && CloneNode!=NULL){
// 		next = OriginalNode->next;
// 		OriginalNode->next = CloneNode;
// 		OriginalNode = next;

// 		next = CloneNode->next;
// 		CloneNode->next = OriginalNode;
// 		CloneNode = next;
// 	}
//     OriginalNode = head;
// 	CloneNode = CloneHead;
// 	temp = head;

// Iss step mein Clone Node pe pointer assign krdiya, Theory NB mein he hai
// 	while(temp!=NULL){
// 		if(temp -> next != NULL){
// 		if(temp->random != NULL){// Yeh bdia cheez hai bcz agar random -> next NULL hogya, toh code fatt jayega
//     temp -> next -> random = temp -> random -> next;
// 	temp  = temp -> next -> next;
// 	}
// 	else{
// 		temp -> next ->random = temp -> random;
// 		temp  = temp -> next -> next;
// 	}
// 		}

// 	}

// 	OriginalNode = head;
// 	CloneNode = CloneHead;


// Niche wali loop se Dubara do different LL mein convert krdiya

// 	while(OriginalNode!=NULL  && CloneNode!=NULL){
		
// 		OriginalNode -> next = CloneNode -> next;
// 		OriginalNode = OriginalNode -> next;
// 		if(OriginalNode!=NULL){
//         CloneNode -> next = OriginalNode -> next;
// 		}
// 		CloneNode = CloneNode -> next;
// 	}

// 	return CloneHead;
// }

//Question 12, Merge Sort in a linked list, Theory on the notebook


// node* findMid(node* head){
//     node* slow = head;
//     node* fast = head -> next;

//     while(fast!=NULL && fast->next != NULL){
//         slow = slow->next;
//         fast = fast -> next ->next;
//     }
//     return slow;
// }
// node* merge(node* left, node* right){
//     if(left == NULL){
//         return right;
//     }
//     if(right == NULL){
//         return left;
//     }

//     node* ans = new node(-1);
//     node* temp = ans;

//     while(left!=NULL && right!= NULL){
//         if(left -> data < right->data){
//             temp -> next = left;
//             temp = left;
//             left = left -> next;
//         }
//         else{
//             temp -> next = right;
//             temp = right;
//             right = right -> next;

//         }
//     }
//     while(left!=NULL){
//         temp -> next = left;
//         temp = left;
//         left = left -> next;
//     }
//      while(right!=NULL){
//         temp -> next = right;
//         temp = right;
//         right = right -> next;
//     }

//     ans = ans -> next;
//     return ans;
// }
// node* mergeSort(node *head) {
//     if(head == NULL || head -> next == NULL){
//         return head;
//     }

//     node* mid = findMid(head);
//     node* left = head;
//     node* right = mid -> next;
//     mid -> next = NULL;

//      left = mergeSort(left);
//      right = mergeSort(right);

//     node* result = merge(left,right);

//     return result;
// }



// Leetcode pe Delete a node ka question tha, Bas yeh de rakha tha ki LL given nahi hai , therefore bina head ka use krke delete kro
// class Solution {
// public:
//     void deleteNode(ListNode* node) {
//         /*Bc node k piche jana problem tha therefore node ko he previous bana diya..... kaise??
        
//         node k aage wali node ki value node mein daaldi aur node ke aage wali ko delete krdiya...chad bc*/
//         node -> val = node -> next -> val;
//         node -> next = node -> next -> next;

//     }
// };



// A leetcode question - REMOVE LINKED LIST ELEMENTS 
// Theory is on notebook with a nice dummy node concept
// class Solution {
// public:
//     ListNode* removeElements(ListNode* head, int val) {
//         if(head == NULL){
//             return head;
//         }

//         ListNode* first = head;
//         ListNode* second = first -> next;
//         ListNode* ans = new ListNode(-1);
//         ListNode* temp = ans;

//         while(first!=NULL){
//             if(first -> val != val){
//                 temp -> next = first;
//                 temp = first;
//                 first = first -> next;
//             }
//             else{
//                 first = first -> next;
//                 if(first == NULL){
//                 temp -> next = NULL;
//             }
//             }
//         }
//      ans = ans -> next;
//      return ans;
//     }   
        
// };


        



