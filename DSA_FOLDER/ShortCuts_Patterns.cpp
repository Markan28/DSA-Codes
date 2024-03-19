#include <iostream>
using namespace std;
// int main(){
//     cout<<"Lets begin DSA in C++"<<endl;
//     cout<<"Gonna fuck this shit"<<endl;
//     int n;
//     cin>>n;

//     // cout<<"Gonna fuck this shit"<<endl;
//     cout<<"Fuck what people say or think"<<endl;
// }
    
//Various commands we r gonna use for lifetime---->

//Ctrl+C Copy
//Ctrl+V Paste
//Ctrl + Alt + Up down arrow to get cursors at same point but in different line up or down
//Ctrl+D to copy the line in next line in which we are
// Press alt  and keep tapping wherever you want to add cursors
//Ctrl + Z To get back whatever was lost
//Ctrl + x for cutting
//Ctrl + shift + K to delete a line
//Ctrl + Enter to get in the new line from wherever you r standing
//Ctrl + alt + N to run Code
// Ctrl + M to Comment and Ctrl+shift+M to uncomment
// Alt + Up and down arrow to take a line up and down


  


// Generic way of writing a code is called pseudocode
//  Iska koi specific way nahi hota 
//  IDE- Intergrated Development Environment e.g- VS CODE

// int main(){
//     //To get the sum of n even integers.
//     int n,sum=0;
//     cout<<"Enter the value of n :"<<endl;
//     cin>>n;
//     if(n%2==0){
//         cout<<"n was even";
//         for(int i=2;i<=n;i=i+2){
//             sum=sum+i;
//         }
//     }
//     if(n%2==1){
//         cout<<"n was odd";
//         for(int i=2;i<n;i=i+2){
//             sum=sum+i;
//         }
//     }
//     cout<<"sum of even numbers is equal to : "<<sum<<endl;
//     return (0);
// }
// int main(){
//     int n;
//     cout<<"Enter number of rows :";
//     cin>>n;
//     int sum=0;
//     for(int row=1;row<=n;row++){
//         for(int col=1;col<=row;col++){
//             sum=row-col+1;//When numbers in a row are decreasing this is used bcz column ka number increase ho jata hai and sum is reduced.
//             cout<<sum<<" ";
            
//             }
//         cout<<endl;

//     }
// }
// int main(){
//     int n;
//     cout<<"Enter number of rows :";
//     cin>>n;
//     char ch='A';
//     for(int row=1;row<=n;row++){
//         for(int col=1;col<=n;col++){
//             cout<<ch<<" ";
            
//         }
//         cout<<endl;
//         ch++;
        
//     }

// }
// int main(){
//     int n;
//     cout<<"Enter number of rows :";
//     cin>>n;
//     char ch='A';

//     for(int row=1;row<=n;row++){
//         for(int col=1;col<=row;col++){
//            char p = ch+row+col-2;
//            cout<<p<<" ";
            
//         }
//         cout<<endl;
       
        
//     }

// }
// int main(){
//     int n;
//     cout<<"Enter number of rows :";
//     cin>>n;
//     int row,star,spc;
    

//     for(int row=1;row<=n;row++){
//         for(int spc=1;spc<=n-row;spc++){
//            cout<<"  ";
//              }
//              for(int star=1;star<=row;star++){
//                 cout<<" *";
//              }
//         cout<<endl;
       
        
//     }

// }
// int main(){
//     int n;
//     cout<<"Enter number of rows :";
//     cin>>n;
//     int row,star,spc,num2;
    

//     for(int row=1;row<=n;row++){
//         for(int spc=1;spc<=n-row;spc++){
//            cout<<" ";
//              }
//              for(int num1=1;num1<=row;num1++){
//                 cout<<num1;
//              }
//              for(num2=row-1;num2>=1;num2--){
//                 cout<<num2;
//              }
//         cout<<endl;
       
        
//     }

// }

// int main(){
//     //Last pattern question
//     int n;
//     cout<<"Enter the number of rows : "<<endl;
//     cin>>n;
//     int row,num1,num2,star;
//     for(int row=1;row<=n;row++){
//         for(int num1=1;num1<=n-row+1;num1++){
//             cout<<num1;
//         }
//         for(int star=row-1;star>=1;star--){
//             cout<<"**";
//         }
//         for(int num2=n-row+1;num2>=1;num2--){
//             cout<<num2;
//         }
//         cout<<endl;
//     }
// }
//Thats it for the patterns

