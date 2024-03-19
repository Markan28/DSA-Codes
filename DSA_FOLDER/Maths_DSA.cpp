#include <iostream>
using namespace std;
// int main(){
    /*Given an integer n, return the number of prime numbers that are strictly less than n
    
    i.e agar n=10, then output = 4 bcz 2,3,5,7 will be the answers
    1 leetcode soln is given below jismein har number ko check krte hain if that is prime or not agar prime hai toh count ko aage badha denge
    Ismein time limit exceeded hai bcz agar har no. ko check krne lg gya toh and number badha hua then it gets fucked */
//     class Solution {
//   bool isPrime(int n){
//         if(n<=1){
//             return false;
//         }
//         for(int i=2;i<n;i++){
//             if(n%i==0){
//                 return false;
//             }
//         }
//         return true;
        
//     }
// public:
//     int countPrimes(int n) {
//         int cnt = 0;
//         for(int i=2;i<n;i++){
//             if(isPrime(i))
//              cnt++;
//                  }
//         return cnt;
        
//     }
   
// };


//Sieve of Eratosthenes k logic se hum yeh pura krenge, Theory on the notebook
//After Reading theory this is the logic
// class Solution {
// public:
//     int countPrimes(int n) {
//         int count = 0;
//         vector<bool>prime(n+1,true);
//         prime[0]=prime[1]=false;
//         for(int i=2;i<n;i++){
//             if(prime[i]){
//                 count++;
//             }
//             for(int j=2*i;j<n;j=j+i){
//                 prime[j]=0;
//             }
//         }
//         return count;
//     }
// };
// }

//Finding HCF/GCD(Donon same cheezein hai) of two numebers using theorem whose theory is on notebook
//Very easy and sexy code
// int gcd(int a , int b){
    // if(a==0)
    // return b;
    // if(b==0)
    // return a;
//     while(a!=b){
//         if(a>b){
//             a=a-b;
//         }
//         else{
//             b=b-a;
//         }
        
//     }
//     return a;//Last mein a and b ne equal he hojana hai thus a yaa phir b return krao, doesn't matter
// }
// int main(){
//     int a,b;
//  cout<<"Enter two numbers whose gcd is to be calculated : "<<endl;
//  cin>>a>>b;
//  cout<<"GCD of a and b is : "<<gcd(a,b);
// }


//Exponentiation , Will take someone's help to understand this again
// #include <bits/stdc++.h>

// int modularExponentiation(int x, int n, int m) {
// 	int res = 1 ;
// 	while(n>0){
// 		if(n&1){
// 			res=(1LL*(res)*(x)%m)%m;
// 		}
// 		x=(1LL*(x)%m*(x)%m)%m;
// 		n=n>>1;
// 	}
// 	return res;
// }