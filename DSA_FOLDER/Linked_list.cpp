#include <iostream>
using namespace std;

// class Node{
//     //Implementation of node krdi hai aise
//   public:
//   int data;
//   Node* next;

//   //Constructor
//   Node(int data){
//     this->data = data;
//     this->next = NULL;
//   }

//     //Destructor
//     ~Node(){
//      int value = this -> data;//Value store kri hai current k data ki
//       //memory free
//       if(this->next != NULL){
//         delete next;
//         this -> next == NULL;
//       }
//       cout<<"Memory is free for node with data "<<value<<endl;
//     }
  
// };

// void insertAtHead(Node* &head,int d){//Iske andar humne head bheja taaki humein pata rahe ki node ko head ke aage insert krna hai
// //And Reference isliye bheja taaki jo existing list hai usi mein changes ho jayein, copy wagera naa bne koi bhi 
// //New node creation below, temp is the new node
//     Node*temp = new Node(d);
//     temp -> next = head;//temp mein jo address null ko point kr raha tha usko head ko point krvadiya
//     head = temp;//head ki position temp wale node pe rakhdi
// }
// //head apni linked list k sabse aage wale data ko point krta hai, tabhi hum sabhi jagah head bhejte hain taaki
// //Linked List ko handle krna easy hojaye

// //insertAtHead se head se aage insert krdiya ab hum tail ka use krke piche se daalenge, data bc
// void insertAtTail(Node* &tail,int d){
//     Node*temp = new Node(d);
//     tail -> next = temp;//Jo tail ka address null pada tha usmein temp ka address daal diya
//     tail = temp;//tail ko temp k equal rakhdiya
// }

// //Head aur tail se daalne k baad ab kisi bhi specific position se daalna hai toh 
// void insertAtPosition(Node* &head,Node* &tail,int position,int d){
//     if(position==1){
//       insertAtHead(head,d);
//       return;
//      }
   
//      Node* temp = head;//temp will act as the previous node
//      int count = 1;
//      while(count<position-1){
//       temp = temp->next;
//       count++;
//      }
//We need temp, isliye if condition ko neeche likha hai
//     if(temp -> next == NULL){
//       insertAtTail(tail,d);
//       return;
//      }

//      //Creating a node for d
//      Node* nodeToInsert = new Node(d);
//      nodeToInsert->next = temp ->next;
//      temp -> next = nodeToInsert;

// }
// /*Insert at a position ki kahani samajhte hain, function ko shuru se shuru krenge
// Suppose pehle humne starting wali nose ko temp maan liya, ab humne jis position pe node add krni hai, we want to get to the previous node
// than that, taaki hum previous node k next ko NodetoInsert pe point krva sakein. Tabhi humne while loop lagai aur jahan insert krna hai 
// uske pehli wali node par pahunch gye. Uske baad humne NodetoInsert banai, phir humne iss node k next ko uske agli node pe point krvadiya
// kaisekrvaya??? bcz jo temp wali node thi, uska next already point kr tha uss node ko, therefore humne NodeToInsert wale k next ko temp k
// next k equal rakhdiya, ab NodetoInsert ka next uski agli node pe point kr rha hai and now jo temp wali node ka next tha usko NodeToInsert 
// pe point krvadiya and humari node uss position pe add hogayi

// Ab agar humari positon is 1 toh aage add krne k liye humne InsertAtHead ko call krdiya and
// Agar Humari Positon last pe hai, i.e. agar jo nodeToInsert hai uska next filhaal NULL ko point kr rha tha and after insert bhi
// woh NULL ko he point kre, i.e. hum end pe daal rhe hain and us time tail ki position change krni is necessary and therefore humne 
// InsertAtTail call krdiya
// */


// //Boht Insertion krdi nodes ki, Ab node delete krenge kisi bhi position se
// void deleteNode(Node* &head,Node* &tail,int position){
 

//   if(position == 1){
//   Node* temp = head;
//   head = head->next;
//   temp->next = NULL;
//   delete temp;
//   }
//   else{
//        Node* previous = NULL;

//        Node*current = head;
//        int count = 1;
//        while(count<position){
       
//         previous = current;
        
//         current = current->next;
//         count++;
//        }
//       if(current -> next == NULL){
//       Node* temp = tail;
//       tail = previous;//Yahan issue hai kuch jiski wajah se last elememt delete krne mein kuch issue aara hai, Check it
//       temp->next = NULL;
//       delete temp;
//      }
//        previous -> next = current -> next;
//        current -> next = NULL;
//        delete current;
//   }
//}
// /*Delete krne ki bhi kahani samajhte hain, function k shuru se shuru krte hain
// Pehle toh teen tarah se delete kr skte hain, yaa toh starting, yaa toh kisi specific position se and finally end se bhi kr skte hain
// Position se start krte hain -->
// Toh kisi position k case mein suppose position was 3, Ab humne jisko delete krna hai usko current maan liya and uske pehle wale ko 
// previous maan liya. Humne previous ko NULL mana and current ko head mana...why????
// Bcz ek he loop se kaam hojaega...kaise??
// Jab humne current ko head krdiya ab hum while loop ki madad se wahan tak pahunch jayenge jis position ko humne delete krna hai i.e.
// count hai 1 toh current tha head then loop chali aur cureent hogya 2nd position pe and point krra hai third position pe and count++ hua 
// toh count = 3 ab current pahuncha 3rd position pe and point krra hai apne aage wale ko and Previous ko humne NULL k equal rakha tha
// starting mein and loop mein usko current k equal krdiya taaki jab current badhe toh previous uske pichle pe ho 
// Therefore position 3 k liye jab Current 3rd position pe hoke 4th ko point krra hai, uss time previous 2nd position pe hoke current ko
// point kr rha hai, After deletion
// previous current ki jagah current k next ko point krega, woh humne krvadiya and current ka next delete krna hai toh woh null point krvadiya
// taaki woh free hone se pehle exist he naa kre, usko NULL point krvake, destructor ka use krke delete krdiya.
// Ab scene aisa hai ki yeh logic kisi position yaa phir last element delete krenge tab bhi valid rahega.
// But Starting element k case mein calid nahi hoga bcz uske pass koi previous element he nahi hai.
// Therefore Starting ka different logic chalaya
// kuch bhi nahi kra bas temp ko head pe point krdiya then head ko aage move krdiya and temp ko delete krdiya.
//  */

// void print(Node* &head){
//    Node* temp = head;//Ek pointer banake head pe he point krvadiya
//    while(temp!=NULL){//Tab tak LL traverse krenge jab tak temp NULL tak na pahunche
//     cout<< temp -> data <<" ";//temp ko head pe point krvaya tha ab joh wahan pe data hoga usko print krvadenge
//     // and temp ko agli location pe bhejdenge
//     temp = temp->next;//temp ko agli location pe bhejdiya bas usko next pe point krke
// }
// cout<<endl;
// }
// int main(){
//     //cout<<"Lessssssgoooo Linked List Bitch";
//     //Implement  krke dekhenge and humein ek class bhi banani padegi
//     Node* node1 = new Node(10);//LL bnai hai bas ek node ki and that node is node1 ab uske aage changes krte rahenge
//     // cout<<node1->data<<endl;//Data 10 print hojaega
//     // cout<<node1->next<<endl;//Address 0 print hojaega

//     Node* head = node1;//Yeh head inbuilt nahi hai, node1 ke starting data ko point lrvane k liye head ko define kra hai yahan pe
//     Node* tail = node1;//Yeh jo node1 hai that's just a single node therefore tail or head ek he jagah pe hain, accordingly
//     //j changes krne the woh humne insert functions mein krdiye hain
    

//     insertAtHead(head,12);
//     print(head);

//     insertAtHead(head,15);
//     print(head);

//     insertAtTail(tail,20);
//     print(head);

//     insertAtPosition(head,tail,3,40);
//     print(head);

//     insertAtPosition(head,tail,1,1);
//     print(head);

//     insertAtPosition(head,tail,7,100);
//     print(head);


//     deleteNode(head,tail,5);
//     print(head);
//     cout<<"Head's data is "<<head->data<<endl;
//     cout<<"Tail's data is "<<tail->data<<endl;

// }

//Yahan tak Singly linked list ka insertion,deletion and all dekhliya, Let's move on to Doubly linked list

//kuch khass explanation nhai di bcz almost singly linked se he codes resonate krte hain, bas thoda sa dimaag lagaya hai
// class Node{
//   public:
//   int data;
//   Node* prev;
//   Node* next;

//   Node(int data){
//     this -> data = data;
//     this -> prev = NULL;
//     this -> next = NULL;
//   }

//   ~Node(){
//     int value = this->data;
//     if(next!=NULL){
//       delete next;
//       next = NULL;
//     }
//     cout<<"Memory free for data with value --> "<<value<<endl;
//   }
// };


// void insertAtHead(Node* &head, int d){
//   Node* temp = new Node(d);
//   temp -> next = head;
//   head -> prev = temp;
//   head = temp;
  
// }


// void insertAtTail(Node* &tail,int d){
//     Node* temp = new Node(d);
//     temp -> prev = tail;
//     tail -> next = temp;
//     tail = temp;

// }

// void insertAtPosition(Node* &head,Node* &tail,int position,int d,int l){
//   if(position == 1){
//     insertAtHead(head,d);
//     return;
//   }
//   Node* prevNode = head;
//   int count = 1;

//   while(count<position-1){
//    prevNode = prevNode -> next;
//     count++; 
//   }
// //We need prevNode, isliye if condition ko neeche likha hai
//   if(prevNode->next == NULL){
//     //Iss condiiton ki jagah prevnode == length lagaya tha, but usse tail move nahi ho rhi pata nahi kyun, so fuck it.
//     insertAtTail(tail,d);
//     return;
//   }
//   Node* nodetoInsert = new Node(d);
//   nodetoInsert -> next = prevNode -> next;
//   nodetoInsert -> prev = prevNode;
//   prevNode -> next = nodetoInsert;
//   prevNode -> next -> prev = nodetoInsert;
// }

// void deleteNode(Node* &head,Node* &tail,int position){
 

//   if(position == 1){
//   Node* temp = head;
//   temp -> next -> prev = NULL;
//   head = temp->next;
//   temp->next = NULL;
//   delete temp;
//   }
//   else{
//        Node* previous = NULL;
//        Node*current = head;
//        int count = 1;
//        while(count<position){
       
//         previous = current;
        
//         current = current->next;
//         count++;
//        }
//       if(current -> next == NULL){
//       Node* temp = tail;
//       tail = previous;//Yahan issue hai kuch jiski wajah se last elememt delete krne mein kuch issue aara hai, Check it
//       temp->next = NULL;
//       delete temp;
//      }
//       current->prev = NULL;
//       previous-> next = current->next;
//       current->next = NULL;
//       delete current;

//   }

// }


// void print(Node* &head){
//   Node* temp = head;
//   while(temp != NULL){
//     cout<<temp -> data<<" ";
//     temp = temp -> next;
//   }
// cout<<endl;
// }


// int getlength(Node* &head){
//   int len = 0;
//      Node* temp = head;
//   while(temp != NULL){
//     len++;
//     temp = temp -> next;
//   }
//  return len;
// }


// int main(){
//   Node* node1 = new Node(10);
//   Node* head = node1;
//   Node* tail = node1;
//   /*Yeh toh hmaari head and tail humne ek node k equal rakhe hue hain,
//   what if Node* head and tail == NULL ho
//   i.e. starting mein kisi node k equal naa ho toh??
//   Bcz agar NULL hua toh jab hum insertatHead wale function mein jayenge toh node ka prev toh kuch hoga he nahi as
//   node1 ka prev toh hai but NULL ka prev toh hoga he nahi, Uss case mein humein
//   if condition deni padegi , dono functions(insert at head and tail) k andar.
//   i.e.
//   if(head==NULL){
//     Node* temp = new Node(d)//Bcz node thi he nahi humare pass, toh ek node banai
//     head = temp;//And uss node ko head k equal rakhdia
//   }
//   Same goes with tail, agar smjh naa aaye toh
//   Love Babbar lec #44, timestamp --> 1:20:00 se dekhlio*/
//   print(head);
//   int lengthOfNode = getlength(head);
//   cout<<"Length of node1 is --> "<<getlength(head)<<endl;;
//   insertAtHead(head,20);
//   print(head);
//   insertAtHead(head,47);
//   print(head);
//   insertAtTail(tail,33);
//   print(head);
//   insertAtTail(tail,98);
//   print(head);
//   insertAtPosition(head,tail,2,35,lengthOfNode);
//   print(head);
//   insertAtPosition(head,tail,1,55,lengthOfNode);
//   print(head);
//   insertAtPosition(head,tail,8,75,lengthOfNode);
//   print(head);
//   cout<<"Head is --> "<<head->data<<endl;
//   cout<<"tail is --> "<<tail->data<<endl;
//   deleteNode(head,tail,1);
//   print(head);
//   //Sab badia chalra, Bas deletion mein tail ko delete krne k baad, tail ki position sahi jagah pe nahi aari, woh theek krna hai bas
  
// }

//Circular linked list
/*Ismeiin hum head banate he nahi hain bcz agar humne last element access krna hai toh woh bhi hum tail se krdenge 
and agar 1st element krna ho toh tail->next krke krlenge, SO FUCKKK head in Circular linked list*/
// class Node{
//     //Implementation of node krdi hai aise
//   public:
//   int data;
//   Node* next;

//   //Constructor
//   Node(int data){
//     this->data = data;
//     this->next = NULL;
//   }
//       //Destructor
//     ~Node(){
//      int value = this -> data;//Value store kri hai current k data ki
//       //memory free
//       if(this->next != NULL){
//         delete next;
//         this -> next == NULL;
//       }
//       cout<<"Memory is free for node with data "<<value<<endl;
//     }
  
// };
// /*Ab ismein insert krvane k kaafi tareeke hain but hum kya krenge, ek data lenge phir
// usko search krenge linked list mein , Usko search krne k baad uske agli wali node mein insert krdenge*/

// void insertNode(Node* &tail,int element,int d){
//   //Element k aage insert krdena hai, Assuming that element exists in the LL
//   /*Pehla case hai ki linked list empty thi i.e. jab hum insert kra toh humne ek new node bnai and uske andar data daal diya
//   And uss ndoe k next ko ussi node k upar point krvadiya and woh circle bn gya with only single node*/
//  if(tail==NULL){
//     Node* newNode = new Node(d);
//     tail = newNode;
//     newNode -> next = newNode;
//  }
//  else{
//   Node* current = tail;
//   while(current -> data != element){
//     current = current -> next;
//   }
//   //Upar wali loop ka use krke hum element wali node pe pahunch gye hain
//   Node* temp = new Node(d);
//   temp -> next = current -> next;
//   current -> next = temp;
// }
// }

// //Deletion, Aap ek element do hum uski node delete krdenge
// void deleteNode(Node* &tail,int value){
//  if(tail==NULL){
//   cout<<"Kuch hai he nahi list mein, Bc kya delete krun";
//   return;
//  }

//  //Assuming value exists in the LL
//  Node* prev = tail;
//  Node* curr = prev -> next;
//  while(curr->data != value){
//       prev = curr;
//       curr = curr->next;
//  }
//  prev->next = curr->next;
//  //1 node wala case fass jayega bcz prev curr tail, sab ek he jagah pe aagye
//  //Par humein krna kya hai, simple bhasha mein likhdo
//  if(curr == prev){
//   tail = NULL;//Single node ko delete krne k liye null krdiya
//  }
//  //>=2 nodes case, belpw
//  if(tail == curr){
//   tail = prev;//Jo end wala tha usko tail k equal rakhdiya, Circular hai yoh koi issue nahi hai ki kis way mein print hora hai
//  }
//  curr->next = NULL;
//  delete curr;
// }

// void print(Node* &tail){
//   Node* temp = tail;//tail ka address save kra taaki loop ki condiiton mein kaam aajaye
//   if(tail==NULL){
//     cout<<"Khaali linked list hai";
//   }
//   do{
//     cout<<tail->data<<" ";
//     tail=tail->next;
//   }while(tail!= temp);
//   cout<<endl;

//   //Do while loop isliye use kri bcz normal while k case se woh single node ko print naa krva paata bcz 
//   //condition fail hojaati as tail = temp hota aur ek baar bhi print nahi hota
//   //But we know do while pehle execute hota hai uske baad condition check hoti hai thus uska use kra
// }

// int main(){
//   Node* tail = NULL;
//   insertNode(tail,5,3);//5 wali value doesn't matter bcz NULL wala case hai
//   print(tail);
//   insertNode(tail,3,5);
//    print(tail);
//   insertNode(tail,5,10);
//    print(tail);
//   insertNode(tail,10,33);
//    print(tail);
//   insertNode(tail,33,14);
//    print(tail);
//   insertNode(tail,10,59);
//    print(tail);
//   deleteNode(tail,3);
//   print(tail);

// }