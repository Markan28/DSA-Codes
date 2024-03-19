 #include<iostream>
 using namespace std;
int main(){
/*Selection Sort mein basically humne ist element ko pakadna hai by i=0, usko minIndex dedena hai then bache hue purre array mein
i.e. i=j+1 to n mein minimum dhoodhna hai, agar min mila toh minIndex ko j ke equal krdena hai and end mein swap krdena hai*/

//     int minIndex;
//    int arr[5]={5,4,6,8,9};
//    for(int i=0;i<4;i++){
//     minIndex=i;
//    for(int j=i+1;j<5;j++){
//     if(arr[j]<=arr[minIndex])
//     minIndex=j;
    
//    }
//     swap(arr[minIndex],arr[i]);
    
//    }

//    cout<<"Sorted array is : ";
//    for(int k=0;k<5;k++){
//     cout<<arr[k]<<" ";
//    }
   //cout<<endl<<count<<endl;
}

// Bubble Sort
// int main(){
//     int arr[6]={12,31,56,8,1,59};bool swapped=true;;
//     for(int i=1;i<6;i++){//)i ko 0 to 5 bhi ke skte hain but 1 to 6 lene se j wali for loop mein ease hojaegi and 
// we will be able to say ki ith largest element will be sorted in its position after ith run
     
//      for(int j=0;j<5-i;j++){//2-2 elements compare krvate chal rhe the and last wala case skip krne k liye we used j<5-i
//      //usse last wala case use nhi hoga and efficient bnega code
//         if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//             swapped= true;
//         }
            
//      }
//      if(swapped==false){
//         break;/*Iss case se agar already sorted array hoga toh voh pehli loop chalne pe koi bhi swap nahi hoga therefore 
//         agli loops se bhi kuch nahi hona because woh already sorted hai, Thus it makes our code more efficient
//         sirf ek loop k baad no swaps pe woh break mardega*/
//      }
//     }
    
//     cout<<endl<<"Sorted Array is : ";
//     for(int k=0;k<6;k++){
//         cout<<arr[k]<<" ";
//     }

// }

//Insertion Sort, Theory on the notebook
// int main(){
//     int arr[7]={56,23,7,98,12,34,2};
//     for(int i=1;i<7;i++){
//         int j=i-1,temp=arr[i];
//         for(;j>=0;j--){
//         if(arr[j]>temp){
//             arr[j+1]=arr[j];
//         }
//         else{
//             break;
//         }
//         } arr[j+1]=temp;
//     }
//     cout<<"Sorted array is : ";
//     for(int k=0;k<7;k++){
//         cout<<arr[k]<<" ";
//     }
// }


// Merge Sort, it will be done using the concept of recursion
// void merge(int *arr,int s,int e){
//     /*Yeh loop boht easy hai, kuch bhi nahi kiya bas 2 arrays banae start to mid tak and mid + 1 se end tak ab 
//     Do for loops lagake jo hmara sorted samaan pada tha merge sort k baad usko first and second array mein daaldiya
//     After this hmaare pass do sorted arrays aagye, Now we very well know ki do sorted arrays ko ek sorted array
//     mein kaise convert krte hain and we did it*/
//     int mid = s+(e-s)/2;
//     int len1 = mid - s + 1;
//     int len2 = e - mid;

//     int *first = new int[len1];
//     int *second = new int[len2];

//     int mainArrayIndex = s;
//     for(int i=0;i<len1;i++){
//         first[i]=arr[mainArrayIndex++];
//     }
//     mainArrayIndex = mid + 1;
//     for(int i=0;i<len2;i++){
//         second[i]=arr[mainArrayIndex++];
//     }

//     //Merging two sorted arrays
//     int index1 = 0;
//     int index2 = 0;
//     mainArrayIndex = s;
//     while(index1<len1 && index2<len2){
//         if(first[index1]<second[index2]){
//             arr[mainArrayIndex++]=first[index1++];
//         }
//         else{
//             arr[mainArrayIndex++]=second[index2++];
//         }
//     }
//     while(index1<len1){
//         arr[mainArrayIndex++]=first[index1++];
//     }
//     while(index2<len2){
//         arr[mainArrayIndex++]=second[index2++];
//     }

// }
// void mergeSort(int* arr,int s,int e){
//     //Base Case
//     if(s>=e){
//         return;
//     }
//     //Sorting left hand side array
//     int mid = s+(e-s)/2;
//     mergeSort(arr,s,mid);

//     //Sorting Right hand side array
//     mergeSort(arr,mid+1,e);
//     /*Kehna yeh hai ki jab saare toote hue elements ko dobara mergeSort krenge toh voh sort hote chale jayenge*/

//     //merging them
//     merge(arr,s,e);
//     /*Let's go bhai- Kahani likhte hain explanation ki
//      Start hua yeh mergesort left se tab bana (0,3) and right mein bana (4,6) and merge mein bana (0,6)
//      and left wala{(0,4) tha jo} aage toota (0,2) and (3,4) mein and uska merge bana (0,4)
//      then jo aage left bna{(0,2) tha jo} aage toota (0,1) and (1,2) mein and uska merge bana (0,2)
//      and finally jo left tha{(0,1)} woh toota (0,0) and (1,1) mein which is same toh yahan pe base condition satisfy hogyi
//      and ab recursion piche ko chali i.e. (0,0) and (1,1) ko merge krenge 
//      Tabhi (0,0) pe hai 38 and (1,1) pe hai 27 jab inn dono ko merge kra toh 27,38 jud gya array mein
//      Ab aage aaye i.e. (0,2) wali side pe and jo iska right portion tha usko sort krenge i.e.
//      43 and 3 bhi sort hoke 3,43 ka ek array bana lenge then aur piche gye toh 27,38 and 3,43 ka jo array hai unn dono ko
//      merge kra and hamaare pass 4 boxes ka sorted left array ready hogya which contains 3,27,38,43
    
//      Ab jo right hand side wala array tha
//      uska 1st breakdown k baaad wala portion i.e. 9,82 ko merge kra, ab woh ek array meii store hogya as 9,81 and
//      finally pahunche 10 pe singly sorted tha
//      Ab 9,81,10 ko sorted array mein likha toh humein 9,10,81 ka sorted right array mila
     
//      Ab finally inn dono Left and Right Sorted arrays ko merge krdiya humne.       */

// }
// int main(){
//     int arr[7]={38,27,43,3,9,82,10};
//     mergeSort(arr,0,6);
//     cout<<endl;
//     for(int i=0;i<7;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// /*QuickSort using recursion*/
// int partition(int* arr,int s,int e){
//     int count = 0;
//     for(int i=s+1;i<=e;i++){
//     if(arr[s]>arr[i]){
//         count++;
//     }
//     }
//     int pivot = s + count;
//     swap(arr[s],arr[pivot]);
//     int i=s,j=e;
//     while(i<pivot&&j>pivot){
//         while(arr[i]<arr[pivot]){
//             i++;
//         }
//         while(arr[j]>arr[pivot]){
//             j--;
//         }
//         while(i<pivot&&j>pivot){
//             swap(arr[i++],arr[j--]);
//         }
//     }
//     return pivot;
// }
// void QuickSort(int* arr,int s,int e){
//     if(s>=e){
//         return;
//     }

//     int p = partition(arr,s,e);
//     QuickSort(arr,s,p-1);
//     QuickSort(arr,p+1,e);

    
// }
// int main(){
//     int arr[8] = {7,13,4,45,2,67,24,31};
//     QuickSort(arr,0,7);
//     cout<<endl;
//     for(int i=0;i<8;i++){
//         cout<<arr[i]<<" ";
//     } 
// }
