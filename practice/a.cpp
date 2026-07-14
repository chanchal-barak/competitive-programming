#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <bitset>
#include <numeric>
using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         for (int k = 0; k < i+1; k++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = n-2; i >= 0; i--) {
//         for (int k = 0; k < i+1; k++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int k=0;k<i+1;k++){
//             cout<<k+1;
//         }
//         for(int k=0;k<2*(n-i-1);k++){
//             cout<<" ";
//         }
//         for(int k=i;k>=0;k--){
//             cout<<k+1;
//         }
//         cout<<endl;
//     }
//     return 0;

// }
// int main(){
//     int n;
//     cin>>n;
//     int num=1;
//     for(int i=0;i<n;i++){
//         for(int k=0;k<i+1;k++){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
//     return 0;

// }


// int dig(int n){
//     int count=0;
//     while(n>0){
//         count++;
//         n/=10;
//     }
//     return count;
// }
// int armstrong(int n){
//     int d=dig(n);
//     int rem=0,sum=0;
//     while(n>0){
//         rem=n%10;
//         sum+=pow(rem,d);
//         n/=10;
//     }
//     return sum;

// }
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
    
//     cout<<armstrong(n);
//     return 0;
// }

// vector<int> divisor(int n){
//     vector<int> divs;
//     for(int i=1;i<=sqrt(n);i++){
//         if(n%i==0){
//             divs.push_back(i);
//             if(i!=n/i){
//                 divs.push_back(n/i);
//             }
//         }
//     }
//     return divs;
// }
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     vector<int> divs=divisor(n);
//     cout<<"Divisors of "<<n<<" are: ";
//     for(int d:divs){
//         cout<<d<<" ";
//     }
//     return 0;
// }

// class Solution {
// public:
//     // Recursive function to print numbers from current to n using backtracking
//     void printNumbers(int current, int n) {
//         // Base case: if current exceeds n, stop recursion
//         if (current > n)
//             return;

//         // Recursive call with next number
//         printNumbers(current + 1, n);

//         // Print current number during backtracking
//         cout << current << " ";
//     }
// };

// int main() {
//     Solution sol;
//     int n = 10;

//     sol.printNumbers(1, n);
//     cout << "\n";

//     return 0;
// }

// class Solution {
// public:
//     // Recursive function to find sum of first N natural numbers
//     int sumOfNaturalNumbers(int N) {
//         int sum=0;
//         // Base case: if N is 1, return 1
//         if (N == 1) {
//             return 1;
//         }
//         // Recursive case: current number + sum of previous numbers
//         sum += N + sumOfNaturalNumbers(N - 1);
//         return sum;
//     }
// };

// int main() {
//     Solution obj;
//     int N;
//     cin >> N;
//     cout << obj.sumOfNaturalNumbers(N) << endl;
//     return 0;
// }

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int k=0;k<n-i-1;k++){
            cout<<" ";
        }
        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
