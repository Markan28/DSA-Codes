#include <iostream>
using namespace std;
// int main(){
//     // cout<<"Fuck Life"<<endl;
//     // int num = 5;
//     // int *ptrnull = 0;//Null Pointer
//     // int *ptr = &num;
//     // cout<<num<<endl;
//     // cout<<*ptr<<endl;
//     // cout<<ptr<<endl;
    
//     //Array in Pointers

//     // int arr[10]={1,3,4,5,7,23,78,65,35,12};
//     // cout<<arr<<endl;//Array k 1st element yaani 0th Index wale ka address print hojaega
//     // cout<<&arr[0]<<endl;//Upar wale jitna he answer aayega
//     // cout<<"Value of 1st element : "<<*arr<<endl;
//     // cout<<"Value of 1st element + 1 : "<<(*arr)+1<<endl;
//     // cout<<"Value of 2nd element : "<<*(arr+1)<<endl;
//     // cout<<"Value of 3rd element : "<<arr[2]<<endl;

//     // //arr[i]=*(arr+i)    and     i[arr]=*(i+arr)

//     // int i = 3;
//     // cout<<"New way to get 4th element: "<<i[arr]<<endl;

//     // //Size of array and a pointer;
//     // int *ptr = &arr[0];
//     // cout<<"Size of array : "<<sizeof(arr)<<endl;
//     // cout<<"Size of Pointer : "<<sizeof(ptr)<<endl;//Mostly pe 8 aata hai, We need to confirm if 4 is correct or not


//     int a[20]={1,2,3,5};
//     // cout<<&a[0]<<endl;//Address
//     // cout<<&a<<endl;//Address
//     // cout<<a<<endl;//Address
//     // cout<<*a<<endl;//Value
//     // cout<<a[0]<<endl;//Value

//     // int *p = &a[0];
//     // cout<<p<<endl;//Address of a[0]
//     // cout<<*p<<endl;//Value
//     // cout<<&p<<endl;//Address of p

//     /*Contents of Symbol Table can't be changed, Basically address ko change nahi kr skte*/
//     // int *ptr = &a[0];//ptr mein address chla gya
//     // a=a+1;//Error aayega, ptr se krna padega
//     // cout<<ptr<<endl;
//     // ptr=ptr+1;// NO error
//     // cout<<ptr;


//     //Pointers in char arrays
//     int arr[5]={1,2,3,4,5};
//     char ch[6] = "abcde";//End \0 se hota hai
//     cout<<arr<<endl;//Address of arr[0] print hoga
//     cout<<ch<<endl;//abcde print hoga 

//     /*Iska matlab char arrays k liye and int arrays k liye, Implementation of cout is different*/
//     char *c = &ch[0];
//     cout<<c<<endl;//Yahan pe string print krdega pura, Address nahi aayega bcz Implementation of cout is different
//     /*Char k case mein pointer tab tak print krta rehta hai jab tak usko null char nahi milta, Jaise niche wale case 
//     mein sirf ek char he diya therefore kuch bhi baadmein print hoga bcz Pointer null char ko dhoondh raha tha*/
//      char ch1 = 'z';
//     char*c1 = &ch1;
//     cout<<ch1<<endl;//z k baad bhi kuch bakwas print hoga

//     char *c2="abcde";//Yeh wala kaam nahi krna, pata he nahi kahan nikal jaoge, har ch[] wale tareeke se kro

// }

// void print(int *ptr){
//     cout<<*ptr<<endl;
// }
// void update(int *p){
//     // p = p + 1;
//     // cout<<"After Update p is : "<<p<<endl;

//     *p = *p + 1;
// }

// int getsum(int arr[], int n){//int arr[] ki jagah *arr bhi likh skte hai bcz function mein kabhi array pass nahi hota hai
// // woh as a pointer pass hota hai


//     cout<<sizeof(arr)<<endl;//Size of pointer 4 aayega, Size of array 20 nahi aayega which tells us ki as a pointer pass hau hai woh
//     int sum = 0;
//     for(int i = 0; i<n;i++){
//         sum=sum+arr[i];
//     }
//     return sum;
// }
// int main(){
//     //Pointers in Functions
//     int i = 10;
//     int *p = &i;
//     // print(p);//&p nahi pauna iss vich
//     // cout<<"Before Update p is : "<<p<<endl;
//     // update(p);
//     // cout<<"After Update p is : "<<p<<endl;
//     //Before and after update same he value print hogi
//     /*Because jo value copy hui hai ptr mein woh update hui hai na, p ki value toh wohi hai */

//     // cout<<"Before Update p is : "<<p<<endl;
//     // update(p);
//     // //Ab update hogi bcz function wala cout chalra hai
    
//     cout<<"Before Update p is : "<<*p<<endl;
//     update(p);
//     cout<<"After Update p is : "<<*p<<endl;
//     //Value toh update hojaegi bcz star k case mein woh waapis mean mein aaya dekhne ki uss address pe value kya padi hai
//     //Jabki address k case mein usko zaroorat he nahi thi main mein aane ki, Tabhi value k case mein update hora hai.

//     int arr[5] = {1,2,3,4,5};
//     cout<<"Sum is : "<<getsum(arr+2,3)<<endl;
//     /*Array ko as a pointer bhejane ka yeh fayda hai ki hum array ka kuch part bhi bhej skte hain jaise arr+2 krke, size 3 krdiya
//     usse basically woh 0th and 1st index wale part ko pass he nahi krega and last three elements ka sum miljaega humein
//     i.e. Array k specific part ko as a parameter banake pass kr skte hain*/


// }



//Double Pointer
// int main(){
//     //Basically pointer to pointer hai
    // int i = 5;
    // int *ptr = &i;
    // int **ptr2 = &ptr;//iske andar jo value hogi woh ptr ka address hoga
//     cout<<"Printing ptr "<<ptr<<endl;
//     cout<<"Printing address of ptr "<<&ptr<<endl;
    
//     cout<<*ptr2<<endl;//ptr ke andar jo value hai which i s address of i
    
//     cout<<i<<endl;
//     cout<<*ptr<<endl;
//     cout<<**ptr2<<endl;
//     //Teeno mein jo i ki value hai woh print hogi

//     cout<<&i<<endl;
//     cout<<ptr<<endl;
//     cout<<*ptr2<<endl;
//     //Teeno mein i ka address print hoga


//     }


//Double pointers in functions

// void update(int **p){
//     // p = p + 1;//1st Case

//     //*p = *p + 1;//2nd Case

//     **p = **p + 1;//3rd Case
// }
// int main(){
//      int i = 5;
//     int *ptr = &i;
//     int **ptr2 = &ptr;
//     cout<<"Before : "<<i<<endl;
//     cout<<"Before : "<<ptr<<endl;
//     cout<<"Before : "<<ptr2<<endl;

//     update(ptr2);

//     cout<<"After : "<<i<<endl;
//     cout<<"After : "<<ptr<<endl;
//     cout<<"After : "<<ptr2<<endl;

//     //In 1st case there won't be any change
//     //In 2nd case ptr's value will change bcz jo value hai uss address pe usko +1 krdo thus jo *ptr k andar value thi woh change hogyi
//     //In 3rd case value of i will change bcz value of **ptr2 changes which is the value of i
// }


//Whole theory of Dynamic memory allocation is on the notebook
// int sumArray(int *arr, int n){
//     int sum = 0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cout<<"Enter the number of elements in array : "<<endl;
//     cin>>n;
//     int *arr = new int[n];//Dynamically allocating memory, Whole damn theory is on the notebook
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Sum of elements of the array is : "<<sumArray(arr,n);
// }


//Creating a 2-D array using dynamic memory allocation, Whole theory is on the notebook
// int main(){
//     int row,col;
//     cout<<"Enter the number of rows and columns respectively : ";
//     cin>>row>>col;
//     //Initialisng a 2-D array
//     int** arr = new int*[row];
//     for(int i=0;i<row;i++){
//     arr[i] = new int [col];
//     }


//     //Taking Input
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//         cin>>arr[i][j];

//         }
//     }
//     cout<<endl;

//     //Print the 2-D array
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//         cout<<arr[i][j]<<" ";
//          }cout<<endl;
//     }

//Releasing Memory
// for(int i=0;i<row;i++){
//     delete []arr[i];//Jo notebook pe right wala portion tha usko delete krega yeh
// }
// delete []arr;//Notebook k left wale portion ko delete krega

// }