  #include <iostream>
  using namespace std;
  // int solve(int x){
  //     if(x == 0)
  //     return 0;
  //   cout<<x<<" ";
  //   solve(x-1);
  //   cout<<x<<" ";


  // }
  // int main(){
  //   int n;
  //   cin>>n;
  //   solve(n);
  // }
// int main(){
//     //MAX and MIN values in an array
//     int arr[11]={10,2,3,4,5,-6,8,13,21,15,17};
//     int max=arr[0],min=arr[0];
    
//     for(int i=0;i<11;i++){
//        if(arr[i]>max){
//         max=arr[i];
//        }
//     }
//     for(int i=0;i<11;i++){
//        if(arr[i]<=min){
//         min=arr[i];
//        }
//     }
//     cout<<" Maximum value in the array is : "<<max<<endl;
//     cout<<" Minimum value in the array is : "<<min<<endl;
// }


// int main(){
//     Sum of elements in an array
//     int arr[100],sum=0;
//     cout<<"Enter the elements of array : "<<endl;
//     for(int i=0;i<10;i++){
//         cin>>arr[i];
        
//     }
//     for(int j=0;j<10;j++){
//         sum=arr[j]+sum;
        
//     }
    
//     cout<<"Sum of the elements in the array is : "<<sum<<endl;
// }



//Understanding bool and linear search
// bool search(int arr[],int size,int n){
//     for(int i=0;i<size;i++){
//         if(arr[i]==n){
//             return 1;
//         }

//     }return 0;

// }

// int main(){
//     //Linear Search in an array 
//     int arr[10]={1,2,3,4,5,6,7,8,9,10},size,n;
//     //We need to search if a number n exists in this array or not
//     cout<<"Enter the number to be checked in the array : "<<endl;
//     cin>>n;
//     bool found= search(arr,10,n);
//     if (found){
//         cout<<"n is present";
//     }
//     else{
//         cout<<"n is absent";
//     }
// }

// int main(){
//     //Reverse an array
//     cout<<"Enter the elements of the array : "<<endl;

// int brr[6],revarr[6];
// for(int i=0;i<6;i++){
//     cin>>brr[i];
// }
// cout<<"Elements of the array are : ";
//  for(int i=0;i<6;i++){ 
//      cout<<brr[i]<<" "; 
//  }
//  for(int i=5,j=0;i>=0;i--,j++){
//       revarr[j]=brr[i];
//     }
// cout<<endl<<"Reversed array is : ";
//   for(int i=0;i<6;i++){
//       cout<<revarr[i]<<" ";
//    }
// }

// int main(){
//     //Alternate swap i.e. if input is {1,2,3,4} Output is {2,1,4,3}
//     int arr[6]={1,2,3,4,5,6},altarr[6];
//      for(int i=0;i<6;){
//         altarr[i]=arr[i+1];
//         altarr[i+1]=arr[i];
//         i=i+2;
//      }
//          cout<<"Alternate array is : ";
//      for(int k=0;k<6;k++){
//          cout<<altarr[k]<<" ";
//      }
//      //Odd Numbers de case vich if use krlin
    

// }

// int main(){
//     int a=5,b=7;
//     swap(a,b);
//     cout<<" a = "<<a<<" b = "<<b;
//     //Swap naam ka predefined function hai isse pichla question easily hojaega odd number k liye bhi
// }


// int main(){
//     //Find the unique element in the array, Kuch numbers do baar hain Sirf 1 number ek vaar hai oho labna
//     //For eg {1,3,2,3,2} vich 1 ek vaar hai i.e. unique
//     int arr[7]={1,4,5,3,5,1,3},ans=0;
//     //Xor ki property use krni hai, Agar sab elements ko Xor krdenge array k then jo similar elements honge unka xor zero hoajega
//     // and Unique element bach jayega
//     for(int i=0;i<7;i++){
//         ans=ans^arr[i];
//     }
//     cout<<ans;
//    }

// int main(){
//     //Finding intersection of two arrays
//     int arr1[6]={1,2,3,4,5,6},arr2[4]={2,4,8,2};
//     for(int i=0;i<6;i++){
//         for(int j=0;j<4;j++){
//              if(arr1[i]==arr2[j]){
//                 cout<<arr1[i]<<" ";
//                 arr2[j]=-1152652;//Yeh isliye kiya taaki arr2 ka element dubara na map hojaye that means ki agar 10,10 hai arr1 mein
//                 // and 10 hai arr 2 mein toh arr1 wale dono 10 sirf ek 10 se he map hojaenge
//                 break;
//              }
//                        }
//     }
// }

// int main(){
//     //To find two digits in array which provide us with a particular sum s;
//     int arr[6]={1,2,3,4,5,6};
//     int s=7;// 1+6, 2+5, 3+4 all add upto 7, 
//     for(int i=0;i<6;i++){
//         for(int j=5;j>=0;j--){
//             if(arr[i]+arr[j]==s){
//                 cout<<arr[i]<<" "<<arr[j]<<endl;
                
//             }
//         }
//     }
// }

// int main(){
//     //Sorting 0 and 1 in the array, All 0's on the left and all 1's on the right
//     int arr[8]={1,0,1,0,0,1,0,0};
//     int left = 0,right=7;
//     while(left<right){
//     while(arr[left]==0){
//         left++;
//     }
//     while(arr[right]==1){
//         right--;
//     }
//     //Agar upar wali donon loops se kaam naa chala matlab left=1 hai and right=0 hai therefore
//     if(left<right){
//         swap(arr[left],arr[right]);//left mein 0 chala jayega and right mein 1 aajayega
//         left++;
//         right--;
//     }

//     }
//     for(int i=0;i<7;i++){
//         cout<<arr[i]<<" ";
//     }
   

// }

//Reversing array using swap, ek index diya hua hai m jiske aage wala part reverse krana hai
// void reverseArray(vector<int> &arr , int m)
// {
//     int z=arr.size();
//     for(int i=m+1;i<z;i++){
//         swap(arr[i],arr[z-1]);
        
//         z--;
//       }
// 	}


// int main(){
//     //Merging two Sorted arrays into 1 array, The merged array needs to be sorted too i.e.
//     //arr1={1,3,5,7,9}, arr2={2,4,6} Merged_arr={1,2,3,4,5,6,7,9}
//     int arr1[5]={1,3,5,7,9},arr2[3]={2,4,6},arr3[8]={0},k=0,i=0,j=0;
//     while(i<5&&j<3){
//             if(arr1[i]>arr2[j]){
//                 arr3[k]=arr2[j];
//                 j++;
//                 k++;
//             }
//             else{
//                 arr3[k]=arr1[i];
//                 k++;
//                 i++;
//             }
//         }
//     while(i<5){//To print remaining elements of an arr1, agar usmein bachgye but compare krne k liye doosre array mein kuch hai he nahi
//         arr3[k]=arr1[i];
//         i++;
//         k++;
//     }
//     while(j<3){//To print remaining elements of an arr2, agar usmein bachgye but compare krne k liye doosre array mein kuch hai he nahi
//         arr3[k]=arr2[j];
//         j++;
//         k++;
//     }
//     cout<<"Merged sorted array is : "<<endl;
//     for(int v=0;v<8;v++){
//         cout<<arr3[v]<<" ";
//     }

//     }


// int main(){
//   /*Move Zeroes - i.e agar arr[]={2,0,8,0,7,6,0,0,0,8} = {2,3,7,6,8,0,0,0,0} saari 0s right hand side shift krdeni hai and jo bache hue number
//   woh bhi same he order mein aane chahiye, thus we can't do sorting nahi toh woh saare bhi sort hojaenge, We will do this by swapping*/
//   int arr[7]={2,0,5,4,0,0,8},k=0;
//   for(int i=0;i<7;i++){
//     if(arr[i]!=0){
//       swap(arr[i],arr[k]);
//       k++;
//     }
//   }
//   cout<<"Array is : "<<endl;
//   for(int v=0;v<7;v++){
//    cout<<arr[v]<<" ";
//   }
// }


//Rotated array code, theory on notebook
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int z=nums.size(),p=0, arr[z],t;
//         for(int m=0;m<z;m++){
//            arr[m]=nums[m];
//         }// Overwrite se bach jayega
//         for(int i=0;i<z;i++){
//             if(k+i<z){
//                 nums[k+i]=arr[p];
//                 p++;
//             }
//             else{
//                t=(k+i)%z;//Main Catch
//                nums[t]=arr[p];
//                p++;
//             }
//         }
//     }
// };
//Leeetcode solution


//Check if an array is sorted and rotated
// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         int count = 0,n=nums.size();
//         for(int i=1;i<n;i++){
//             if(nums[i-1]>nums[i]){
//               count++;
//             }
//         }
//         if(nums[0]<nums[n-1]){
//             count++;
//         }
//        return count <=1;
        
//     }
// };


//Addition of two arrays
// int main(){
//   int arr1[5]={5,4,6,7,5},arr2[4]={4,2,1,8},arr3[5],sum,carry=0,k=4;
//   int i=4,j=3;
//   for( ;i>=0,j>=0;i--,j--){
//       sum=arr1[i]+arr2[j]+carry;
//       arr3[k]=sum%10;
//       carry=sum/10;
//       k--;
//   }
//   if(i>=0){
    
//     sum=arr1[i]+carry;
//       arr3[k]=sum%10;
//       carry=sum/10;
//       i--;
//       k--;
//   }
//   cout<<"Added array is : ";
//   for(int v=0;v<5;v++){
//     cout<<arr3[v]<<" ";
//   }

// }


// //Codestudio Solution
// #include <bits/stdc++.h> 
// vector<int>reverse(vector<int>v){
// 	int s=0;
// 	int e=v.size()-1;
// 	while(s<e){
// 		swap(v[s++],v[e--]);
// 	}
// 	return v;
// }
// vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
// 	// Write your code here.
// 	int i=n-1,j=m-1;vector<int> ans;
// 	int carry=0;
// 	while(i>=0&&j>=0){
// 		int sum=a[i]+b[j]+carry;
// 		carry=sum/10;
// 		sum=sum%10;
// 		ans.push_back(sum);
// 		i--;
// 		j--;

// 	}
// 	while(i>=0){
// 		int sum=a[i]+carry;
// 		carry=sum/10;
// 		sum=sum%10;
// 		ans.push_back(sum);
// 		i--;
// 	}
// 	while(j>=0){
// 		int sum=b[j]+carry;
// 		carry=sum/10;
// 		sum=sum%10;
// 		ans.push_back(sum);
// 		j--;
// 	}
// 	while(carry!=0){
// 		int sum=carry;
// 		carry=sum/10;
// 		sum=sum%10;
// 		ans.push_back(sum);
// 	}
	
// 	return reverse(ans);
	
	
// }




