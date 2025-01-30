#include <stdio.h>
#include <climits>
#include <iostream>
#include <algorithm>

using namespace std;
void find(int arr[],int n){
    int ss=100;
    int s=100;
    int sl=-1;
    int l=-1;
    for(int i=0;i<n;i++){
        s=min(s,arr[i]);
        l=max(l,arr[i]);

    }
    for(int  i=0;i<n;i++ ){
        if(arr[i]<ss && arr[i]!=s){
            sl=arr[i];
        }
        if(arr[i]>sl && arr[i]!=l){
            ss=arr[i];
        }
    }
    cout<<ss<<endl<<sl;
    
}

int main()
{
    int arr[]={1,3,2,5,4};
    int n=5;
    find(arr,n);
    

    return 0;
}

//reverse an array 
#include <iostream>

using namespace std;
//Function to print array
void printArray(int arr[], int n) {
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}
//Function to reverse array 
void reverseArray(int arr[], int n) {
   int p1 = 0, p2 = n - 1;
   while (p1 < p2) {
      swap(arr[p1], arr[p2]);
      p1++; p2--;
   }
   printArray(arr, n);
}
int main() {
   int n = 5;
   int arr[] = { 5, 4, 3, 2, 1};
   reverseArray(arr, n);
   return 0;
}


//cont the frequency of each element

#include <iostream>
using namespace std;

void frequency(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        // Skip the element if it's already been counted
        bool counted = false;
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                counted = true;
                break;
            }
        }

        if (!counted) {
            int c = 0;
            for (int j = 0; j < n; j++) {
                if (arr[i] == arr[j]) {
                    c++;
                }
            }
            cout << arr[i] << " " << c << endl;
        }
    }
}

int main() {
    int n = 5;
    int arr[] = {10, 5, 15, 10, 5};
    frequency(arr, n);
    return 0;
}

//
//sum of all elements in array
Java
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n = 5;
	vector<int>arr = {1, 2, 3, 4, 5};
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (double)arr[i];
	}
	cout <<"The sum of the elements of the array is "<< sum;
}

//leetcode 74 search in a 2d array
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int low=0 , high=n*m-1;
        while(low<= high){
            int mid=(low+high)/2;
            int row=mid/m;
            int col=mid%m;
            if(matrix[row][col]==target) return true;
            else if(matrix[row][col]<target) low=mid+1;
            else high=mid-1;

        }
        return false;
        
    }
};

//leaders in an array

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
void findleaders(vector<int>&arr,int n){
    // vector<int> myArray;
    arr.push_back(arr[n]-1);
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            if(arr[i]==arr[n]){
                arr[i+1]==-1;
            }
            cout<<arr[i]<<" ";
            
        }
        
    }
    
}

int main()
{
    vector<int>arr={5,7,2,0};
    int n=4;
    findleaders(arr,n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<","<<endl;
    // }
    
    return 0;
}

//spiral print the matrix
class Solution {
public:
    int magnificentSets(int n, vector<vector<int>>& edges) {
        vector<vector<int>> graph(n + 1);
        vector<int> visited(n + 1, -1);
        
        for (const auto& edge : edges) {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }

        int maxGroups = 0;
        unordered_set<int> componentNodes;
        
        for (int i = 1; i <= n; i++) {
            if (visited[i] != -1) continue;
            
            componentNodes.clear();
            findConnectedComponent(i, graph, componentNodes);
            
            int maxDepth = -1;
            for (int node : componentNodes) {
                maxDepth = max(maxDepth, getMaxDepth(node, componentNodes, graph, visited));
            }
            
            if (maxDepth == -1) return -1;
            maxGroups += maxDepth;
        }
        
        return maxGroups;
    }

private:
    void findConnectedComponent(int node, vector<vector<int>>& graph, unordered_set<int>& componentNodes) {
        componentNodes.insert(node);
        for (int neighbor : graph[node]) {
            if (componentNodes.count(neighbor) == 0) {
                findConnectedComponent(neighbor, graph, componentNodes);
            }
        }
    }

    int getMaxDepth(int start, unordered_set<int>& componentNodes, vector<vector<int>>& graph, vector<int>& visited) {
        for (int node : componentNodes) visited[node] = -1;
        
        queue<int> q;
        int depth = 1;
        
        q.push(start);
        visited[start] = 1;
        
        while (!q.empty()) {
            int cur = q.front();
            q.pop();
            
            for (int neighbor : graph[cur]) {
                if (visited[neighbor] == -1) {
                    visited[neighbor] = visited[cur] + 1;
                    depth = max(depth, visited[neighbor]);
                    q.push(neighbor);
                } else if (abs(visited[cur] - visited[neighbor]) != 1) {
                    return -1;
                }
            }
        }
        
        return depth;
    }
};