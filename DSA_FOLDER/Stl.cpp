#include <iostream>
#include <array>//Required for using Stl arry
#include <vector>//Adding Vector library
#include <deque>//Adding deque library
#include <list>//Adding Link Library
#include <stack>//Adding stack Library
#include <queue>//Adding queue Library
#include <set>//Adding set Library
#include <map>//Adding map Library
#include <algorithm>//Adding algorithm Library
using namespace std;
// int main(){
//     //Understanding STL array
//     int basic[3]={1,2,3};//Normal array

//     array<int,4>a={1,2,3,4};//Declaration of Stl array
//     //To get its size 
//     int size=a.size();
//     for(int i=0;i<4;i++){
//         cout<<a[i]<<" ";
//     }
//     //Using certain things in an stl array
    // cout<<endl<<"Element at 2nd index : "<<a.at(2)<<endl;//Using at to access the element
//      cout<<"Empty or not  : "<<a.empty()<<endl;//Empty bool ki tarah respong krega i.e. agar empty hai to 1 otherwise 0
//      cout<<"First Element : "<<a.front()<<endl;//Front gives the first element of the array
//      cout<<"Last Element : "<<a.back()<<endl;//back gives the last element of the array
// //These were the basics about an STL array
// }

// int main(){
//     //Understanding vector
//     vector<int>v;
//     cout<<"Capacity is --> "<<v.capacity()<<endl;//Capacity batati hai ki kitne element rakh skta aur filhaal 0 aayega jab vector<int> v hai
//     v.push_back(1);//It means the 1st element of the vector is 1
//     cout<<"Capacity is --> "<<v.capacity()<<endl;
//     v.push_back(2);
//     cout<<"Capacity is --> "<<v.capacity()<<endl;
//     v.push_back(10);//It means the 1st element of the vector is 10
//     cout<<"Capacity is --> "<<v.capacity()<<endl;
//     cout<<"Size is --> "<<v.size()<<endl;
//     /*We will see that the Capacity will be 4 and size will be 3, pushback was 3 i.e. size should be 3 which is fine but
//     Capacity is 4 bcz once pushback is 2 Capacity is 2, when pushback is changed to 3, the capacity gets doubled and the
//     previous pushback is neglected so Capacity is 4 and the numbers inside round brackets don't matter, Its just when pushback is 
//     used twice the capacity gets doubled and size tells us about how many numbers can be stored */

//     //Ismein array ki tarah front back and at bhi use kr skte hain
//     cout<<v.front()<<" "<<v.at(2)<<" "<<v.back()<<endl;

//     /*Ismein popback bhi krskte hain i.e. jab humne last element 10 pushback kra tha popback krne k baad 10 ko fek
//     diya jayega i.e. 1 and 2 he reh jayenge*/
//     cout<<"Before pop"<<endl;
//     //Print krvane k liye vector ko iss way mein use krte hain for loop
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;
//     v.pop_back();
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;
//     cout<<"Size before Clearing : "<<v.size()<<endl;
//     cout<<"Capacity before Clearing : "<<v.capacity()<<endl;
//     v.clear();
//     cout<<"Size after Clearing : "<<v.size()<<endl;
//     cout<<"Capacity after Clearing : "<<v.capacity()<<endl;
//     /*Clear krne k baad size 0 hojaega but Capacity utni he rahegi jitni ek baar pahunch gyi thi*/
    
//     //Vector ko initialise krne ka naya tareeka, when you know the size already
//     vector<int>a(5,1);//Yahan pe 5 size ka ek vector ban gya hai and 1 likhne se woh har element ko 1 se initialise krdega
//     //i.e. isko print krvane pe 5 times 1 print hojaega
//     for(int j:a){
//         cout<<j<<" ";//Yahan pe cout j krna hai 
//     }cout<<endl;

//     //Agar vector nu copy krna hai tn
//     vector<int>b(a);
//     for(int k:a){
//         cout<<k<<" ";//b vector mein a copy hogya
//     }cout<<endl;
// }

// int main(){
//     /*Understanding deque- Iska main benefit yeh hai ki iske both front ya phir back se insertion ya phir deletion kr skte hain*/
//     deque<int>d;
//     d.push_front(2);//First element 2 hai 
//     d.push_back(1);//Last element 1 hai
//     for(int i:d){
//         cout<<i<<" ";
//     }cout<<endl;//2 and 1 print hojaega yaha pe 

//     //for deletion
//     // d.pop_front();//2 udd jaega, agar popback krdete toh 1 udd jata
//     // for(int i:d){
//     //     cout<<i<<" ";
//     // }cout<<endl; 
//     //at se access krskte hain
//     cout<<d.at(0)<<endl;//Ismein 1 aayega bcz 2 uda diya(baadmein comment krdiya) humne therefore 0th index pe 1 hai
//     cout<<"Size before erasing : "<<d.size()<<endl;
//     //Erase krte time bracket mein ek limit deni padti hai humne d.begin se shuru kra and +1 tak ka matlab hai ki
//     // pehla element delete krdo
//     d.erase(d.begin(),d.begin()+1);
//     cout<<"Size after erasing : "<<d.size()<<endl;
//     //Size basically means ki kitne element deque k andar pade hue hain 

// }
// int main(){
    //Understanding list
//     list<int>l;
//     l.push_back(2);
//     l.push_front(1);
//     for(int i:l){
//         cout<<i<<" ";
//     }cout<<endl;
//     /*lists doubly linked list se related hoti hai, ismein direct access of element nahi ho skta. Element tak traverse krna padega 
//     phir usko access kr skte hain, at vagera se nahi ho skta. begin end empty erase size popback vagera sab use kr skta hain*/
//     list<int>n(5,100);//5 values ki list bangyi with value of each element be 100
//     for(int j:n){
//         cout<<j<<" ";//5 times 100 print hojaega
//     }cout<<endl;
// }


// int main(){
//     //Understanding stack- It basicallly means last in first out
//     stack<string>s;
//     s.push("Akshit");
//     s.push("bagga");
//     s.push("Disha");

//     cout<<"Top element : "<<s.top()<<endl;
//     s.pop();
//     cout<<"Top Element : "<<s.top()<<endl;
//     //Size and empty vagera ohdan he kad skde aan
// }

// int main(){
//     //Understanding queue- It basically means first in first out, jo pehle gya usko pehle award milega
//     queue<string>q;
//     q.push("Akshit");
//     q.push("bagga");
//     q.push("Ansh");
//     cout<<"Front Element : "<<q.front()<<endl;
//     q.pop();
//     cout<<"Front Element : "<<q.front()<<endl;//Akshit udd gya
// }

// int main(){
//     //Understanding Priority queue, Max and Min heap se relate krna, i.e jab element niklega max heap mein, sabse bada pehle then
//     //decreasing order mein and min heap mein sabse chota pehle and then increasing order mein
    
//     priority_queue<int>maxi; //Syntax for max heap
//     maxi.push(7);
//     maxi.push(4);
//     maxi.push(13);
//     maxi.push(46);
//     maxi.push(3);
//     int n=maxi.size();
//     for(int i=0;i<n;i++){
//         cout<<maxi.top()<<" ";//Sabse bada element print hoga
//         maxi.pop();//Then sabse bada wala element delete hojaega
//     }cout<<endl;
//     //Yahan par push khaali ho chuka hai
//     cout<<"Empty-->1  Not Empty-->0"<<endl<<maxi.empty()<<endl;
//     //Min heap ka thoda ajeeb syntax hai
//     priority_queue< int,vector<int>,greater<int> >mini;//syntax of min heap
//     mini.push(11);
//     mini.push(24);
//     mini.push(35);
//     mini.push(21);
//     mini.push(84);
//     mini.push(1);
//     //Ismein sabse chota pehle print hoga and then ascending order
//     int m=mini.size();
//     for(int j=0;j<m;j++){
//         cout<<mini.top()<<" ";
//         mini.pop();
//     }cout<<endl;
//     //Yeh bhi end mein khaali hogya hoga
// }


//  int main(){
//     //Understanding set
//     set<int>s;
//     s.insert(4);
//     s.insert(4);
//     s.insert(4);//Koi element ko jitne marzi number of times baar put krdo , woh gina ek baar he jayega.
//     s.insert(7);
//     s.insert(41);
//     s.insert(41);
//     s.insert(17);
//     s.insert(12);
//     s.insert(23);
//     for(auto i:s){
//         cout<<i<<" ";
//     }cout<<endl;//Set mein sorted way mein print hota hai sab
//     set<int>::iterator it=s.begin();
//     it++;//it ki value 2 hui and isne 2nd element eraase krdiya
//     s.erase(it);

//     for(auto i:s){
//         cout<<i<<" ";
//     }cout<<endl;
     
//      cout<<s.count(4)<<endl;//Count basically batata hai ki yeh number present hai ki nahi

//      set<int>::iterator itr=s.find(17);//Yeh 17 ka iterator return krdega
//      for(auto it=itr;it!=s.end();it++){
//         cout<<*it<<" ";//it=itr ki wajah se ab yeh 17 se print krvana shuru krdega and *it se print krvana hoga
//      }cout<<endl;
//      //Iterator matlab humein uska reference milgya

//      //Insert  Find   Erase  Count, inn sabhi ki time complexity O(log n) hai
//      //Size    Begin  End    Empty, yeh sab ki complexity O(1) hai.

//  }

// int main(){
//     Understanding map    
//     map<int,string>m;
//     m[11]="Akshit";
//     m[23]="Kumar";
//     m[34]="Markan";
//     m.insert({5,"Fuck"});
//     cout<<"Before erase : "<<endl;
//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }cout<<endl;//Sab kuch Sorted way mein print hoga
//     cout<<"Finding 23 --> "<<m.count(23)<<endl;
//     m.erase(23);//Sirf key deke erase hojate hai
//     cout<<"After Erase : "<<endl;

//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }cout<<endl;
//     //13 udd gya hoga
//     /*Insert  Erase find and count inn sabki Complexity map k case mein
//    O(log n) hoti hai 
//    Unordered map mei O(1) hoti hai*/
//  auto it=m.find(34);
//  for(auto i=it;i!=m.end();i++){
//     cout<<(*i).first<<endl;
//     //Agar 34 k aage kuch hota toh woh bhi ho jata print
//  }
// }

// int main(){
//     //Using algorithms and understanding them
//     vector<int>v;
//     //Binary search krenge using algorithms so, Sorted way mein pushback krdiya

//     v.push_back(2);
//     v.push_back(7);
//     v.push_back(13);
//     v.push_back(25);
//     v.push_back(29);
//     cout<<"Finding 25 --> "<<binary_search(v.begin(),v.end(),25)<<endl;
//     //Yeh 1 or 0 ki form mein batadega ki 25 hai ya nahi
//     //To get its lower bound
//     cout<<"Lower bound --> "<<lower_bound(v.begin(),v.end(),25)-v.begin()<<endl;
//     //lower_bound(v.begin(),v.end(),25), Yeh wali cheez iterator return krti hai
//     cout<<"Upper bound --> "<<upper_bound(v.begin(),v.end(),25)-v.begin()<<endl;
//     int a=5,b=7;
//     cout<<"Max is -->"<<max(a,b)<<endl;
//     cout<<"Min is -->"<<min(a,b)<<endl;
//     swap(a,b);

//     cout<<"After Swapping a = "<<a<<" b = "<<b<<endl;
//     string str="abcd";
//     reverse(str.begin(),str.end());
//     cout<<"Reversed String is : "<<str<<endl;

//     //Rotating vector
//     rotate(v.begin(),v.begin()+1,v.end());
//     //Ismein v.begin(),v.begin()+1 iska matlab hai ki kahan se kahan tak, Tabhi humne bola ki ek kadam aaage,
//     //Tabhi hmara 2 aage nikal jayega
//     cout<<"After Rotation : "<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }
//     /*Kuch cheezein jo baar baar krni padti hain, Yeh saari cheezein sidhi he hojaati hain*/

// }

//That's It with the STL, Keep Revising it mothherfucker


