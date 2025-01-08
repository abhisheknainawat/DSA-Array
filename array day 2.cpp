/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream> // Include iostream for C++
#include <algorithm> // Include algorithm for sort
using namespace std;

// Find median of an array
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


// Replace all the 0’s with 1 in a given integer

#include <iostream>
using namespace std;

int replaceZerosWithOnes(int num) {
   if (num == 0) {
      return 1;
   }
   int ans = 0, tmp = 1;
   while (num > 0) {
      int d = num % 10;
      if (d == 0) {
         d = 1;
      }
      ans = d * tmp + ans;
      num = num / 10;
      tmp = tmp * 10;
   }
   return ans;
}
int main() {
   int n = 204;
   int result = replaceZerosWithOnes(n);
   cout << "After replacing zeros with ones " << n << " becomes " << result;
}