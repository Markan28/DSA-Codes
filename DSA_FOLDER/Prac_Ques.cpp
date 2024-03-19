      #include <iostream>
     #include <math.h>
     using namespace std;
   //   int main(){
   //    //Decimal to Binary Conversion**************

   //      int n,i=0;
   //      cout<<"Enter a number to be converted into binary : \n";
   //      cin>>n;
   //      int ans=0;
   //      while(n != 0){
   //       int bit=n&1;
        
   //       ans=(bit*pow(10,i))+ans;
   //       n=n>>1;
        
        
   //       i++;
   //      }

   //      cout<<"The binary conversion is "<< ans<<endl;
   //     } 



   // int main(){
   //    //Binary to decimal coversion
   //    int n;
   //    int ans=0;int i=0;
   //    cout<<"Enter a binary number : "<<endl;
   //    cin>>n;
   //    while(n != 0){
   //       int bit=n%10;
   //    if(bit==1){
   //        ans = pow(2,i)+ans;
   //    }
   //    n=n/10;
   //    i++;
   // } 
   // cout<<"The binary number in decimal is : "<<ans<<endl;
   // return(0);
   //  }  


   // int main(){
   //    //Reversing a number;
   //    cout<<"Enter a number to be reversed";
   //    int n,ans=0;
   //    cin>>n;
   //    while(n!=0){
   //      ans=(n%10)+ans*10;
   //      n=n/10;
       
   //    }
   //    cout<<"The answer is : "<<ans;
   // }

   // int main(){
   //      //Finding 10's complement of a number;
   //    cout<<"Enter the number to be complemented : "<<endl;
   //    int n,mask=0,ans;
   //    cin>>n;
   //    int m=n;
   //    while(n!=0){
   //       mask=(mask<<1)|1;
   //       n=n>>1;
   //    }
   //    if(m==0){
   //       int c=m^1;
   //       cout<<c<<endl

   //    }
   //     ans=~m & mask;
   //    cout<<"The Complement is : "<<ans<<endl;

   // }

   // int main(){
   //    //To know if a number lies in the power of 2
   //    int n,ans,count=0;
   //    cout<<"Enter the number to be checked : "<<endl;
   //    cin>>n;
   //    int m=n;
   //    if(n%2!=0){
         
   //       cout<<"The no. cannot be divided by power of 2 ";

   //    }else{
   //     while(n!=1){
   //    ans =n/2;
   //    n=n/2;
   //    count++;
   //    if(n%2!=0){
         
   //       cout<<"The no. cannot be divided by power of 2 ";

   //   break;
   //    }
   //    }
   //    if(ans==1){
   //       cout<<"The no. "<<m<<" can be divided by power of 2 as 2 raise to power "<<count<<endl;
   //    }}
   // }
    //Yeh sarri bakchodi ki zaroorat nahi hai, We already know ki int mein 2 raise to pow 31 -1 tak chalta toh loop lagake
    // yeh saari values nikal lenge and n se compare krdenge.

   //  int main(){
   //    int n,k,i;
     
   //    cout<<"Enter the value of the number : "<<endl;
   //    cin>>n;
   //    for(int i=0;i<=30;i++){
   //       k=pow(2,i);
   //       if(k==n){
   //         return true;
   //    }
      
   //    }return false;
     
   //  }
   //  int main(){
   //    //Distribution of notes
   //    int n,Note;
   //    cout<<"Enter the amount to be divided into notes : "<<endl;
   //    cin>>n;
   //    cout<< "Enter the value of note ";
   //    cin>>Note;
   //    int fifty,twenty,one;
   //    fifty=n-(n/100)*100;
   //    twenty=fifty-(fifty/50)*50;
   //    one=twenty-(twenty/20)*20;

   //    switch(Note){
   //       case 100 : 
   //        cout<<n/100<<" notes are required"<<endl;
   //                  break;
   //       case 50 : 
   //        cout<<fifty/50<<" notes are required"<<endl;
   //                  break;
   //       case 20 : 
   //        cout<<twenty/20<<" notes are required"<<endl;
   //                  break;
   //       case 1 : 
   //        cout<<one<<" notes are required"<<endl;
   //                  break;


   //                   }
   //                   cout<<"The no. of 100 Rs notes are "<<n/100<<endl<<"The number of 50 Rs notes are "<<fifty/50<<endl;
   //                   cout<<"The no. of 20 Rs notes are "<<twenty/20<<endl<<"The number of 1 Rs notes are "<<one<<endl;
   //  }