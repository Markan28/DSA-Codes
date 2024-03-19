#include<iostream>
#include<queue>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size = size + 1;
        int index = size;//Jo size increase krke dabba dalla hai usi mein value daalni hai 
        //Tabhi usko index k equal krdiya
        arr[index] = val;//Daaldiya last position pe

        //Ab sahi jagah pe daalna hai
        while(index > 1){//Bcz jab index 1 pe hai toh uss time toh kisise compare he nahi krr skte
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i=1; i<=size; i++){
            cout<<arr[i]<<" ";

        }cout<<endl;
    }

    void deleteFromHeap(){
        if(size == 0){
            cout<<"Nothing ot Delete";
            return;
        }
        arr[1] = arr[size];//Aakhri Node 1st mein daaldi
        size--;//Delete hogyi last wali
        //Take root node to its correct positon
        int i = 1;
        while(i<size){
            int LeftIndex = 2*i;
            int RightIndex = 2*i + 1;
            if(LeftIndex < size && arr[i] < arr[LeftIndex]){
                swap(arr[i],arr[LeftIndex]);
                i = LeftIndex;
            }
            else if(RightIndex < size && arr[i] < arr[RightIndex]){
                swap(arr[i],arr[RightIndex]);
                i = RightIndex;
            }
            else{
                return;
            }
        }

    }
};

void heapify(int arr[],int n, int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i + 1;

    if(left <= n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);//Recursion krdi i.e. Jis index pe swap hua ab uss index ko bhi check krliya niche walon se
        }

}

void heapSort(int arr[], int n){
    int size = n;
    while(size > 1){
        swap(arr[size],arr[1]);
        size--;

        heapify(arr,size,1);
    }
}

int main(){
   // Dry Run of Insertion on NoteBook
    // heap h;
    // h.insert(50);
    // h.insert(55);
    // h.insert(53);
    // h.insert(52);
    // h.insert(54);
    // h.print();

    // h.deleteFromHeap();//Dry run on Notebook
    // h.print();
    
    // int arr[6] = {-1,54,53,55,52,50};
    // int n=5;
    // for(int i=n/2;i>0;i--){
    //    heapify(arr,n,i);
    // }
    // cout<<"Printing Max Heaped array"<<endl;
    // for(int i=1;i<=n;i++){
    //     cout<<arr[i]<<" ";
    //     } cout<<endl;

    //     heapSort(arr,n);

    // cout<<"Printing Sorted array"<<endl;
    // for(int i=1;i<=n;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;  
    priority_queue<int>pq; //Here pq is Max heap
    pq.push(4);  
    pq.push(3);  
    pq.push(7);  
    pq.push(1);  

    cout<<"On Top -> "<<pq.top()<<endl;
    pq.pop();
    cout<<"On Top -> "<<pq.top()<<endl;

    cout<<"Size of pq -> "<<pq.size()<<endl;


    priority_queue<int, vector<int>, greater<int>> minHeap; //Here we have declared a mInheap
    minHeap.push(3);
    minHeap.push(8);
    minHeap.push(1);
    minHeap.push(2);

    cout<<"On Top -> "<<minHeap.top()<<endl;
    minHeap.pop();
    cout<<"On Top -> "<<minHeap.top()<<endl;

    cout<<"Size of minHeap -> "<<minHeap.size()<<endl;    


        return 0;

}


//Question - 1, Buid Min Heap
// #include <bits/stdc++.h> 
// void heapify(vector<int>&arr, int n, int i){
//     int smallest = i;
//     int left = 2*i + 1;
//     int right = 2*i + 2;

//     if(left < n && arr[smallest]>arr[left]){
//      smallest = left;
//     }
//     if(right < n && arr[smallest]>arr[right]){
//      smallest = right;
//     }

//     if(smallest != i){
//         swap(arr[smallest],arr[i]);
//         heapify(arr,n,smallest);
//     }
// }
// vector<int> buildMinHeap(vector<int> &arr)
// {
//     int n = arr.size();
//     for(int i = n/2-1;i>=0;i--){
//         heapify(arr,n,i);
//     }
//     return arr;
// }


//Question - 2, Build Max Heap
// #include <bits/stdc++.h>
// void heapify(vector<int>&arr,int n, int i){
// 	int largest = i;
// 	int left = 2*i + 1;
// 	int right = 2*i + 2;

// 	if(left < n && arr[largest]<=arr[left]){
// 		largest = left;
// 	}
// 	if(right < n && arr[largest]<=arr[right]){
// 		largest = right;
// 	}

// 	if(largest != i){
// 		swap(arr[largest],arr[i]);
// 		heapify(arr,n,largest);
// 	}
// } 
// vector<int> buildHeap(vector<int> arr, int n)
// {	
// 	//int n = arr.size();
// 	for(int i=n/2-1;i>=0;i--){
// 		heapify(arr,n,i);
// 	}

// 	return arr;
// }



/* Question - 3 Find kth smallest element of teh array using Heap*/
// #include<bits/stdc++.h>
// int kthSmallestElement(vector<int>& arr, int n, int k) {
//     priority_queue<int>pq;
//     for(int i=0;i<k;i++){
//         pq.push(arr[i]);
//     }
    
//     for(int i=k;i<n;i++){
//         if(arr[i]<pq.top()){
//             pq.pop();
//             pq.push(arr[i]);
//         }
//     }
//     return pq.top();
// }


/*Question - 4, Is Binary Tree Heap, Theory on Notebook*/
// int countNodes(BinaryTreeNode<int>* root){
//     if(root == NULL){
//         return 0;
//     }
//     int ans = 1 + countNodes(root->left) + countNodes(root->right);
//     return ans;
// }

// bool isCBT(BinaryTreeNode<int>* root,int index, int cnt){
//     if(root==NULL){
//         return true;
//     }
//     if(index >= cnt){
//         return false;
//     }
//     else{
//         bool left = isCBT(root->left,2*index + 1, cnt);
//         bool right = isCBT(root->right,2*index + 2,cnt);
//         return(left && right);
//     }
// }

// bool isMaxOrder(BinaryTreeNode<int>* root){
//     //Leaf Node
//     if(root->left == NULL && root->right == NULL){
//         return true;
//     }
//     if(root->right == NULL){
//         //Sirf left exiist krta hai
//         return(root->data > root->left->data);
//     }
//     else{
//         bool left = isMaxOrder(root->left);
//         bool right = isMaxOrder(root->right);
//         return(left && right && (root->left->data < root->data && root->right->data < root->data));

//     }
// }
// bool isBinaryHeapTree(BinaryTreeNode<int>* root) 
// {
//     int index = 0;
//     int totalCount = countNodes(root);
//     if(isCBT(root,index,totalCount) && isMaxOrder(root)){
//         return true;
//     }
//     else{
//         return false;
//     }
// }


//Question - 5, Merge two Binary max Heap
// #include <bits/stdc++.h> 
// void heapify(vector<int>&arr,int n, int i){
//     int largest = i;
//     int left = 2*i+1;
//     int right = 2*i + 2;

//     if(left < n && arr[largest] < arr[left]){
//         largest = left;
//     }
//     if(right < n && arr[largest] < arr[right]){
//         largest = right;
//     }

//     if(largest != i){
//         swap(arr[largest],arr[i]);
//         heapify(arr,n,largest);//Recursion krdi i.e. Jis index pe swap hua ab uss index ko bhi check krliya niche walon se
//         }

// }
// vector<int> mergeHeap(int n, int m, vector<int> &arr1, vector<int> &arr2) {
//     vector<int>merged;
//     for(int i=0;i<n;i++){
//         merged.push_back(arr1[i]);
//     }
//     for(int i=0;i<m;i++){
//         merged.push_back(arr2[i]);
//     }
//     int k = merged.size();
//     for(int i=k/2-1;i>=0;i--){
//        heapify(merged,k,i);
//     }

//     return merged;

// }


//Question - 6, Minimum Cost of N Ropes
// long long connectRopes(int* arr, int n)
// {
//     priority_queue<int,vector<int>,greater<int>>pq;
//     long long int ans = 0;
//     for(int i=0;i<n;i++){
//         pq.push(arr[i]);
//     }

//     while(pq.size()>1){
//         int a = pq.top();
//         pq.pop();
//         int b = pq.top();
//         pq.pop();
//         ans = ans + a + b;
//         pq.push(a+b);
//     }
//     return ans;
// }

//Question - 7, Convert BST into Min Heap
// void inorder(BinaryTreeNode* root, vector<int>&ans){
// 	if(root==NULL){
// 		return;
// 	}
// 	inorder(root->left,ans);
// 	ans.push_back(root->data);
// 	inorder(root->right,ans);
// }

// void preorderFill(BinaryTreeNode* root,int&index, vector<int>&ans)
// {
// 	if(root == NULL){
// 		return;
// 	}
// 	root->data = ans[index++];// root->data replaced
// 	preorderFill(root->left,index,ans);
// 	preorderFill(root->right,index,ans);
// }
// BinaryTreeNode* convertBST(BinaryTreeNode* root)
// {
// 	vector<int>ans;
// 	inorder(root,ans);

// 	int index = 0;
// 	preorderFill(root,index,ans);

// 	return root;
// }


// Question - 8, Kth largest Sum Subarray
//Approach - 1
// #include <bits/stdc++.h>
// int getKthLargest(vector<int> &arr, int k)
// {
// 	int n = arr.size();
// 	vector<int>sum;
// 	for(int i=0;i<n;i++){
// 	int ans = 0;

//     for(int j=i;j<n;j++){
// 		ans = ans + arr[j];
// 		sum.push_back(ans);
// 		}

// 	}

// 	sort(sum.begin(),sum.end());
// 	int z = sum.size();
// 	return(sum[z-k]);
// }


//Question - 9, Merge K Sorted arrays
// #include <bits/stdc++.h> 
// class Node{
//     public: 
//     int data;
//     int i;
//     int j;
//     Node(int data, int row, int col){
//         this->data = data;
//         i = row;
//         j = col;
//     }
// };
// class compare{
//     public:
//     bool operator()(Node* a, Node* b){
//         return a->data > b->data;//Iss bais pe yeh Min heap bana dega
//     }
// };
// vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k){
//      priority_queue<Node*,vector<Node*>,compare> minHeap;//Iss way nal create hoegi Min heap

//      //Step 1, Saare arrays ka 1st element insert krna hai
//      for(int i=0;i<k;i++){
//          Node* temp = new Node(kArrays[i][0],i,0);//Har row ka pehla element daal liya, i.e col no = 0 constant rahega
//          minHeap.push(temp);
//      }

//      vector<int>ans;

//      //Step 2
//      while(minHeap.size() > 0){
//      Node* temp = minHeap.top();
//      ans.push_back(temp->data);
//      minHeap.pop();
// Yahan tak pahunch ke temp mein woh position (i,j) hai jo pop hua hai, Ab uske agle k liye, i toh wahi rahega but j+1 hojaega
//      int i = temp->i;
//      int j = temp->j;

//      if(j+1 < kArrays[i].size()){//If condition isliye daali taaki woh element available bhi hai yaa nahi
//          Node* next = new Node(kArrays[i][j+1],i,j+1);
//          minHeap.push(next);
//      }

//     }
//     return ans;
// }


//Question - 10, Merge K Sorted Linked Lists
// #include<bits/stdc++.h>
// class compare{
//     public:
//     bool operator()(Node* a, Node* b){
//         return a->data > b->data;
//     }

// };

// Node* mergeKLists(vector<Node*> &listArray){
//     priority_queue<Node*, vector<Node*>,compare>minHeap;
//     int k = listArray.size();
//     if(k==0){
//         return NULL;
//     }
//     for(int i=0;i<k;i++){
//         if(listArray[i] != NULL){
//         minHeap.push(listArray[i]);//MinHeap Create krli hai
//         }
//     }
//     Node* head = NULL;
//     Node* tail = NULL;
//     while(minHeap.size() > 0){
//     Node* top = minHeap.top();//K LL's mein smallest data wale head pe point krega starting mein
//     minHeap.pop();

//     if(top ->next != NULL){
//         minHeap.push(top->next);//Smallest element sahi jagah par aagya ab just next element heap mein daaldiya
//     }

//     if(head == NULL){
//     // Answer LL is empty
//         head = top;
//         tail = top;

// }
// //Head NULL nahi tha. i.e. already ek node pe woh point kr rha hai, Ab agli node se usse connect krdenge
//     else{
//         //Insert in LL
//         tail -> next = top;
//         tail = top;

//        }

//     }
//     return head;
// }


//Question - 11, Smallest range in K lists, Kaafi tough hai ehe
// #include<bits/stdc++.h>
// class node{
//     public:
//     int data;
//     int row;
//     int col;

//     node(int d, int r, int c){
//         data = d;
//         row = r;
//         col = c;
//     }
// };
// class compare{
//     public:
//     bool operator()(node* a, node* b){
//         return a->data > b->data;
//     }
// };

// int kSorted(vector<vector<int>> &a, int k, int n) {
//     int mini = INT_MAX, maxi = INT_MIN;
//     priority_queue<node*,vector<node*>, compare> minHeap;
// //Step - 1, Create a min heap for starting element of each list and tracking mini/maxi value
//     for(int i=0; i<k; i++){
//         int element = a[i][0];
//         mini = min(mini,element);//Mini ko track kiya
//         maxi = max(maxi,element);//Maxi ko Traxk kiya
//         minHeap.push(new node(element,i,0));
//     }
//     int start = mini, end = maxi;
//     //Process ranges
//     while(!minHeap.empty()){
//         node* temp = minHeap.top();
//         minHeap.pop();

//         mini = temp->data;
//     // Range or answer updation
//         if(maxi - mini < end - start){
//             start = mini;
//             end = maxi;
//         }
//     // Check if next element exists
//         if(temp->col+1 < n){
//             maxi = max(maxi, a[temp->row][temp->col + 1]);
//             minHeap.push(new node(a[temp->row][temp->col+1], temp->row,temp->col+1));
//         }

//         else{
//             //Next element does not exist
//             break;
//         }
//     }
//     //return the difference of range values
//     return(end-start+1);
// }


//Question - 12, Median of a stream
// #include<bits/stdc++.h>

// int signum(int a, int b){
// 	if(a == b){
// 		return 0;
// 	}
// 	else if(a > b){
// 		return 1;
// 	}
// 	else{
// 		return -1;
// 	}
// }

// void callMedian(int element,priority_queue<int>&maxi,priority_queue<int,vector<int>,greater<int>>&mini,int &median){
//     switch(signum(maxi.size(),mini.size())){
// 		case 0: if(element > median){
// 			mini.push(element);
// 			median = mini.top();
// 		}
// 		else{
// 			maxi.push(element);
// 			median = maxi.top();
// 		}
//         break;
// 		case 1: if(element > median){
// 			mini.push(element);
// 			median = (maxi.top()+mini.top())/2;
// 		}
// 		else{
// 			mini.push(maxi.top());
// 			maxi.pop();
// 			maxi.push(element);
//             median = (maxi.top()+mini.top())/2;
// 		}
//         break;
// 		case -1: if(element > median){
// 			maxi.push(mini.top());
// 			mini.pop();
// 			mini.push(element);
// 			median = (maxi.top()+mini.top())/2;
// 		}
// 		else{
// 			maxi.push(element);
// 			median = (maxi.top()+mini.top())/2;
// 		}
// 		break;
// 	}
// }
// vector<int> findMedian(vector<int> &arr, int n){
// 	//n is the number of elements in the data stream
// 	vector<int>ans;
// 	priority_queue<int>maxHeap;
// 	priority_queue<int,vector<int>,greater<int>>minHeap;
// 	int median = 0;
// 	for(int i=0;i<n;i++){
// 		//Har element ki addition k baad loop chalayenge
// 		callMedian(arr[i],maxHeap,minHeap,median);
//         ans.push_back(median);
// 	}

// 	return ans;

// }

/*Bas Heap k hisaab se khelna hai iss question mein, Jaise Jaise Stream mein elements aate rhenge ,har ek k liye hum function mein
jaate rahenge. Signum function k teen cases ko Switch ka use krke implement krenge. Ab Starting mein dono heaps empty hai i.e.
Dono ka size 0 hai therefore Case 0 chalega ab
Start mein median 0 le rakha hai toh jo bhi element aayega usko compare krenge, agar toh badha hua toh phir mini mein daal denge
otherwise maxi mein daaldenge and odd number of elements hogye hain therefore we returned the top element

Ab jab 2nd element aayega toh ab pichle case k acc Case 1 yaa Case 2 mein jaayega
and same conditions check hoti rahengi

And by chance ek taraf 2 elements zyada hojaein toh ek pop krke doosre mein daaldenge and even no. of elements honge toh
avg return krdenge*/


/*HEAP ENDS, KEEP GRINDING MOTHERFUCKER*/