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