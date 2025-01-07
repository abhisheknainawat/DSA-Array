

#include<bits/stdc++.h>
#include<limits.h>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;


// smallest element in an array---->
 
// int sortArr(vector<int>& arr) {
//   int mini=INT_MAX;
//   for(int i=0;i<arr.size();i++){
//       if(arr[i]<=mini){
//           mini=arr[i];
//       }
       
//   }
//   return mini;
// }
// int main() {
//     vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
   
//     cout<<"The smallest element in the array is: "<<sortArr(arr)<<endl;
 
   
//     return 0;
// }



//largest element in an array----->

// int sortArr(vector<int>& arr) {
//     int max= INT_MIN;
//   for(int i=0;i<arr.size();i++){
//       if(arr[i]>=max){
//           max=arr[i];
//       }
       
//   }
//   return max;
// }

 
// int main() {
//     vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
   
//     cout<<"The largest element in the array is: "<<sortArr(arr)<<endl;
 
   
//     return 0;
// }



//Find Second Smallest ------>

// void getElements(int arr[],int n)
// {
//     if(n==0 || n==1)
//         cout<<-1<<" "<<-1<<endl;  // edge case when only one element is present in array
//     sort(arr,arr+n);
//     int small=arr[1];
//     int large=arr[n-2];
//     cout<<"Second smallest is "<<small<<endl;
//     cout<<"Second largest is "<<large<<endl;
// }
// int main()
// {
//     int arr[]={1,2,4,6,7,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     getElements(arr,n);
//     return 0;
// }



//reverse an array--------->

// void printarr(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }

// void RevArr(int arr[],int n){
//     int s=0;
//     int e=n-1;
//     while(s<e){
//         swap(arr[s],arr[e]);
//         s++;
//         e--;
//     }
//     printarr(arr,n);
// }

// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     RevArr(arr,n);
    
// }



//count the frequency of all the elements in an array--------->

 
// void countFreq(int arr[], int n)
// {
//     vector<bool> visited(n, false);
 
//     for (int i = 0; i < n; i++) {
 
//         // Skip this element if already processed
//         if (visited[i] == true)
//             continue;
 
//         // Count frequency
//         int count = 1;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 visited[j] = true;
//                 count++;
//             }
//         }
//         cout << arr[i] << " " << count << endl;
//     }
// }
 
// int main()
// {
//     int arr[] = {10,5,10,15,10,5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     countFreq(arr, n);
//     return 0;
// }



//Rearrange array in increasing-decreasing order---------------->
 
// int main() {
//     vector<int> arr1 = {2,5,1,3,0,4};
//     int n=6;
//     sort(arr1.begin(),arr1.end());
//     for(int i=0;i<n/2;i++){
//         cout<<arr1[i]<<" ";
//     }
//      for(int i=n-1;i>=n/2;i--){
//         cout<<arr1[i]<<" ";
//     }
//     return 0;
// }


//sum off all the elements in an array---------------->

// int main() {
//     int arr1[] = {2,5,1,3,10,4};
//     int n=6;
//     double sum=0;
    
//     for(int i=0;i<n;i++){
         
//         sum += arr1[i];
//     }
//     
//     cout<<sum;
//     return 0;
// }



//sum of all the elements in an array(avg)---------------->

// int main() {
//     int arr1[] = {2,5,1,3,10,4};
//     int n=6;
//     double sum=0;
    
//     for(int i=0;i<n;i++){
         
//         sum += arr1[i];
//     }
//     int avg=sum/n;
//     cout<<avg;
//     return 0;
// }




//finnd median of an array


void findmid(int arr[], int n) {
    // Sort the array
    sort(arr, arr + n);
    
    // Check if n is even
    if (n % 2 == 0) {
        // Compute the average of two middle elements
        double mid = (arr[n / 2] + arr[(n / 2) - 1]) / 2.0;
        cout << mid;
    } else {
        // Return the middle element
        cout << arr[n / 2];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    findmid(arr, n);
    
    return 0;
}
