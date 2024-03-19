//  #include <iostream>
//  using namespace std;
// // Binary Search
// int binsearch(int arr[], int size, int target){
//     int start=0,end=size-1;
//     int mid=start + (end-start)/2;
//     // mid ko (start+end)/2 bhi kr skte the but humne nahi kra bcz agar dono start and end 2 raise to power 31-1 hogye toh dono ka add by 2
//     // will be equal to pow(2,31) which is not possible tabhi thoda ghuma k likh diya, Cut krke (start + end)/2 he bachega
//     while(start<=end){
//         if(arr[mid]==target){ 
//             return mid;
//         }
        
//         if(target>arr[mid]){
//             start=mid+1; 
//             }
//             else{
//                 end=mid-1;
//             }
//         mid=(start+end)/2;
//     }
//    return -1;

// }
// int main(){
//      int arr_odd[5]={1,2,3,4,5};
//      int arr_even[6]={7,8,11,12,15,23};
//      int index = binsearch(arr_even,6,23);
//      cout<<"The index of the number is : "<<index<<endl;
// }

//Various Applications of Binary Search
// int firstocc(int arr[],int size,int target){
//     int start=0,end=size-1;
//     int mid=start+(end-start)/2;
//     int ans=-1;
//     while(start<=end){
//         if(target==arr[mid]){
//             ans=mid;
//             end=mid-1;
//         }
//         if(target>arr[mid]){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=start+(end-start)/2;
//     }
//     return ans;

// }
// int lastocc(int arr[],int size,int target){
//     int start=0,end=size-1;
//     int mid=start+(end-start)/2;
//     int ans=-1;
//     while(start<=end){
//         if(target==arr[mid]){
//             ans=mid;
//             start=mid+1;
//         }
//         if(target>arr[mid]){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=start+(end-start)/2;
//     }
//     return ans;

// }

// int main(){
//     int arr[10]={1,2,3,3,3,3,4,4,5,5};
    
//     cout<<"The first occurence of 3 is at index : "<<firstocc(arr,10,4)<<endl;
//     cout<<"The last occurence of 3 is at index : "<<lastocc(arr,10,4)<<endl;
//     cout<<"Total number of occurences of 3 are : "<<lastocc(arr,10,4)-firstocc(arr,10,4)+1<<endl;
// }

// int main(){
//     //Peak element of a mountain array using binary search
//     int arr[8]={1,3,4,5,3,3,2,1};
//     int start=0,end=7;
//    int mid=start+(end-start)/2;
//    while(start<end){
//      if(arr[mid]<arr[mid+1]){
//         start=mid+1;
//      }
//      else{
//         end=mid;
//      }
//      mid=start+(end-start)/2;
//    }
//    cout<<"Index of the peak is : "<<start<<endl;
// }
 
//  int main(){
//     //Pivot element of a array using binary search
//     int arr[8]={11,13,15,18,3,4,5,6};
//     int start=0,end=7;
//    int mid=start+(end-start)/2;
//    while(start<end){
//      if(arr[mid]>=arr[0]){
//         start=mid+1;
//      }
//      else{
//         end=mid;
//      }
//      mid=start+(end-start)/2;
//    }
//    cout<<"Index of the pivot is : "<<start<<endl;
// }



//Doing binary search using pivot

// int binsearch(int arr[], int size, int target){
//     int start=4,end=size-1;
//     int mid=start + (end-start)/2;
//     // mid ko (start+end)/2 bhi kr skte the but humne nahi kra bcz agar dono start and end 2 raise to power 31-1 hogye toh dono ka add by 2
//     // will be equal to pow(2,31) which is not possible tabhi thoda ghuma k likh diya, Cut krke (start + end)/2 he bachega
//     while(start<=end){
//         if(arr[mid]==target){ 
//             return mid;
//         }
        
//         if(target>arr[mid]){
//             start=mid+1; 
//             }
//             else{
//                 end=mid-1;
//             }
//         mid=(start+end)/2;
//     }}
//     // Binary Search
// int binsearch1(int arr[], int size, int target){
//     int start=0,end=3;
//     int mid=start + (end-start)/2;
//     // mid ko (start+end)/2 bhi kr skte the but humne nahi kra bcz agar dono start and end 2 raise to power 31-1 hogye toh dono ka add by 2
//     // will be equal to pow(2,31) which is not possible tabhi thoda ghuma k likh diya, Cut krke (start + end)/2 he bachega
//     while(start<=end){
//         if(arr[mid]==target){ 
//             return mid;
//         }
        
//         if(target>arr[mid]){
//             start=mid+1; 
//             }
//             else{
//                 end=mid-1;
//             }
//         mid=(start+end)/2;
//     }}



//  int main(){
//     //Pivot element of a array using binary search
//     int arr[8]={11,13,15,18,3,4,5,6};//Rotated sorted array
//     int start=0,end=7;
//    int mid=start+(end-start)/2;
//    while(start<end){
//      if(arr[mid]>=arr[0]){
//         start=mid+1;
//      }
//      else{
//         end=mid;
//      }
//      mid=start+(end-start)/2;
//    }
//    int pivot=start;
//    cout<<"Index of the pivot is : "<<pivot<<endl;
//    // Binary Search
//    int index=binsearch(arr,8,4);
//    cout<<"value of the index is : "<<index<<endl;
//    int index1=binsearch1(arr,8,13);
//    cout<<"value of the index is : "<<index1<<endl;
// }
// long long int square_root(int n){
//      int start=0,end=n,ans;
//     long long int mid=start+(end-start)/2;
//     while(start<=end){
//         if(mid*mid==n){
            
//             return mid;
//         }
//         if(mid*mid>n){
//             end=mid-1;
//         }
//         else{
//             ans=mid;//Because jo kamm wali value hai that can be the answer therefore jab exact nahi hoga toh nearby wali value 
//             //ans store kr lega.
//             start=mid+1;
//         }
//          mid=start+(end-start)/2;
        

//     }
//     return ans;
// }
// double morePrecision(int n, int precision,int squa_root){
//     double factor=1;
//     double ans=squa_root;
//     for(int i=0;i<precision;i++){
//         factor=factor/10;
        
//         for(double j=ans;j*j<n;j=j+factor){
//             ans=j;
//         }
//     }
//     return ans;
// }



// int main(){
//     //Finding square root using binary search
//     int n;
//     cout<<"Enter the number whose square root is to be found : "<<endl;
//     cin>>n;
//    int squa_root=square_root(n);
//    cout<<"Square root of the number is : "<<squa_root<<endl;
//    //For more precision we will create another function morePrecision
//    int k=squa_root;
   
//    cout<<"Precised square root is  : "<< morePrecision(n,3,k) <<endl; 

// }

//Book Allocation Problem Code, Whole theory is on the notebook
//Below is the code run in codestudio
// #include <bits/stdc++.h> 
// bool isPossible(vector<int>time,int n, int m,int mid){
// 	int PageSum=0,student=1;
// 	for(int i=0;i<m;i++){
// 		if(PageSum+time[i]<=mid){
// 			PageSum+=time[i];
// 		}
// 		else{
// 			student++;
// 			if(student>n||time[i]>mid){
// 				return false;
// 			}
// 			PageSum=time[i];
// 		}
// 	}
// 	return true;
// }
// long long int ayushGivesNinjatest(int n, int m, vector<int> time) 
// {	
// 	int start=0,sum=0,ans=-1;
// 	for(int i=0;i<m;i++){
// 		sum=sum+time[i];
// 	}
// 	int e=sum;
// 	int mid=start+(e-start)/2;
// 	while(start<=e){
//         if(isPossible(time,n,m,mid)){
// 			ans=mid;
// 			e=mid-1;
// 		}
// 		else{
// 			start=mid+1;
// 		}
// 		 mid=start+(e-start)/2;
// 	}
// 	return ans;
// }

// Upar wale code mein n and m ko replace krdena

/*
Given below is the question of Painter's partition on Codestudio
The question is as follows-
Given an array of length n, where the array represents the boards and each element 
of the given array represents the length of each board. Some k number of Painters are
available to paint these boards. Consider that each unit of a board takes 1 unit of time
to be painted.
You r supposed to return the area of minimum time to get this job done of painting all the n boards
under a constraint that any Painter will only paint the continuous sections of boards.

Below is the solution which is very similar to the book allocation
Similar question can be asked in interview in variable forms*/
    
// bool isPossible(vector<int>boards,int n, int k,int mid){
// 	int PageSum=0,student=1;
// 	for(int i=0;i<n;i++){
// 		if(PageSum+boards[i]<=mid){
// 			PageSum+=boards[i];
// 		}
// 		else{
// 			student++;
// 			if(student>k||boards[i]>mid){
// 				return false;
// 			}
// 			PageSum=boards[i];
// 		}
// 	}
// 	return true;
// }
// int findLargestMinDistance(vector<int> &boards, int k)
// {

 
// 	int n=boards.size();
// 	int start=0,sum=0,ans=-1;
// 	for(int i=0;i<n;i++){
// 		sum=sum+boards[i];
// 	}
// 	int e=sum;
// 	int mid=start+(e-start)/2;
// 	while(start<=e){
//         if(isPossible(boards,n,k,mid)){
// 			ans=mid;
// 			e=mid-1;
// 		}
// 		else{
// 			start=mid+1;
// 		}
// 		 mid=start+(e-start)/2;
// 	}
// 	return ans;

// }

//Aggressive Cows Problem Solution
// bool isPossible(vector<int>stalls, int k,int mid){
// 	int cow=1;
// 	int lastPos=stalls[0];
// 	for(int i=0;i<stalls.size();i++){
// 		if(stalls[i]-lastPos>=mid){
// 			cow++;
// 			if(cow==k){
// 				return true;
// 			}
// 			lastPos=stalls[i];
// 		}
		
// 		}
// 	return false;
// 	}

// int aggressiveCows(vector<int> &stalls, int k)

       
// {
       
//  sort(stalls.begin(),stalls.end());
// 	int n=stalls.size();
// 	int start=0,maxi=-1,ans=-1;
// 	for(int i=0;i<n;i++){
// 		maxi=max(maxi,stalls[i]);
// 	}
// 	int e=maxi;
// 	int mid=start+(e-start)/2;
// 	while(start<=e){
//         if(isPossible(stalls,k,mid)){
// 			ans=mid;
// 			start=mid+1;
// 		}
// 		else{
// 			e=mid-1;
// 		}
// 		 mid=start+(e-start)/2;
// 	}
// 	return ans;


// }
