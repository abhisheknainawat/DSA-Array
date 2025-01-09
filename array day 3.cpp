//----------day 3-----------


//find the target in the given array-------->

// #include <iostream>
// using namespace std;

// int FindTarget(int arr[],int t,int n){
//     for (int i=0;i<n;i++){
//         if(arr[i]==t){
//             return i;
//         }
       
//     }
//     return -1;
    
// }

// int main()
// {
//     int arr[]={1,2,3,4,5};
//     int target=5;
//     int n=5;
//     int ans=FindTarget(arr,target,n);
//     if (ans!=-1)
//     cout<<"answer found at index : "<<ans;
//     else
//     cout<<"answer not found"<<endl;
    

//     return 0;
// }





//check if the number is palindrome or not--------->

// #include <iostream>
// using namespace std;
// bool palindrome(int n){
//     int revnum=0;
//     int dup=n;
//     while(n>0){
//         int ld =n%10;
//         revnum=(revnum*10)+ld;
//         n=n/10;
//     }
//     if(dup==revnum)
    
//     return true;
//     else 
//     return false;   
// }

// int main(){
//     int number = 4433244;
//      if (palindrome(number)) {
//         cout << number << " is a palindrome." << endl;
//     } else {
//         cout << number << " is not a palindrome." << endl;
//     }

//     return 0;
// }





//check if the no is even or odd----------->

// #include<bits/stdc++.h>
// using namespace std;

// int remainder(int n) {
//     return (n % 2);
//   }

// int main() {
//     int n = 5;
//     if (remainder(n) == 0) {
//       cout<<n <<" is even.";
//     } else {
//       cout<<n<<" is odd.";
//     }
//   }




//----sum of first n natural numbers-------->

// #include<bits/stdc++.h>
// using namespace std;
//  void solve(int n) {
//     int sum = 0;
//     for (int i = 1; i <= n; i++) {
//       sum += i;
//     }
//     cout<<"The sum of the first "<<n<<" numbers is: "<<sum<<endl;
//   }
//  int main() {

//     solve(5);
//     solve(6);
//   }





// greatest of two numbers--------->

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	double num1 = 1.123, num2 = 1.124;
// 	if (num1 < num2) {
// 		cout <<"The greatest of the two numbers is "<<num2;
// 	}
// 	else {
// 		cout <<"The greatest of the two numbers is " <<num1;
// 	}
// }
  
  
  
  
  
//greatest of three numbers--------->   
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	double num1 = 1, num2 = 3, num3 = 5;
// 	if (num1 > num2 && num1 > num3) {
// 		cout <<"The greatest of the three numbers is "<< num1;
// 	}
// 	else if (num2 > num1 && num2 > num3) {
// 		cout <<"The greatest of the three numbers is "<< num2;
// 	}
// 	else {
// 		cout <<"The greatest of the three numbers is "<< num3;
// 	}
// }





//maximum and minimum digit in a number---------

// #include<bits/stdc++.h>
// using namespace std;
void MinMax(int n)
{
    int d,mini=INT_MAX,maxi=INT_MIN;
    while(n!=0)
    {
        d=n%10;
        mini = min(mini,d);
        maxi=max(maxi,d);
        n=n/10;
    }
    
    cout<<"The minimum number is: "<<mini<<"\n"
        <<"The maximum number is: "<<maxi;
}

int main()
{
    int n = 4726;
    MinMax(n);
    return 0;
}





// sum of digit of a number----------->

int getSum(int n)
{
    int d,sum=0;
    while(n!=0)
    {
        d=n%10;
        sum+=d;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n=472;
    cout<<"Sum of digits of the given number is "<<getSum(n);
    return 0;
}
