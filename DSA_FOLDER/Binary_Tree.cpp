#include <iostream>
#include <queue>
using namespace std;
class node{
    public:
     int data;
     node* left;
     node* right;

     node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
     }
};

node* buildTree(node* root){
     cout<<"Enter the data : "<<endl;
     int data;
     cin>>data;
     root = new node(data);

     if(data == -1){
        return NULL;
     }

     cout<<"Enter data for inserting in left of : "<<data<<endl;
     root->left = buildTree(root -> left);
     cout<<"Enter data for inserting in right : "<<data<<endl;
     root->right = buildTree(root -> right);
     return root;

}
/*Ho kya raha hai BuildTree Func mein, Basically recursion ka use krke saarin nodes bhardi hai humne
Pehle ek normal root node banai then function mein ghusgye, Just Remember ki -1 put krne se node ka woh hissa NULL ko point krega.
So root mein pehle 1 dala, Ab Recursion kaise chal rhi hai?? 
Pehle one dala root mein then we come down and 1 ke left mein insert krne ki option aagyi and dubara uss function mein ghus gye
and left mein 3 daal diya, ab phir woh left mein ghus gya and ab woh 3 ka left puch rha hai and humne 7 daal diya Now
7 ka left pucha and iss baar humne -1 daal diya i.e. Ab return krgya i.e. Ab back maregi Recursion
Matlab iska previous case tha left of 7, So now it asks right of 7 and usko bhi -1 krdiya, Then uske pichla case tha left of 3
and ab puchega right of 3 and usko 11 krdiya, Ab 11 ka left puchega , jab woh -1 krenge toh 11 ka right puchega and usko bhi -1 krdenge.
Ab 7,3,11 ka left and right hogya hai bas 1 ka right bacha hai and next usne yeh pucha toh we put 5 and ab yeh 5 ka left puchega whichi is
17 and then left of 17 which is -1, Ab again back maarega and right of 17 puchega which is -1 and them right of 5 puchega and usko bhi -1 krdiya
and 1 ka right to already puch chuka tha toh yahan pe saare cases hogye and iss hisaab se chal rhi hai recursion.
*/


void levelOrderTraversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);//Acts as a separator for different levels

    while(!q.empty()){
        node* temp = q.front();
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


void inorder(node* root){
    //LNR
    if(root == NULL){
        return;
    }
    inorder(root->left);//Left
    cout<<root->data<<" ";//Node ko print krvate the
    inorder(root->right);//Right

}


void preorder(node* root){
    //NLR
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";//Node ko print krvate the
    preorder(root->left);//Left
    preorder(root->right);//Right

}

void postorder(node* root){
    //LRN
    if(root == NULL){
        return;
    }
    postorder(root->left);//Left
    postorder(root->right);//Right
    cout<<root->data<<" ";//Node ko print krvate the

}

void buildUsingLevelOrder(node* &root){
    queue<node*>q;
    cout<<"Enter the data for the root node : "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter data for left node of "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            //Jab leftData -1 nahi hai toh node insert krni hai iss case mein
            temp -> left = new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter data for right node of "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            //Jab leftData -1 nahi hai toh node insert krni hai iss case mein
            temp -> right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main(){
   // cout<<"Let's Fuck Trees"<<endl;
  node* root = NULL;
//    root = buildTree(root);
//    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
   
//    cout<<"Inorder Traversal : "<<endl;
//    inorder(root);
//    cout<<endl;
//    cout<<"preorder Traversal : "<<endl;
//    preorder(root);
//    cout<<endl;
//    cout<<"postorder Traversal : "<<endl;
//    postorder(root);

buildUsingLevelOrder(root);
   
   cout<<"Printing the Level Order Traversal Output"<<endl;
   levelOrderTraversal(root);

}


/*Submission of codes on Leetcode and CodingNinjas of all the ways to traverse a Binary Tree*/
//Inorder Traversal
// class Solution {
// public:
//     void inOrder(TreeNode* root, vector<int>&ans){
//         if(root == NULL){
//             return;
//         }
//         inOrder(root->left,ans);
//         ans.push_back(root->val);
//         inOrder(root->right,ans);

//     }
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int>ans;
//         inOrder(root,ans);
//         return ans;
        
//     }
// };

//PostOrder Traversal
// void postOrder(TreeNode *root,vector<int>&ans){
//     if(root == NULL){
//         return;
//     }
//     postOrder(root->left,ans);
//     postOrder(root->right,ans);
//     ans.push_back(root->data);
// }
// vector<int> postorderTraversal(TreeNode *root)
// {
//     vector<int>ans;
//     postOrder(root,ans);
//     return ans;
// }

// PreOrder Traversal
// void preOrder(TreeNode* root,vector<int>&ans){
//     if(root == NULL){
//         return;
//     }
//     ans.push_back(root -> val);
//     preOrder(root->left, ans);
//     preOrder(root->right, ans);
// }
// vector<int> preorderTraversal(TreeNode* root)
// {
//     vector<int>ans;
//    preOrder(root,ans);

//     return ans;
    
// }



/*Question - 1, Count no of leaf nodes*/
// void solve(BinaryTreeNode<int> *root,int &count){
//     if(root == NULL){
//         return;
//     }
//     solve(root -> left,count);
    
//     if(root -> left == NULL && root -> right == NULL ){
//         count++;
        
//     }

//     solve(root -> right,count);
// }
// int noOfLeafNodes(BinaryTreeNode<int> *root){
//     int count = 0;
//     solve(root,count);
//     return count;
// }

/*Question - 2, Height of a Binary Tree*/
// int heightOfBinaryTree(TreeNode<int> *root)
// {
// 	if(root == NULL){
//         return 0;
//     }

//     int leftHeight = heightOfBinaryTree(root->left);
//     int RightHeight = heightOfBinaryTree(root->right);

//     int ans = max(leftHeight,RightHeight) + 1;
//     return ans;
// }


/*Question - 3, Diameter of a Binary Tree*/
// Approach - 1
// class Solution {
// public:
//     int height(TreeNode* root){
//         if(root == NULL){
//             return 0;
//         }
//         int op1 = height(root->left);
//         int op2 = height(root->right);

//         int ans = max(op1,op2)+1;
//         return ans;
//     }
//     int diameterOfBinaryTree(TreeNode* root) {
//         if(root == NULL){
//             return 0;
//         }

//         int op1 = diameterOfBinaryTree(root->left);
//         int op2 = diameterOfBinaryTree(root->right);
//         int op3 = height(root->left) + height(root->right);

//         int ans = max(op1,max(op2,op3));

//         return ans;
//     }
// };


// Approach - 2
// pair<int,int>diameterfast(TreeNode<int> *root){
//     if(root == NULL){
//         pair<int,int>p = make_pair(0,0);
//         return p;
//     }
//     pair<int,int>left = diameterfast(root -> left);
//     pair<int,int>right = diameterfast(root -> right);
//     int op1 = left.first;
//     int op2 = right.first;
//     int op3 = left.second + right.second+ 1;
//     pair<int,int>ans;
//     ans.first = max(op1, max(op2,op3));
//     ans.second = max(left.second,right.second) + 1;

//     return ans;
// }

// int diameterOfBinaryTree(TreeNode<int> *root){
// 	return diameterfast(root).first - 1;

// }

/*Question - 4, Is Height of the Binary Tree Balanced*/
// Approach - 1
// int height(TreeNode<int>* root){
//     if(root == NULL){
//         return 0;
//     }
//     int left = height(root->left);
//     int right = height(root->right);

//     int ans = max(left,right) + 1;
//     return ans;
// }
// bool isBalancedBT(TreeNode<int>* root){
//      if(root == NULL){
//          return true;
//      }

//      bool leftAns = isBalancedBT(root->left);
//      bool RightAns = isBalancedBT(root->right);

//      bool ans = abs(height(root->left) - height(root->right))<=1;

//      if(leftAns && RightAns && ans){
//          return true;
//      }

//      else {
//          return false;
//      }
// }

// Approach - 2
//  pair<bool,int> isBalancedfast(TreeNode<int>* root){
       
//      if(root == NULL){
//          pair <bool,int>p = make_pair(true,0);
//          return p;
//      }

//      pair<int,int> left = isBalancedfast(root->left);
//      pair<int,int> right = isBalancedfast(root->right);

//      bool leftAns = left.first;
//      bool RightAns = right.first;

//      bool diff = abs(left.second - right.second)<=1;

//      pair<bool,int>ans;
//      ans.second = max(left.second,right.second) + 1;

//      if(leftAns && RightAns && diff){
//          ans.first = true;
//      }

//      else {
//        ans.first = false;
//      }

//      return ans;

//     }
// bool isBalancedBT(TreeNode<int>* root){
//     return isBalancedfast(root).first;
// }



// Question - 5, Check if two tress are identical
// bool identicalTrees(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
//      if(root1 == NULL && root2 == NULL){
//          return true;
//      }
//      if(root1 == NULL && root2 != NULL){
//          return false;
//      }
//      if(root1 != NULL && root2 == NULL){
//          return false;
//      }
//      bool left = identicalTrees(root1->left, root2->left);
//      bool right = identicalTrees(root1->right, root2->right);

//      bool val = root1->data == root2->data;
     

//      if(left && right && val){
//          return true;
//      } else {
//          return false;
//      }
// }


/*Question - 6, Symmetric Tree i.e. Mirror image ho */
//    bool isEqual(TreeNode<int>*root1,TreeNode<int>*root2){
//         if(root1 == NULL && root2 == NULL){
//             return true;
//         }
//         if(root1 != NULL && root2 == NULL){
//             return false;
//         }
//         if(root1 == NULL && root2 != NULL){
//             return false;
//         }

//         bool left = isEqual(root1->left,root2->right);//Symmetric mein yeh acha point hai ki left and right ulta chalega 
//         bool right = isEqual(root1->right,root2->left);

//         bool val = root1->data == root2->data;

//         if(left && right && val){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// bool isSymmetric(TreeNode<int> *root)
// {
//    bool ans = isEqual(root->left, root->right);//Yeh sexy way hai ek tree ko break krne ka left and right mein
//    return ans;
// }


/*Question - 7, Sum Tree Problem*/
// pair<bool,int> isSumTreeFast(TreeNode<int>* root){
//     if(root == NULL){
//         pair<bool,int> p = make_pair(true,0);
//         return p;
//     }
//     if(root->left == NULL && root->right == NULL){
//         pair<bool,int> p = make_pair(true,root->val);
//         return p;
//     }

//     pair<bool,int> leftAns = isSumTreeFast(root->left);
//     pair<bool,int> rightAns = isSumTreeFast(root->right);

//     bool left = leftAns.first;
//     bool right = rightAns.first;

//     bool condition = root->val == leftAns.second + rightAns.second;
//     pair<bool,int>ans;
//     if(left && right && condition){
//       ans.first = true;
//       ans.second = 2*root->val;
//     }
//     else{
//         ans.first = false;
//     }
//     return ans;
// }
// bool isSumTree(TreeNode<int>* root) {
//     bool ans = isSumTreeFast(root).first;
//     return ans;
// }



/*Question - 8, Count no of nodes in a tree*/
// class Solution {
// public:
// void solve(TreeNode* root, int &count){
//     if(root == NULL){
//         return;
//     }

//     solve(root->left,count);.
//     if(root!= NULL){
//         count++;
//     }
//     solve(root->right,count);
//     }
//     int countNodes(TreeNode* root) {
//         int count = 0;
//         solve(root,count);
//         return count;
//     }
// };


/*Question - 9, Special Binary tree in codestudio question*/
// bool solve(BinaryTreeNode<int>* root1,BinaryTreeNode<int>* root2){
//     if(root1 == NULL && root2 == NULL){
//         return true;
//     }
//      if(root1 != NULL && root2 == NULL){
//         return false;
//     }
//      if(root1 == NULL && root2 != NULL){
//         return false;
//     }
//     bool left = solve(root1->left,root1->right);
//     bool right = solve(root2->left,root2->right);

//     if(left && right){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// bool isSpecialBinaryTree(BinaryTreeNode<int>* root)
// {
//    bool ans = solve(root->left, root->right);
//    return ans;
// }

/*Keep Grinding Bro, Let Noone make you take your eyes of the target*/


/*Question - 10, Zig Zag Traversal of a Binary Tree, A bit tough question but steps smjh saare hojaega phir.
Code ko line by line notebook pe samjhaya hai, check it out*/
// vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
// {
//    vector<int>result;
//    if(root == NULL){
//        return result;
//    }
//    queue<BinaryTreeNode<int> *>q;
//    q.push(root);

//    bool lefttoRight = true;
//    while(!q.empty()){
//        int size = q.size();
//        vector<int>ans(size);
//        //Level Process
//        for(int i=0;i<size;i++){
//            BinaryTreeNode<int> *frontNode = q.front();
//            q.pop();

//            //Normal Insert or Reverse Insert
//            int index = lefttoRight?i:size-i-1;
//            ans[index] = frontNode->data;

//            if(frontNode->left){
//                q.push(frontNode->left);
//            }
//            if(frontNode->right){
//                q.push(frontNode->right);
//            }
//        }
//        lefttoRight = !lefttoRight;

//        for(auto i:ans){
//            result.push_back(i);
//        }
//    }
//    return result;
// }

/*Question - 11, Boundary Traversal of a Binary Tree*/

// void traverseLeft(TreeNode<int> *root,vector<int>&ans){
//     if(root==NULL || root -> left == NULL && root->right == NULL){
//         //Either root NULL hai yaa phir leaf node wala case hai
//         return;
//     } 
//     ans.push_back(root->data);
//     if(root->left){
// Condition basically refers to ki if root -> left != NULL hai bas yeh != NULL likhne ki zaroorat nahi hoti
//         traverseLeft(root->left,ans);
//     }
//     else{
//         traverseLeft(root->right,ans);
//     }
// }


// void traverseLeaf(TreeNode<int> *root,vector<int>&ans){
//     if(root == NULL){
//         return;
//     }
//     if(root->left == NULL && root->right == NULL){
//         //Basically purre tree vich ghume but store sirf leafnodes kitiyan, and Inorder traversal required order vich store krvadega
//         ans.push_back(root->data);
//         return;
//     }
//     //Purra Tree traverse kita
//     traverseLeaf(root->left,ans);
//     traverseLeaf(root->right,ans);
// }


// void traverseRight(TreeNode<int> *root,vector<int>&ans){
//       if(root==NULL || root -> left == NULL && root->right == NULL){
//         //Either root NULL hai yaa phir leaf node wala case hai
//         return;
//     }
//     if(root->right) {
//         traverseRight(root->right,ans);
//     }
//     else{
//         traverseRight(root->left,ans);
//     }
//     ans.push_back(root->data);
// }
// vector<int> traverseBoundary(TreeNode<int> *root)
// {
// 	vector<int>ans;
//       if(root==NULL){
//         return ans;
//     } 
//     ans.push_back(root->data);//Root daaldi andar
//     traverseLeft(root->left,ans);//Left wala portion

//     //Left Subtree ki leafnodes
//     traverseLeaf(root->left,ans);
//     //Right Subtree ki leafnodes
//     traverseLeaf(root->right,ans);

//     traverseRight(root->right,ans);//Right wala portion
// }

/*Question - 12, Vertical Order Traversal, Thoda tough question, Explained line by line with theory on notebook*/
// vector<int> verticalOrderTraversal(TreeNode<int> *root)
// {
//    map<int,map<int,vector<int> > > nodes;
//    queue<pair<TreeNode<int> *,pair<int,int> > > q;
//    vector<int>ans;

//    if(root == NULL){
//        return ans;
//    }

//    q.push(make_pair(root,make_pair(0,0)));//Bcz starting mein HD and level dono 0 hain
//    while(!q.empty()){
//        pair<TreeNode<int> *,pair<int,int> > temp = q.front();//Basically yeh TreeNode<int> * temp hai
//        q.pop();
//        TreeNode<int> *frontNode = temp.first;
//        int hd = temp.second.first;
//        int lvl = temp.second.second;

//        nodes[hd][lvl].push_back(frontNode->data);
//        if(frontNode -> left){
//            q.push(make_pair(frontNode->left,make_pair(hd-1,lvl+1)));
//        }
//        if(frontNode -> right){
//            q.push(make_pair(frontNode->right,make_pair(hd+1,lvl+1)));
//        }

//    }
//    for(auto i: nodes){
//        for(auto j : i.second){
//            for(auto k : j.second){
//                ans.push_back(k);
//            }
//        }
//    }
//    return ans;
// }


/*Question - 13, Top View of the Binary Tree, Theory and explaination of code on notebook*/
// vector<int> getTopView(TreeNode<int> *root)
// {
//   vector<int>ans;
//   if(root == NULL){
//       return ans;
//   }
//   map<int,int>topNode;//hd se Node ki mapping hai yeh
//   queue<pair<TreeNode<int> *,int> >q;//Node and int where int hd darshata hai
//   q.push(make_pair(root,0));

//   while(!q.empty()){
//       pair<TreeNode<int> *,int>temp = q.front();
//       q.pop();

//       TreeNode<int> *frontNode = temp.first;
//       int hd = temp.second;

//       //if 1 value is present for an hd already then do nothing, Basically baaki discard krdo
//       if(topNode.find(hd)==topNode.end()){
//           //Yeh condition ka matlab hai ki topNode mein find krre hain hd ka data, agar woh naa mila toh
//           topNode[hd] = frontNode -> data;
//       }
//       if(frontNode->left){
//           q.push(make_pair(frontNode->left,hd-1));
//       }
//       if(frontNode->right){
//           q.push(make_pair(frontNode->right,hd+1));
//       }
//   }
//   for(auto i : topNode){
//       ans.push_back(i.second);
//   }
//   return ans;
// }

/*Question - 14, Bottom View of the Binary Tree*/
// vector<int> bottomView(TreeNode<int> * root){

//   vector<int>ans;
//   if(root == NULL){
//       return ans;
//   }
//   map<int,int>topNode;//hd se Node ki mapping hai yeh
//   queue<pair<TreeNode<int> *,int> >q;//Node and int where int hd darshata hai
//   q.push(make_pair(root,0));

//   while(!q.empty()){
//       pair<TreeNode<int> *,int>temp = q.front();
//       q.pop();

//       TreeNode<int> *frontNode = temp.first;
//       int hd = temp.second;
//       topNode[hd] = frontNode -> data;
      
//       if(frontNode->left){
//           q.push(make_pair(frontNode->left,hd-1));
//       }
//       if(frontNode->right){
//           q.push(make_pair(frontNode->right,hd+1));
//       }
//   }
//   for(auto i : topNode){
//       ans.push_back(i.second);
//   }
//   return ans;

// }


/*Question - 15, Left Side View of a Binary Tree*/
// void solve(BinaryTreeNode<int> *root,int level,vector<int>&ans){
//     if(root == NULL){
//         return;
//     }
//     if(level == ans.size()){
//         ans.push_back(root->data);
//     }
//     solve(root->left,level+1,ans);
//     solve(root->right,level+1,ans);
// }


// vector<int> printLeftView(BinaryTreeNode<int> *root)
// {
//    int level = 0;
//    vector<int>ans;
//    solve(root,0,ans);
//    return ans;
// }


/*Question - 16, Right Side View of a Binary Tree*/
// void solve(BinaryTreeNode<int> *root,int level,vector<int>&ans){
//     if(root == NULL){
//         return;
//     }
//     if(level == ans.size()){
//         ans.push_back(root->data);
//     }
//     solve(root->right,level+1,ans);
//     solve(root->left,level+1,ans);
// }


// vector<int> printRightView(BinaryTreeNode<int> *root)
// {
//    int level = 0;
//    vector<int>ans;
//    solve(root,0,ans);
//    return ans;
// }

/*Question - 18, Path Sum of a Binary Tree, Khud kiya yeh*/
// void solve(TreeNode* root, int &ans, int target, int sum){
//     if(root == NULL){
//         return;
//     }
//     if(root->left == NULL && root->right == NULL){
//         sum = sum + root->val;
//         if(sum == target){
//             ans++;
//         }
      
//     }
//     sum = sum + root->val;
//     solve(root->left,ans,target,sum);
//     solve(root->right,ans,target,sum);
// }

// int pathSum(TreeNode* root, int target)
// {
//     int ans = 0;
//     solve(root,ans,target,0);
//     return ans;
// }

/*Question - 18, Lowest Common Ancestor in a Binary Tree*/
// BinaryTreeNode<int>* findLCA(BinaryTreeNode<int>* root, BinaryTreeNode<int>* u, BinaryTreeNode<int>* v) {
    
//     if(root == NULL){
//         return NULL;
//     }
//     if(root->data == u->data || root->data == v->data){
//         return root;
//     }
//     BinaryTreeNode<int>*leftAns = findLCA(root->left,u,v);
//     BinaryTreeNode<int>*rightAns = findLCA(root->right,u,v);

//     if(leftAns != NULL && rightAns != NULL){
//         return root;
//     }
//     else if(leftAns == NULL && rightAns != NULL){
//         return rightAns;
//     }
//     else if(leftAns != NULL && rightAns == NULL){
//         return leftAns;
//     }
//     else{
//         //Dono he NULL hain
//         return NULL;
//     }
    
// }

/*Question - 19, K Path Sums, Given a hard question but not that hard*/
// void solve(TreeNode < int > * root, int k, vector<int>ans, int &count){
//     if(root == NULL){
//         return;
//     }
//     ans.push_back(root->data);
//     solve(root->left,k,ans,count);
//     solve(root->right,k,ans,count);

//     int size = ans.size();
//     int sum = 0;

//     for(int i=size-1;i>=0;i--){
//         sum = sum + ans[i];
//         if(sum == k){
//             count++;
//         }
//     }
//     ans.pop_back();
// }

// int noWays(TreeNode < int > * root, int k) {
//     vector<int>ans;
//     int count = 0;
//     solve(root,k,ans,count);
//     return count;
// }


/*Question - 20, Kth Ancestor in a Binary Tree*/
// BinaryTreeNode<int> *solve(BinaryTreeNode<int> *root, int targetNodeVal, int &k){
//     if(root == NULL){
//         return NULL;
//     }
//     if(root -> data == targetNodeVal){
//         return root;
//     }

//    BinaryTreeNode<int> *leftAns = solve(root->left,targetNodeVal,k);
//    BinaryTreeNode<int> *rightAns = solve(root->right,targetNodeVal,k);

//    if(leftAns != NULL && rightAns == NULL){
//        k--;
//        if(k == 0){
//        return root;
//        }
//        return leftAns;
//    }
//    else if(leftAns == NULL && rightAns != NULL){
//         k--;
//        if(k == 0){
//        return root;
//        }
//        return rightAns;
//    }
//    else{
//        return NULL;
//    }
// }

// int findKthAncestor(BinaryTreeNode<int> *root, int targetNodeVal, int k) {
//    BinaryTreeNode<int> *ans = solve(root,targetNodeVal,k);
//    if(ans == NULL || ans->data == targetNodeVal){
//        return -1;
//    }
//    return ans->data;
// }



/*Question - 21, Maximum Sum of Non adjacent nodes in a Binary Tree*/
// pair<int,int>solve(TreeNode<int> *root){
//   if (root == NULL) {
//     pair<int, int> p = make_pair(0, 0);
//     return p;
//   }

//   pair<int, int> left = solve(root->left);
//   pair<int, int> right = solve(root->right);

//   pair<int,int> res;
  
//   res.first = root->data + left.second + right.second;
//   res.second = max(left.first,left.second) + max(right.first,right.second);
//   return res;

// }
// int maximumSumOfNodes(TreeNode<int> *root)
// {
//    pair<int,int> ans = solve(root);
//    return max(ans.first,ans.second);
// }


/*Question - 22, Create a Binary Tree using Using PreOrder and Inorder Traversal*/

// int findPosition(vector<int> &inorder,int element, int size){
// //To find the position of that element in Inorder this loop has been used
//     for(int i=0;i<size;i++){
//         if(inorder[i] == element)
//         return i;
//     }
//     return -1;
// }
// TreeNode<int> *solve(vector<int> &inorder, vector<int> &preorder,int &preOrderIndex, int InorderStart, int InorderEnd,int size){
//     if(preOrderIndex >= size || InorderStart > InorderEnd){
//         return NULL;
//     }

//     int element = preorder[preOrderIndex++];
//    TreeNode<int> *root = new TreeNode<int>(element);
//     int position = findPosition(inorder,element,inorder.size());
//     root -> left = solve(inorder,preorder,preOrderIndex,InorderStart,position-1,size);
//     root -> right = solve(inorder,preorder,preOrderIndex,position+1,InorderEnd,size);
//     return root;
// }
// TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
// {
// 	 int preOrderIndex = 0;
//      TreeNode<int> *ans = solve(inorder,preorder,preOrderIndex,0,inorder.size()-1,inorder.size());
//      return ans;
// }



/*Question - 22, Create a Binary Tree using Using PostOrder and Inorder Traversal*/

//  int findPosition(vector<int>& inOrder,int element,int size){
//       for(int i=0;i<size;i++){
//            if(inOrder[i] == element){
//                 return i;
//            }
//       }
//       return -1;
//  }
//  TreeNode<int>*solve(vector<int>& postOrder, vector<int>& inOrder,int &index, int start, int end, int size){
//       if(index < 0 || start > end){
//            return NULL;
//       }
//       int element = postOrder[index--];
//       TreeNode<int>* root = new TreeNode<int>(element);
//       int position = findPosition(inOrder,element,size);
//       root->right =  solve(postOrder,inOrder,index,position+1,end,size);
//       root->left =  solve(postOrder,inOrder,index,start,position-1,size);
//      return root;

//  }

// TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder){
// 	int PreOrderIndex = postOrder.size()-1;
//    TreeNode<int>* ans = solve(postOrder,inOrder,PreOrderIndex,0,postOrder.size()-1,postOrder.size());
//    return ans;
// }


/*Question - 23, Minimum time to burn a Binary Tree*/


// BinaryTreeNode<int>* createParentMapping(BinaryTreeNode<int>* root, int start,map<BinaryTreeNode<int>*,BinaryTreeNode<int>*> &NodeToParent){
//    BinaryTreeNode<int>* res = NULL;
//    queue<BinaryTreeNode<int>*>q;
//    q.push(root);
//    NodeToParent[root] = NULL;//Bcz root ka toh parent he nahi hai

//    while(!q.empty()){
//        BinaryTreeNode<int>* front = q.front();
//        q.pop();

//        if(front->data == start){
//            res = front;
//        }
//        if(front->left){
//            NodeToParent[front->left] = front;
//            q.push(front->left);
//        }
//        if(front->right){
//            NodeToParent[front->right] = front;
//            q.push(front->right);
//        }
//    }
//    return res;
// }
// int BurnTree(BinaryTreeNode<int>* root,map<BinaryTreeNode<int>*,BinaryTreeNode<int>*>&NodeToParent){
//     map<BinaryTreeNode<int>*, bool> visited;
//     queue<BinaryTreeNode<int>*>q;

//     q.push(root);
//     visited[root] = true;

//     int ans = 0;

//     while(!q.empty()){
//         bool flag = 0;
//         int size = q.size();
//         for(int i=0;i<size;i++){
//             BinaryTreeNode<int>* front = q.front();
//             q.pop();

//             if(front->left && !visited[front->left]){
//                 flag = 1;
//                 q.push(front->left);
//                 visited[front->left] = 1;
//             }
//             if(front->right && !visited[front->right]){
//                 flag = 1;
//                 q.push(front->right);
//                 visited[front->right] = 1;
//             }
//             if(NodeToParent[front] && !visited[NodeToParent[front]]){
//                 flag = 1;
//                 q.push(NodeToParent[front]);
//                 visited[NodeToParent[front]] = 1;
//             }
//         }

//         if(flag == 1){
//             ans++;
//         }

//     }
//    return ans;
// }

// int timeToBurnTree(BinaryTreeNode<int>* root, int start)
// {
//     /*Step - 1 Create NodeToParent Mapping
//     Step - 2 Find Target Node
//     Step - 3 Burn the tree in minimum time */
    
//     map<BinaryTreeNode<int>*,BinaryTreeNode<int>*>NodeToParent;
//     BinaryTreeNode<int>* TargetNode = createParentMapping(root,start,NodeToParent);

//     int ans = BurnTree(TargetNode,NodeToParent);

//     return ans;
    
// }


/*Question - 24, Flatten a Binary Tree into a Linked List*/
// class Solution {
// public:
//     void flatten(TreeNode* root) {
//         TreeNode* curr = root;
//         while(curr!=NULL){
//             if(curr->left){
//                 TreeNode* pred = curr->left;
//                 while(pred->right){
//                     pred = pred->right;
//                 }
//                 pred->right = curr->right;
//                 curr->right = curr->left;
//                 curr->left = NULL;//Sarre lefts ko equal to NULL krdiya
//             }
//             curr = curr->right;
//         }
//     }
// };

/*Keep grinding bro, We ain't Motherfuckin stopping, Fuck her toooooooooo*/

