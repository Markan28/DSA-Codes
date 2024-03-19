#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
void inorder(Node* root){
    //LNR
    if(root == NULL){
        return;
    }
    inorder(root->left);//Left
    cout<<root->data<<" ";//Node ko print krvate the
    inorder(root->right);//Right

}
void preorder(Node* root){
    //NLR
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";//Node ko print krvate the
    preorder(root->left);//Left
    preorder(root->right);//Right

}

void postorder(Node* root){
    //LRN
    if(root == NULL){
        return;
    }
    postorder(root->left);//Left
    postorder(root->right);//Right
    cout<<root->data<<" ";//Node ko print krvate the

}
void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);//Acts as a separator for different levels

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){//Ek level pura traverse ho chuka hai
        cout<<endl;
        if(!q.empty()){//Queue still has some child nodes
            q.push(NULL);
        }

        }
        else{
        cout<<temp -> data <<" ";
        if(temp -> left){//Isse bas left node of 1 chali gyi
            q.push(temp -> left);
        }
        if(temp -> right){//Isse bas right node of 1 chali gyi
            q.push(temp -> right);
        }

        }
    }
}

Node* insertIntoBST(Node* &root, int d){
    if(root == NULL){
        cout<<"Inserted"<<endl;
        root = new Node(d);
        cout<<"Enter Next : "<<endl;
        return root;
    }

    if(d > root->data){
        root->right = insertIntoBST(root->right,d);
    }
    else{
        root->left = insertIntoBST(root->left,d);
    }
    return root;
}

Node* Minvalue(Node* root){
    Node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}
Node* Maxvalue(Node* root){
    Node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

void takeInput(Node* &root){
   int data;
   cin>>data;

   while(data!=-1){
    insertIntoBST(root,data);
    cin >> data;
   }
}

int main(){
    Node* root = NULL;
    cout<<"Enter data to create BST "<<endl;
    takeInput(root);

    // cout<<"Printing Level Order Traversal of BST: "<<endl;
    // levelOrderTraversal(root);
    // cout<<"Printing Inorder Traversal of BST: "<<endl;
    // inorder(root);//Yeh sorted way mein return krta hai
    // cout<<endl<<"Printing Preorder Traversal of BST: "<<endl;
    // preorder(root);
    // cout<<endl<<"Printing Postorder Traversal of BST: "<<endl;
    // postorder(root);
    // Node* minvalue = Minvalue(root);
    // int minValue = minvalue->data;

    // cout<<"Minimum value in the BST : "<<minValue<<endl;
    // Node* maxvalue = Maxvalue(root);
    // int maxValue = maxvalue->data;

    // cout<<"Maximum value in the BST : "<<maxValue<<endl;

    return 0;

}

/*Question - 1, Search in Binary Search Tree*/
// void solve(BinaryTreeNode<int> *root, int x, bool &ans){
//     if(root == NULL){
//         return;
//     }
//     if(root->data == x){
//         ans = true;
//     }
//     else if(root->data > x){
//         solve(root->left,x,ans);
//     }
//     else{
//         solve(root->right,x,ans);
//     }
// }
// bool searchInBST(BinaryTreeNode<int> *root, int x) {
//     bool ans = false;
//     solve(root,x,ans);
//     return ans;
// }


/*Question - 2, Delete a node from Binary Search Tree*/
// /*Yeh yaad rakhna ki kuch bhi delete krne k baad, return toh end mein root he krni hai*/
// BinaryTreeNode<int>* minVal(BinaryTreeNode<int>* root){
//     BinaryTreeNode<int>* temp = root;
//     while(temp->left != NULL){
//         temp = temp->left;
//     }
//     return temp;
// }

// BinaryTreeNode<int>* deleteNode(BinaryTreeNode<int>* root, int key) {
//     if(root == NULL){
//         return root;
//     }
//     if(root -> data == key){
//         // 0 Child wali Node
//         if(root->left == NULL && root->right == NULL){
//             delete root;
//             return NULL;
//         }
//          // 1 Child wali Node
//          /* Left Child*/
//          if(root->left != NULL && root->right == NULL){
//              BinaryTreeNode<int>* temp = root->left;
//              delete root;
//              return temp;
//          }

//         /* Right Child*/
//          if(root->left == NULL && root->right != NULL){
//             BinaryTreeNode<int>* temp = root->right;
//              delete root;
//              return temp;
//          }


//         // 2 Child wali Node
//         if(root->left != NULL && root->right != NULL){
//            int mini = minVal(root->right)->data;
//            root->data = mini;
//            root->right = deleteNode(root->right,mini);
//         }
//     }
//     else if(root->data > key){
//         root->left = deleteNode(root->left,key);
//         return root;
//         }
//     else{
//         root->right = deleteNode(root->right,key);
//         return root;
//     }
// }



/*Question - 3, Check if the Given BST is Valid*/
// bool solve(BinaryTreeNode<int>* root,int max, int min){
//     if(root == NULL){
//         return true;
//     }
//     if(root->data>min && root->data <max){
//         bool left = solve(root->left,root->data,min);
//         bool right = solve(root->right,max,root->data);
//         return left && right;
//     }
//     else{
//         return false;
//     }
//   }

// bool validateBST(BinaryTreeNode<int>* root) 
// {
//     return solve(root,INT_MAX,INT_MIN);
// }


/*Question - 4, Find the Kth Smallest element in a BST*/
// class Solution {
// public:
// int solve(TreeNode* root, int &count,int k){
//     if(root == NULL){
//         return -1;
//     }
//     int left = solve(root->left,count,k);
    
//     if(left != -1){
//         return left;
//     }
//     count++;
//     if(count == k){
//         return root->val;
//     }
//     return solve(root->right,count,k);
// }
//     int kthSmallest(TreeNode* root, int k) {
       
//         int count = 0;
//         int answer = solve(root,count,k);
//         return answer;
// }
// };


/*Question - 5, Kth largest Element in a BST*/
// void solve(Node* root, vector<int>&ans){
// 	if(root == NULL){
// 		return;
// 	}
// 	solve(root->left,ans);
// 	ans.push_back(root->data);
// 	solve(root->right,ans);
	
// }
// int KthLargest(Node* root, int k)
// {
// 	vector<int>ans;
// 	solve(root,ans);
// 	int n = ans.size();
// 	return ans[n-k];//Bas piche se return krvadiya, that's it.
	

// }

/*Question - 6, Range Sum of BST*/
/*Space di gand maaran wali approach nal kita hai, 938th question on leetcode, Theory Not on notebook
/*Bas Inorder ton sorted BST miln di application smjh lai*/
// class Solution {
// public:
// void solve(TreeNode* root,vector<int>&ans){
//     if(root == NULL){
//         return;
//     }
//     solve(root->left,ans);
//     ans.push_back(root->val);
//     solve(root->right,ans);
    
// }
//     int rangeSumBST(TreeNode* root, int low, int high) {
//         vector<int>ans;
//         solve(root,ans);
//         int n = ans.size();
//         int i=0,j=0;
//         for(;i<n;i++){
//             if(ans[i]==low){
//                 break;
//             }
//         }
//         for(;j<n;j++){
//             if(ans[j]==high){
//                 break;
//             }
//         }
//         int sum = 0;
//         for(int k=i;k<=j;k++){
//             sum = sum + ans[k];
//         }
//         return sum;
//     }
// };



/*Question - 7, Predecessor and Successor of BST*/
// Approach - 1, Using Inorder Traversal
// void solve(binaryTreeNode *root,vector<int>&ans){
// 	if(root == NULL){
// 		return;
// 	}

// 	solve(root->left,ans);
// 	ans.push_back(root->data);
// 	solve(root->right,ans);
// }

// vector<int> findPreSuc(binaryTreeNode *root, int key)
// {
// 	vector<int>ans;
// 	solve(root,ans);
// 	int n=ans.size(),i=0;

// 	for(;i<n;i++){
//                 if (key == ans[i]) {
//                   break;
//                 }
//         }
// 		vector<int>ans2;
// 		vector<int>ans3;
// 		if(i==0){
// 			ans2.push_back(-1);
// 		}
// 		else{
// 			ans2.push_back(ans[i-1]);
			
// 		}

// 		if(i==n-1){
// 			ans2.push_back(-1);
// 		}else{
// 			ans2.push_back(ans[i+1]);
// 		}

// 		return ans2;

// }

//Approach - 2
// vector<int> findPreSuc(binaryTreeNode *root, int key)
// {
//     binaryTreeNode *temp = root;
// 	int succ=-1, pred=-1;
// 	while(temp->data != key){
// 		if(temp->data > key){
// 			succ = temp->data;
// 			temp = temp->left;
// 		}
// 		else{
// 			pred = temp->data;
// 			temp = temp->right;
// 		}
// 	}
// 	binaryTreeNode *leftTree = temp->left;
// 	while(leftTree != NULL){
// 		pred = leftTree->data;
// 		leftTree = leftTree->right;
// 	}
// 	binaryTreeNode *rightTree = temp->right;
// 	while(rightTree != NULL){
// 		succ = rightTree->data;
// 		rightTree = rightTree->left;
// 	}
// 	vector<int>ans;
// 	ans.push_back(pred);
// 	ans.push_back(succ);
// 	return ans;
// }


/*Question - 8, Two Sum in a BST*/
// class Solution {
// public:
// void solve(TreeNode* root, vector<int>&ans){
//      if(root == NULL){
//          return;
//      }
//      solve(root->left,ans);
//      ans.push_back(root->val);
//      solve(root->right,ans);
// }
//     bool findTarget(TreeNode* root, int k) {
//         vector<int>ans;
//         solve(root,ans);

//         int n = ans.size();

//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(ans[i] + ans[j] == k){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };

/*Question - 8, With a Better Approach od finding target in O(n)*/
// void solve(BinaryTreeNode<int>* root, vector<int>&ans){
//     if(root == NULL){
//         return;
//     }
//     solve(root->left,ans);
//     ans.push_back(root->data);
//     solve(root->right,ans);
// }

// bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
//     vector<int>ans;
// 	solve(root,ans);

//     int i=0, j=ans.size()-1,sum=0;
//     while(i<j){
//         sum = ans[i]+ans[j];
//         if(sum>target){
//             j--;
//         }
//         else if(sum<target){
//             i++;
//         }
//         else{
//             return true;
//         }
//     }
//     return false;
// }


/*Question - 9, LCA in BST*/
// TreeNode *LCAinaBST(TreeNode *root, TreeNode *P, TreeNode *Q)
// {
//     if(root == NULL){
//         return NULL;
//     }
//     while(root != NULL){

//    if(root->data < P->data && root->data < Q->data){
//        root = root->right;
//    }
//   else if (root->data > P->data && root->data > Q->data) {
//        root = root->left;
//    } 
//    else {
//        return root;
//    }
//     }
// }


/*Question - 10, Flatten a BST in a LL*/
// void solve(TreeNode<int>* root,vector<int>&ans){
//     if(root == NULL){
//         return;
//     }
//     solve(root->left,ans);
//     ans.push_back(root->data);
//     solve(root->right,ans);
// }

// TreeNode<int>* flatten(TreeNode<int>* root)
// {
//    vector<int>ans;
//    solve(root,ans);
//    TreeNode<int>* newRoot = new TreeNode<int>(ans[0]);
//    TreeNode<int>* curr = newRoot;
//    for(int i=1;i<ans.size();i++){
//        TreeNode<int>* temp = new TreeNode<int>(ans[i]);
//        curr->left = NULL;
//        curr->right = temp;
//        curr=temp;
//    }
//    //For the last node, Loop se second last node tak hua
//    curr->left = NULL;
//    curr->right = NULL;
//    return newRoot;
   
// }

/*Question - 11, Normal BST to a Balanced BST*/
// void solve(TreeNode<int>* root, vector<int>&ans){
//     if(root == NULL){
//         return;
//     }
//     solve(root->left,ans);
//     ans.push_back(root->data);
//     solve(root->right,ans);
// }
// TreeNode<int>* Create(int s,int e,vector<int>ans){
//     if(s>e){
//         return NULL;
//     }
//     int mid = s + (e-s)/2;
//     TreeNode<int>*newRoot = new TreeNode<int>(ans[mid]);
//     newRoot->left = Create(s,mid-1,ans);
//     newRoot->right = Create(mid+1,e,ans);
//     return newRoot;
// }

// TreeNode<int>* balancedBst(TreeNode<int>* root) {
//     vector<int>ans;
//     solve(root,ans);
//     int n = ans.size()-1;
    
//     TreeNode<int>* answer = Create(0,n,ans);
//     return answer;
// }


/*Question - 12, Construct BST when PreOrder Traversal is given*/
// BinaryTreeNode<int>* solve(vector<int> &preorder,int mini,int maxi,int &i){
//     if(i >= preorder.size()){
//         return NULL;
//     }
//     if(preorder[i]<mini || preorder[i]>maxi){
//         return NULL;
//     }
// //Agar yahan tak aagye i.e. range mein fall krta hai data
//     BinaryTreeNode<int>* root = new BinaryTreeNode<int>(preorder[i++]);
//     root->left = solve(preorder,mini,root->data,i);
//     root->right = solve(preorder,root->data,maxi,i);

//     return root;
// }
// BinaryTreeNode<int>* preorderToBST(vector<int> &preorder) {
//     int mini = INT_MIN;
//     int maxi = INT_MAX;
//     int index = 0;
//     return solve(preorder,mini,maxi,index);
// }


/*Question - 13, Merge two BSTs
Inorder use krke banadiya, Very sidhi approach*/

// void solve(TreeNode *root,vector<int>&ans){
//     if(root == NULL){
//         return;
//     }
//     solve(root->left,ans);
//     ans.push_back(root->data);
//     solve(root->right,ans);
// }

// vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
// {
//    vector<int>ans;
//    solve(root1,ans);
//    solve(root2,ans);

//    sort(ans.begin(),ans.end());
//    return ans;
// }


//Approach - 2
// On Notebook

/*Question - 14, Largest BST in a Binary Tree*/
// class info{
//     public:
//     int maxi;
//     int mini;
//     bool isBST;
//     int size;
// };

// info solve(TreeNode<int>* root, int &ans){
//     if(root == NULL){
//         return{INT_MIN,INT_MAX,true,0};
//     }

//     info left = solve(root->left,ans);
//     info right = solve(root->right,ans);
//     info currNode;
//     currNode.size = left.size + right.size + 1;
//     currNode.maxi = max(root->data,right.maxi);
//     currNode.mini = min(root->data,left.mini);

//     if(left.isBST && right.isBST && (root->data > left.maxi && root->data < right.mini)){
//         currNode.isBST = true;
//     }
//     else{
//         currNode.isBST = false;
//     }

//     if(currNode.isBST){
//         ans = max(ans,currNode.size);
//     }
//     return currNode;
//     }

// int largestBST(TreeNode<int>* root) 
// {
//         int maxSize = 0;
//     info temp = solve(root,maxSize);
//     return maxSize;
// }


