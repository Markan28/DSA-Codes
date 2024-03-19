// Convert Binary Number in a LL to a Integer LL ********
// int getDecimalValue(ListNode* head) {
//         vector<int>ans;
//         while(head){
//             ans.push_back(head->val);
//             if(head->next)
//             head = head->next;
//             else
//             break;
//         }
//         int ans1 = 0;
//         int z = 0;
//         for(int i = ans.size()-1;i>=0;i--){
//             ans1 = ans1 + pow(2,z)*ans[i];
//             z++;
//         }
//         return ans1;
//     }

// O(1) Space nal v krta
// int getDecimalValue(ListNode* head) {
//         ListNode* leng = head;
//         int len = 0;
//         while(leng){
//             len++;
//             if(leng->next)
//             leng = leng->next;
//             else
//             break;
//         }
//         len--;
//         int ans = 0;
//         while(head){
//             ans = ans + pow(2,len)*(head->val);
//             if(head->next)
//             head = head -> next;
//             else
//             break;

//             len--;

//         }

//         return ans;
//     }

// Move Last Element to first of LL
// ListNode *moveToFront(ListNode *head){
//         ListNode* last = head;
//         ListNode* first = head;
//         ListNode* lastSecond = head;
//         while(head != NULL){
//             if(head->next != NULL){
//                 lastSecond = head;
//                 last = head->next;
//                 head = head->next;
//             }
//             else
//             break;
//         }
        
//         last -> next = first;
//         lastSecond -> next  = NULL;
     
        
//         return last;
//     }


// Dummy Node Concept nal v krta
// ListNode *moveToFront(ListNode *head){
       
//         ListNode *temp=head;
//         if(head==NULL||head->next==NULL){
//             return head;
//         }
        
//        ListNode *dummy =new ListNode(-1);
//        while(temp){
//            if(temp->next->next==NULL){
//                dummy=temp->next; // Dummy nu required node te laata
//                temp->next=NULL;
//                break;
//            }
//            temp=temp->next;
//        }
//        dummy->next=head;
//        return dummy;
// }



// Remove nodes which have greater value on right*********
// Khud kitta c saara
// ListNode* reverse1(ListNode* &head){
//     if(head==NULL||head->next == NULL){
//         return head;
//     }
//     ListNode* chotahead = reverse1(head->next);
//     head -> next -> next = head;
//     head -> next = NULL;
//     return chotahead;
// }
//     ListNode* removeNodes(ListNode* head) {
//         ListNode* headRev = reverse1(head);
//         ListNode* head1 = headRev;
//         ListNode* maxNode = headRev;
//         ListNode* forward = headRev->next;
//         ListNode* prev = NULL;
//         while(headRev && headRev->next){
//             if(headRev->next->val < maxNode->val){
//                 if(forward->next == NULL)
//                 break;
//                 headRev->next = forward->next;
//                 prev = forward;
//                 forward = headRev->next;
//                 prev->next = NULL;

//             }

//             else{
//                 maxNode = forward;
//                 if(headRev->next)
//                 headRev = headRev->next;
//                 else
//                 break;
//                 if(forward->next)
//                 forward = forward->next;
//                 else
//                 break;
//             }
         
//      }
//      if(headRev->val > forward->val)
//      headRev->next = NULL;

//      return reverse1(head1);
     
//     }


// Sirra Recursive Solution
// class Solution {
// public:
//     int mx = 0;
//     ListNode* solve(ListNode *p){
//         // Step1-> Base Case
//         if(!p){
//             return NULL;
//         }
//         p->next = solve(p->next);

// #        // Step2-> Update max value
//         mx = max(mx,p->val);

// #        // Step3-> Remove node if its value is smaller than max
//         if(p->val<mx){
//             ListNode *temp = p->next;
//             p->next = NULL;
//             return temp;
//         }
//         return p;
//     }

//     ListNode* removeNodes(ListNode* head) {
//         ListNode *p = head;
//         head = solve(p);
//         return head;
//     }
// };


// Multiply Linked Lists ******************
// # define MOD 1000000007
// long long solve(Node* l1){
//     long long a = 0;
    
//     while(l1){
//         a = (a*10)%MOD + l1->data;
//         l1=l1->next;
        
//     }
    
//     return a%MOD;
// }
// long long  multiplyTwoLists (Node* l1, Node* l2)
// {
//    long long m1 = solve(l1)%MOD;
//    long long m2 = solve(l2)%MOD;
   
//    return ((m1%MOD)*(m2%MOD))%MOD;
   
// }


// Remove Duplicates II in Leetcode ***********
// Did it using Dummy Node Concept

// ListNode* deleteDuplicates(ListNode* head) {
//         ListNode* curr = head;
//         unordered_map<int,int>mapp;
//         while(curr){
//             mapp[curr->val]++;
//             curr = curr->next;
//         }
//     ListNode* ans = new ListNode(-1);
//     ListNode* dummy = ans;

//     while(head){
//         if(mapp[head->val] == 1){
//         dummy->next = head;
//         dummy = head;
//         }
        
//         head = head->next;
//     }
//     dummy->next = NULL;   
//     ans = ans->next;
//     return ans; 
// }

// Without using map v krta
// ListNode* deleteDuplicates(ListNode* head) {
// ListNode *dummy=new ListNode(0,head);
//        ListNode *prev=dummy;
        
//         while(head!=NULL){
       
//         if(head->next!=NULL && head->val==head->next->val){
                
// while(head->next!=NULL && head->val==head->next->val)head=head->next;
                     
                   
//                         prev->next=head->next;
//                 }
                
//                 else prev=prev->next;
                       
               
//                 head=head->next;
//         }
        
//         return dummy->next;
            
//     }

// Segragate Odd and Even Nodes Using Indexes ****************
// ListNode* oddEvenList(ListNode* head) {
//         int index = 1;
//         ListNode* odd = new ListNode(-1);
//         ListNode* oddHead = odd;
//         ListNode* even = new ListNode(-1);
//         ListNode* evenHead = even;
//         ListNode* curr = head;
//         ListNode* link1 = NULL;
//         while(curr){
//             if(index & 1){
//             odd->next = curr;
//             odd = curr;
//             curr=curr->next;
//             index++;
//             }
//         else{
//             even->next = curr;
//             even = curr;
//             curr=curr->next;
//             index++;
//             }
//         }
//         odd -> next = evenHead->next;
//         even -> next = NULL;
        
//         return oddHead->next;

//     }


// One More Good Solution of the above Problem
// ListNode* oddEvenList(ListNode* head) {
//         if (head == nullptr || head->next == nullptr)
//             return head;
//         ListNode* odd = head;
//         ListNode* even = head->next;
//         ListNode* evenHead = even;
//         while (even != nullptr && even->next != nullptr) {
//             odd->next = even->next;
//             odd = odd->next;
//             even->next = odd->next;
//             even = even->next;
//         }
//         odd->next = evenHead;
//         return head;
//     }


// Remove Nth Node from List *******************
// ListNode* reverse(ListNode* head){
//     if(!head || !(head->next))
//     return head;

//     ListNode* ChotaHead = reverse(head->next);
//     head->next->next = head;
//     head->next = NULL;

//     return ChotaHead;
// }
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* prev = NULL;
//         ListNode* fuck = head;
//         if(n==1 && head->next == NULL)
//         return NULL;
//         if(n == 1){ // Last Node delete da code alag ton likhna peya
//             while(fuck){
//                 if(fuck->next){
//                     prev = fuck;
//                     fuck = fuck->next;
//                 }
//                 else{
//                     if(prev->next)
//                     prev->next = NULL;
//                     break;
//                 }
//             }
//             return head;
//         }
        
//         ListNode* rev = reverse(head);
//         ListNode* del = rev;
//         while(n>1){
//             del = del->next;// Isse Jiss node ko delete krna hai uspe pahunch gye and then del krdiya
//             n--;
//         }
//         ListNode* curr = rev;
//         while(curr){
//             if(curr->next == del){
//                 curr->next = del->next;
//                 del->next = NULL;
//                 break;
//             }
//             else{
//                 curr = curr->next;
//             }
//         }

//         ListNode* ans = reverse(rev);
        
//         return ans;
//     } // Khud Kitta c and dimaag kharab c thoda iss liye time lgg gya

// Length kadke v ho skda
//  int length_ll(ListNode* head)
//     {
//         int count_node=0;
//         ListNode *ptr=head;
//         while(ptr!=NULL)
//         {
//             count_node++;
//             ptr=ptr->next;
//         }
//         return count_node;
//     }
//     ListNode* removeNthFromEnd(ListNode* head, int n) 
//     {
//         int len=length_ll(head);
//         if(len==1)
//             return NULL;
//         if(len==n)
//             return head->next;
//         int node_number=0;
//         ListNode *ptr=head;
//         while( node_number < len-n-1 )
//         {
//             ptr=ptr->next;
//             node_number++;
//         }
//         ptr->next=ptr->next->next;
//         return head;
//     }


// Delete the Middle Node the Linked list ******************
// Eh v khud he krea
// int length(ListNode* head){
//     int len = 0;
//     while(head){
//         len++;
//         head = head->next;
//     }
//     return len;
// }
//     ListNode* deleteMiddle(ListNode* head) {
//         int len = length(head);
//         if(len == 1)
//         return NULL;
//         len = len/2+1;
//         ListNode* del = head;
//         while(len>1){
//             // Isse Jiss node ko delete krna hai uspe pahunch gye and then del krdiya, Iss naal saukha ho jnda
//             del = del->next;
//             len--;
//         }

//         ListNode* ans = head;
//         while(ans){
//             if(ans->next == del){
//               ans -> next = del -> next;
//               break;
//             }
//             else{
//                 ans = ans->next;
//             }
//         }
//         return head;
//     }

// Two Pointers nal aavein hoega
// ListNode* deleteMiddle(ListNode* head) {
//         if(head==nullptr||head->next==nullptr) return nullptr;
//         ListNode* slow = head;
//         ListNode* fast = head->next->next;
//         while(fast!=nullptr&&fast->next!=nullptr){
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         slow->next = slow->next->next;
//         return head;
//     }

