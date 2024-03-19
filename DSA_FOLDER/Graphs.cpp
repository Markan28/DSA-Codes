#include<iostream>
#include<unordered_map>
#include<vector>
#include<list>
using namespace std;
// template <typename T> // Iska Use krke Generic krr skte hain LHS wali cheez ko
// class graph{
//     public:
//     unordered_map<T, list<T>>adj;

//     void addEdge(T u, T v, bool direction){
//         //Direction = 0 means undirected graph
//         //Direction = 1 means directed graph

//         //Create an edge from u to v
//         adj[u].push_back(v);

//         if(direction == 0){
//             adj[v].push_back(u);
//         }
//     }

//     void printAdjList(){
//         for(auto i:adj){
//             cout<<i.first<<"->";//Int wala part print hoga
//             for(auto j:i.second){
//                 cout<<j<<", ";//list wali cheez print hogi
//             }
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     int n;
//     cout<<"Enter the number of Nodes"<<endl;
//     cin>>n;
//     int m;
//     cout<<"Enter the number of edges"<<endl;
//     cin>>m;

//     graph<int>g;

//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;

//         //Creating an Undirected graph , therefore direction is 0
//         g.addEdge(u,v,0);
//     }

//     //Printing Graph
//     g.printAdjList();
// }


//Question - 1, Creating and Printing and Undirected Graph, Full Explaination on Notebook

// vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
//     vector<int>ans[n];
//     for(int i=0;i<m;i++){
//         int u = edges[i][0];//Left wala element
//         int v = edges[i][1];//Uske Corresponding Right wala element

//         ans[u].push_back(v);// u and v mein edge banadi
//         ans[v].push_back(u);//Because Undirected graph hai therefor v k liye bhi u jayega

//     }

//     vector<vector<int>>adj(n);
//     //Output mein pehle LHS print hota hai, then uske corresponding jo edges hoti hai woh print hoti hai
//     for(int i=0;i<n;i++){
//         adj[i].push_back(i);//Pehle i he daaldo which is our LHS

//         //Ab RHS

//         for(int j=0;j<ans[i].size();j++){
//             adj[i].push_back(ans[i][j]);
//         }
//     }

//     return adj;
// }


// Question - 2, BFS Traversal , Logic sahi hai pata nahi submit kyon nahi ho reha
// #include<bits/stdc++.h>
// void prepareAdjList(unordered_map<int, list<int>>&adjList,vector<pair<int,int>> &adj){
//     for(int i=0;i<adj.size();i++){
//         int u = adj[i].first;//Left wala element
//         int v = adj[i].second;//Uske Corresponding Right wala element

//         adjList[u].push_back(v);
//         adjList[v].push_back(u);
        
//     }
// }


// void bfs(unordered_map<int, list<int>>&adjList,unordered_map<int,bool>&visited,vector<int>&ans, int node){
     
//     queue<int>q;
//     q.push(node);
//     visited[node] = 1;

//     while(!q.empty()){
//         int frontNode = q.front();
//         q.pop();
//         ans.push_back(frontNode);

//         //Traversing all neighbours of FrontNode
//         for(auto i:adjList[frontNode]){
//             if(!visited[i]){
//                 q.push(i);
//                 visited[i] = 1;
//             }
//         }
//     }
// }

// vector<int> bfsTraversal(int n, vector<pair<int,int>> adj){
//     unordered_map<int, list<int>>adjList;
//     vector<int>ans;
//     unordered_map<int,bool>visited;

//     prepareAdjList(adjList,adj);

//     // Traverse All Components of Graph

//     for(int i=0;i<n;i++){
//         if(!visited[i]){
//             bfs(adjList,visited,ans,i);
//         }
//     }


//     return ans;
// }

//Question - 2, DFS Traversal
// void dfs(int node,unordered_map<int,bool>&visited,unordered_map<int,list<int>>&adj,vector<int>&component){
//     //Jo bhi Component pehle aaya hai usko store krlo
//     component.push_back(node);//Left hand side wala i.e. 0 1 2 3 4 and so on
//     visited[node] = true;

//     //Har connected Node k liye recursive call
//     for(auto i:adj[node]){
//         if(!visited[i]){
//             dfs(i,visited,adj,component);
//         }
//     }
// }

// vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
// {
    // //Prepare Adjacency List
    // unordered_map<int,list<int>>adj;
    // for(int i=0;i<edges.size();i++){
    //     int u = edges[i][0];
    //     int v = edges[i][1];

    //     adj[u].push_back(v);
    //     adj[v].push_back(u);

//     }

//     vector<vector<int>>ans;
//     unordered_map<int,bool>visited;

//     for(int i=0;i<V;i++){
//      if(!visited[i]){
//         vector<int>component;//Ek component toh humein yahin se mil jaega
//         dfs(i,visited,adj,component);
//         ans.push_back(component);
//      }

//     }

//     return ans;

// }

//Question - 3, Dijkstra Problem

// #include <bits/stdc++.h> 
// vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
//     //Create Adjacency list
//     unordered_map<int, list<pair<int,int>>> adj;
//     for(int i=0;i<edges;i++){
//         int u = vec[i][0]; //Pehli Node
//         int v = vec[i][1]; //Doosri Node
//         int w = vec[i][2]; //Weight

//         adj[u].push_back(make_pair(v,w));
//         adj[v].push_back(make_pair(u,w));

//     }

//     vector<int> dist(vertices); // dist banaya vertices ki length ka
//     for (int i = 0; i < vertices; i++) {
//         dist[i] = INT_MAX;
//     }

//         set<pair<int,int>> st;
//         dist[source] = 0;
//         st.insert(make_pair(0,source)); // Distance and sourceNode ka pair insert krdiya

//         while(!st.empty()){
//             // Fetch top record
//             auto top = *(st.begin()); // set automatically minimum wala deta hai
//             int nodeDist = top.first;
//             int topNode = top.second;

//             st.erase(st.begin()); // Top element remove krdiya

//             // Traversing on Neighbours
//             for(auto neighbour : adj[topNode]){// Neighbour belong kradiya jo bhi hamari topNode aayi thi
//                 if(nodeDist + neighbour.second < dist[neighbour.first]){
//  /* Matlab yeh hai ki nodeDist toh jo previous wali thi jaise (0,0) k case mein 0 and then
//  jo node 0 hai uski adj list k according 0.second hoga weight and 0.first hoga jiss node pe jaara
//  hai woh wali node */    
//                 auto record = st.find(make_pair(dist[neighbour.first],neighbour.first));
//                 // If record found
//                 if(record != st.end()){
//                     // end wala toh khud he hoajega erase
//                   st.erase(record);
//                 }   

//                 dist[neighbour.first] = nodeDist + neighbour.second;
//                 //Jo sir pe hota hai and jo naya aaya

//                 //record push            
//                 st.insert(make_pair(dist[neighbour.first], neighbour.first));
//                 }
//             }
//         }

//         return dist;
    
// }

//Question - 4, Prim's Algorithm
// #include <bits/stdc++.h> 
// vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
// {
//     // Create Adjacency list
//     unordered_map<int , list<pair<int,int>>> adj;

//     for(int i=0;i<g.size();i++){
//         int u = g[i].first.first;
//         int v = g[i].first.second;
//         int w = g[i].second;

//         adj[u].push_back(make_pair(v,w));
//         adj[v].push_back(make_pair(u,w));
//     }

//     vector<int>key(n+1); // Indexes 1 to 5 chalre hain that's why n+1 kiya where n is nodes
//     vector<bool>mst(n+1);
//     vector<int>parent(n+1);

//     for(int i=0;i<=n;i++){
//         key[i] = INT_MAX;
//         parent[i] = -1;
//         mst[i] = false;
//     }

//     key[1] = 0;
//     parent[1] = -1;

//     for(int i=1;i<n;i++){
//         int mini = INT_MAX;
//         int u;

//         for(int v=1;v<=n;v++){
//           if (mst[v] == false && key[v] < mini) {
//             u = v;
//             mini = key[v];
//             // min wali node nikal gyi itne process se
//           }
//         }
    
        
//         //Mark min node as true
//         mst[u] = true;

//         //Check its adjacent nodes
//         for(auto it: adj[u]){// Isse saari adjacent nodes aajayengi
//         int v = it.first; // Jo node hai
//         int w = it.second; // Jo weight hai

//         if(mst[v] == false && w < key[v]){
//             parent[v] = u;
//             key[v] = w;
//         }

//         }
//     }

//     vector<pair<pair<int, int>, int>> result;
//     for(int i=2;i<=n;i++){
//         // 0 se chalayenge toh mapping galat hojaegi and 1 ka parent -1 hai toh islie 2 se chalayenge
//         result.push_back({{parent[i], i}, key[i]});
//     }
//     return result;
// }

// Cycle Detection in graphs using BFS
// #include<bits/stdc++.h>
// bool isCyclicBFS(int src, unordered_map<int,bool>&visited,unordered_map<int, list<int>>&adj){
//     unordered_map<int,int>parent;

//     parent[src] = -1;
//     visited[src] = 1;
//     queue<int>q;
//     q.push(src);

//     while(!q.empty()){
//         int front = q.front();
//         q.pop();

//         for(auto neighbour: adj[front]){//Saare neighbours nikal liye
//         if(visited[neighbour] == true && neighbour != parent[front]){
//             return true;
//         }
//         else if(!visited[neighbour]){
//             // i.e. Neighbour visited nahi hai toh bass agle element pe chale jao
//             q.push(neighbour);
//             visited[neighbour] = 1;
//             parent[neighbour] = front;
//         }

//         }
//     }
//     return false;
// }

// string cycleDetection (vector<vector<int>>& edges, int n, int m)
// {
//     // Creating adjacency list
//     unordered_map<int, list<int>> adj;
//     for(int i=0;i<m;i++){
//         int u = edges[i][0];
//         int v = edges[i][1];

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
    
//     unordered_map<int,bool>visited;
//     for(int i=0;i<n;i++){
//         if(!visited[i]){
//             bool ans = isCyclicBFS(i,visited,adj);
//             if(ans == 1)
//             return "Yes";
//         }
//     }
//     return "No";
// }


// Using DFS
// bool isCyclicDFS(int node, int parent,unordered_map<int,bool>&visited,unordered_map<int, list<int>>&adj){
//     visited[node] = true;
//     for(auto neighbour: adj[node]){// adjacenecy list se neighbours nikal liye
//         if(!visited[neighbour]){
//          bool cycledetected = isCyclicDFS(neighbour,node,visited,adj);
//          if(cycledetected)
//          return true;
//         }
    
//         else if(neighbour != parent){
//             // Cycle is Present
//             return true;
//         }
//     }
//     return false;
// }

// string cycleDetection (vector<vector<int>>& edges, int n, int m)
// {
    // // Creating adjacency list
    // unordered_map<int, list<int>> adj;
    // for(int i=0;i<m;i++){
    //     int u = edges[i][0];
    //     int v = edges[i][1];

    //     adj[u].push_back(v);
    //     adj[v].push_back(u);
    // }

//     unordered_map<int,bool>visited;
//     for(int i=0;i<n;i++){
//         if(!visited[i]){
//             bool ans = isCyclicDFS(i,-1,visited,adj);
//             if(ans == 1)
//             return "Yes";
//         }
//     }
//     return "No";
// }


// Topological Sort using DFS
// #include <bits/stdc++.h> 
// void topoSort(int node,vector<bool>&visited, stack<int>&s,unordered_map<int,list<int>>&adj){
//     visited[node] = 1;
//     for(auto neighbour : adj[node]){
//        if(!visited[neighbour])
//        topoSort(neighbour,visited,s,adj);

//     }

//     s.push(node);
// }

// vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
//     // Creating adj list
//     unordered_map<int,list<int>> adj;
//     for(int i=0;i<e;i++){
//         int u = edges[i][0];
//         int v = edges[i][1];

//         adj[u].push_back(v);
//     }

//     //Call for Topological Sort 
//     vector<bool>visited(v); // Thoda Optimise krleya
//     stack<int>s;
//     for(int i=0;i<v;i++){
//         if(!visited[i]){
//             topoSort(i,visited,s,adj);
//         }
//     }

//     vector<int>ans;

//     while(!s.empty()){
//         ans.push_back(s.top());
//         s.pop();
//     }

//     return ans;
// }


// Topological Sort using BFS Also Called Kahn's Algo
// #include<bits/stdc++.h>
// vector<int> topologicalSort(vector<vector<int>> &graph, int edges, int nodes) {
//     // Create adj list
//     unordered_map<int,list<int>>adj;
//     for(int i=0;i<edges;i++){
//     int u = graph[i][0];
//     int v = graph[i][1];

//     adj[u].push_back(v);
//     }

//     // Finding all In degrees

//     vector<int>indegree(nodes);
//     for(auto i:adj){
//         for(auto j:i.second){
//             indegree[j]++;// Jo right side pe milta hai adj k uske uoar direct hota hai
//             // Therefore uski degree badhadi
//         }
//     }

//     // 0 Indegree walon ko push krdo
//     queue<int>q;
//     for(int i=0;i<nodes;i++){
//         if(indegree[i] == 0){
//             q.push(i);
//         }
//     }

//     //Do BFS
//     vector<int>ans;
//     while(!q.empty()){
//         int front = q.front();
//         q.pop();

//         ans.push_back(front);

//         // Neighbour Indegree update
//         for(auto neighbour: adj[front]){
//             indegree[neighbour]--;
//             if(indegree[neighbour] == 0)
//             q.push(neighbour);
//         }
//     }
//     return ans;
// }


// Cycle detection in Undirected Graph using BFS
// #include<bits/stdc++.h>
// bool isCyclic(vector<vector<int>>& edges, int v, int e)
// {

//     // Create adj list
//     unordered_map<int,list<int>>adj;
//     for(int i=0;i<e;i++){
//     int u = edges[i][0];
//     int v = edges[i][1];

//     adj[u].push_back(v);
//     }

//     // Finding all In degrees

//     vector<int>indegree(v);
//     for(auto i:adj){
//         for(auto j:i.second){
//             indegree[j]++;// Jo right side pe milta hai adj k uske uoar direct hota hai
//             // Therefore uski degree badhadi
//         }
//     }

//     // 0 Indegree walon ko push krdo
//     queue<int>q;
//     for(int i=0;i<v;i++){
//         if(indegree[i] == 0){
//             q.push(i);
//         }
//     }

//     //Do BFS
//     int count=0;
//     while(!q.empty()){
//         int front = q.front();
//         q.pop();

//         count++;

//         // Neighbour Indegree update
//         for(auto neighbour: adj[front]){
//             indegree[neighbour]--;
//             if(indegree[neighbour] == 0)
//             q.push(neighbour);
//         }
//     }
// 	if(count == v){
// 		return false;
// 	}
// 	else{
// 		return true;
// 	}

// }


// Shortest Path in Undirected Graph
// #include<bits/stdc++.h>
// vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	
// 	    //Prepare Adjacency List
//     unordered_map<int,list<int>>adj;
//     for (int i = 0; i < edges.size(); i++) {
//       int u = edges[i].first;
//       int v = edges[i].second;

//       adj[u].push_back(v);
//       adj[v].push_back(u);
//     }

// 	// Do BFS
// 	unordered_map<int,bool>visited;
// 	unordered_map<int,int>parent;
// 	queue<int>q;
// 	q.push(s); // src node hai s
// 	parent[s] = -1;
// 	visited[s] = true;

// 	while(!q.empty()){
// 		int front = q.front();
// 		q.pop();

// 		for(auto i: adj[front]){
// 			if(!visited[i]){
// 				visited[i] = true;
// 				parent[i] = front;
// 				q.push(i);
// 			}
// 		}
// 	}

// 	// Prepare shortest path

// 	vector<int>ans;
// 	int currentNode = t;
// 	ans.push_back(t);
	
// 	while(currentNode != s){
// 		currentNode = parent[currentNode];
// 		ans.push_back(currentNode);
// 	}

// 	//Reverse bhi krna hai end mein
// 	reverse(ans.begin(),ans.end());

// 	return ans;
// }




//C++ program to find the Shortest Path in a Directed Acyclic Graph
// #include <bits/stdc++.h>
// using namespace std;

// // Graph class implemented using an adjacency list
// class Graph{
// public:
//     int V;  // Number of Vertices
//     int E;  // Number of Edges
//     vector<pair<int, int>> *adj; // adjacency list
//     Graph(int num_vertices, int num_edges){
//         this->V = num_vertices;
//         this->E = num_edges;
//         this->adj = new vector<pair<int, int>>[num_vertices];
//     }
    
//     // function to add Edge
//     void addEdge(int u, int v, int w){
//         adj[u].push_back({v, w});
//     }
    
//     // function that returns the topSort ordering of nodes in a graph
//     vector<int> topSort(int src){

//         //inDegree vector
//         vector<int> indegree(V, 0);

//         // update the indegree of each node in the graph
//         for(int i=0;i<V;++i){
//             for(pair<int, int> node:this->adj[i]){
//                 indegree[node.first]++;
//             }
//         }

//         // queue 
//         queue<int> q;
        
//         // push all nodes with 0 in degree in the queue
//         for(int i=0;i<V;++i){
//             if(indegree[i]==0)
//                 q.push(i);
//         }
        
//         // vector to store topSortOrdering        
//         vector<int> topSortOrdering;
        
//         // run until queue is empty
//         while(!q.empty()){
            
//             // pop the front node
//             int u = q.front();
//             q.pop();

//             // since it has 0 indegree it will occur before all elements 
//             // with non-0 indegree currently
//             topSortOrdering.push_back(u);
            
//             // decrement the indegree of adjacent nodes of the popped node 
//             // by 1
//             for(pair<int, int> node:this->adj[u]){
//                 indegree[node.first]--;
                
//                 // if the indegree of the node is 0
//                 if(indegree[node.first]==0){
                    
//                     // push it to the queue
//                     q.push(node.first);
//                 }
//             }
            
//         }
//         // return the topSortOrdering        
//         return topSortOrdering;
//     }
    
//     //find all the shortest path distances
//     void findShortestPathInDAG(int src){
        
//         // distance vector from the src node
//         vector<int> distances(V, INT_MAX);
        
//         // find the topSort ordering        
//         vector<int> topSortOrdering = topSort(src);
        
//         // initially mark the distance from the source node to itself as 0
//         distances[src]=0;
        
//         // for each vertex in topSortOrdering
//         for(int x:topSortOrdering){
            
//             // if current vertex weight is not INT_MAXinity
//             if(distances[x]!=INT_MAX){
                
//                 // traverse all the adjacent Edges
//                 for(pair<int, int> adjNode : this->adj[x]){
                    
//                     // relax the edges
//                     if(distances[adjNode.first] > distances[x]+adjNode.second){
//                         distances[adjNode.first] = distances[x]+adjNode.second;
//                     }
//                 }   
//             }
//         }
        
//         // print the final distances
        
//         cout<<"The distances from the src node are: ";
//         for(int i=0;i<V;++i){
//             if(distances[i]==INT_MAX) cout<<"INF ";
//             else cout<<distances[i]<<" ";
//         }
//     }
    
// };
// int main() {
//     // Number of Edges and Vertices
//     int num_vertices = 6;
//     int num_edges = 9;

//     Graph G(num_vertices, num_edges); // Graph G
    
//     // add all edges to graph
//     G.addEdge(1, 3, 6);
//     G.addEdge(1, 2, 2);
//     G.addEdge(0, 1, 5);
//     G.addEdge(0, 2, 3);
//     G.addEdge(3, 4, -1);
//     G.addEdge(2, 4, 4);
//     G.addEdge(2, 5, 2);
//     G.addEdge(2, 3, 7);
//     G.addEdge(4, 5, -2);

//     // compute the Shortest_path
//     int src = 1; 
//     G.findShortestPathInDAG(src);
//     return 0;
// }

// Watch Video 94 in case you don't get it.


// Bridge in a Graph

// #include<bits/stdc++.h>
// void dfs(int node, int &timer, vector<int>&disc, vector<int>&low, int parent,unordered_map<int,bool>&visited, vector<vector<int>>&result,unordered_map<int,list<int>>&adj){
//     visited[node] = true;
//     disc[node] = low[node] = timer++;

//     for(auto neighbour : adj[node]){
//         if(neighbour == parent)
//             continue; // Agli iteration pe chale jao

//             if(!visited[neighbour]){
//                 dfs(neighbour,timer,disc,low,node,visited,result,adj);
//                 low[node] =  min(low[node],low[neighbour]);

//                 // Check if edge is bridge
//                 if(low[neighbour] > disc[node]){
//                     vector<int>ans;
//                     ans.push_back(node);
//                     ans.push_back(neighbour);
//                     result.push_back(ans);
//                 }
//             }
//             else{
//                 // Back Edge wala case hai
//                 low[node] = min(low[node],disc[neighbour]);
//             }
        
//     }
// }

// vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e) {
//     unordered_map<int,list<int>>adj;

//     for(int i=0;i<edges.size();i++){
//         int u = edges[i][0];
//         int v = edges[i][1];

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     int timer = 0;
//     vector<int>disc(v);
//     vector<int>low(v);
//     int parent = -1;
//     unordered_map<int,bool>visited;

//     for(int i=0;i<v;i++){
//         disc[i] = -1;
//         low[i] = -1;
//     }

//     vector<vector<int>>result;

//     //DFS
//     for(int i=0;i<v;i++){
//         if(!visited[i]){
//             dfs(i,timer,disc,low,parent,visited,result,adj);
//         }
//     }
//     return result;

// }



// Articulation Points in a Graph, VSCODE pe bhi run hojaega yeh
// int min(int a, int b){
//     if(a<b)
//     return a;

//     return b;
// }

// void dfs(int node, int parent, vector<int>&disc, vector<int>&low, unordered_map<int,bool>&visited, unordered_map<int,list<int>>&adj,vector<int>&ap, int &timer){
//     visited[node] = true;
//     disc[node] = low[node] = timer++;
//     int child = 0;
//     for(auto nbr: adj[node]){
//         if(nbr == parent)
//         continue; // Ignore wala case

//         if(!visited[nbr]){
//             dfs(nbr,node,disc,low,visited,adj,ap,timer);
//             low[node] = min(low[node],low[nbr]);

//             // Check AP or Not
//             if(low[nbr] >= disc[node] && parent != -1){
//                 ap[node] = 1;
//             }
//             child++;
//         }
//         else{
//             low[node] = min(low[node],disc[nbr]);
//         }
//     }
//     if(parent == -1 && child > 1){
//         ap[node] = 1;
//     }
// }
// int main(){
//     int n = 5;
//     int e = 5;
//     vector<pair<int,int>>edges;
//     edges.push_back(make_pair(0,3));
//     edges.push_back(make_pair(3,4));
//     edges.push_back(make_pair(0,4));
//     edges.push_back(make_pair(0,1));
//     edges.push_back(make_pair(1,2));

//     //Adj list
//     unordered_map<int,list<int>>adj;
//     for(int i=0;i<edges.size();i++){
//         int u = edges[i].first;
//         int v = edges[i].second;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     int timer = 0;
//     vector<int>disc(n);
//     vector<int>low(n);
//     unordered_map<int,bool>visited;
//     vector<int>ap(n,0); // Size is n and start hota hai 0 se

//     // Initialisation
//     for(int i=0;i<n;i++){
//         disc[i] = -1;
//         low[i] = -1;
//     }

//     // DFS
//     for(int i=0;i<n;i++){
//         if(!visited[i]){
//             dfs(i,-1,disc,low,visited,adj,ap,timer);
//             // i node hai and -1 uska parent hai
//         }
//     }

//     // Print Articulation points
//     cout<<"Articulation points are as follows : "<<endl;
//     for(int i=0;i<n;i++){
//         if(ap[i] != 0){
//             cout<<i<<" ";
//         }
//     }cout<<endl;
// }


// Kosaraju's Algorithm
// #include<bits/stdc++.h>
// void dfs(int node, unordered_map<int,bool>&visited, stack<int>&st, unordered_map<int,list<int>>&adj){
// 	visited[node] = 1;
// 	for(auto nbr : adj[node]){
// 		if(!visited[nbr]){
// 			dfs(nbr,visited,st,adj);
// 		}
// 	}

// 	st.push(node);
// }

// void revDfs(int node,unordered_map<int,bool>&visited,unordered_map<int,list<int>>&adj){
// 	visited[node] = 1;
// 	for(auto nbr : adj[node]){
// 		if(!visited[nbr]){
// 			revDfs(nbr,visited,adj);
// 		}
// 	}
// }
// int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
// {
// 	// Adj list
// 	unordered_map<int,list<int>>adj;
// 	for(int i=0;i<edges.size();i++){
// 		int u = edges[i][0];
// 		int v = edges[i][1];

// 		adj[u].push_back(v);
// 	}

// 	// Topo Sort
// 	stack<int>st;
// 	unordered_map<int,bool>visited;

// 	for(int i=0;i<v;i++){
// 		if(!visited[i]){
// 			dfs(i,visited,st,adj);
// 		}
// 	}

// 	//Create a Transpose Graph
// 	unordered_map<int,list<int>>transpose;
// 	for(int i=0;i<v;i++){
// 		visited[i] = 0;
// 		for(auto nbr : adj[i]){
// 			transpose[nbr].push_back(i); // Basically direction ulti krdi edge ki
// 		}
// 	}


// 	// DFS
// 	int count = 0;
// 	while(!st.empty()){
//         int top = st.top();
// 		st.pop();
// 		if(!visited[top]){
// 			count++;
// 			revDfs(top,visited,transpose);
// 		}
// 	}
// 	return count;
// }


// Bellman Ford Algorithm, Solve its CodingNinja Problem as well
// #include<bits/stdc++.h>
// int bellmonFord(int n, int m, int src, vector<vector<int>> &edges){
    
//     // Adj List
//     vector<int>dist(n+1,1e9);// Bcz nodes 1 se start hori Thus n+1 size rakha and starting mein ek bada number daal diya
//     dist[src] = 0;
//     ans.push_back(0);

//     for(int i=1;i<=n;i++){ // n-1 times
//         //Traverse all edges
//         for(int j=0;j<m;j++){
//             int u = edges[j][0];
//             int v = edges[j][1];
//             int wt = edges[j][2];

//             if(dist[u] != 1e9 && ((dist[u] + wt) < dist[v])){
//                 dist[v] = dist[u] + wt;
//             }
//         }

        
//     }

//     //Check for negative cycle
//     bool flag = 0;
//     for(int j=0;j<m;j++){
//             int u = edges[j][0];
//             int v = edges[j][1];
//             int wt = edges[j][2];

//             if(dist[u] != 1e9 && ((dist[u] + wt) < dist[v])){
//                 flag = 1; // i.e. Change hua and negative cycle present hai
//             }

//     }
//             if (flag == 0) {
//                 return dist[dest];// where dest is the destination node
//             }
//     return -1;
// }
