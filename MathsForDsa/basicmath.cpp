#include<iostream>
#include<vector>
using namespace std;
//Count the Number of digits
// class Solution {
// public:
//     int countDigit(int n) {
//         int c=0;
//         while(n>0){
//             n = n/10;
//             c+=1;

//         }
//         cout<<"Number Of digits: "<<c;
//     }

// };
// int main(){
//     Solution ob ;
//     int x;
//     cin>>x;
//     ob.countDigit(x);
// }
//Time Complexity= O(log10(N))

//Reverse of a number
// class Solution {
// public:
//     int reverse(int x) {
//         int rev=0;
//         while(x!=0){
//             int n = x%10;
//             rev= (rev*10)+n;
//             x=x/10;
        
//        } 
//        return rev;
//     }
// };
// int main(){
//     int n;
//     cin>>n;
//     Solution ob;
//     int y = ob.reverse(n);
//     cout<<y;
// }




// Pallindrome
// class Solution {
// public:
//     bool isPalindrome(int n) {
//         int ld=0;
//         int v=n;
//         while (n>0){
//             int r= n%10;
//             ld=(ld*10)+r;
//             n = n/10;
//         }
//         if (v==ld){
//             return true;
//         }
//         else{
//             return false;
//         }

//     }
// };
// int main(){
//     int x;
//     cin>>x;
//     Solution ob;
//     if(ob.isPalindrome(x)){
//         cout<<"Yes";
//     } else{
//         cout<<"NO";
//     }
// }


// Armstrong Number
// class Solution {
// public:
//     bool isArmstrong(int n) {
//         int o =n;
//         int s=0;
//         int d=0;
//         int t=n;
//         while(t>0){
//             d++;
//             t/=10;
//         }
//         t=n;
//         while(t>0){
//             int r = t%10;
//             int n= 1;

        
//         for(int i =0; i<d;i++){
//             n*= r;
//         }
//         s+=n;
//         t/=10;
//     }
//     return s==o;


//     }
// };
// int main() {
//     int x;
//     cin >> x;
//     Solution ob;
//     if (ob.isArmstrong(x)) {
//         cout << "Armstrong Number";
//     } else {
//         cout << "Not Armstrong Number";
//     }
// }

//Print all Divisors
// class Solution {
// public:
//     vector<int> divisors(int n) {
//         vector<int>r;
//         for(int i=1; i<=n;i++){
//             if(n%i==0){
//                 r.push_back(i);
//             }
//         }
//         return r;
//     }
// };
// int main(){
//     int x;
//     cin>>x;
//     Solution ob;
//     vector<int> a= ob.divisors(x);
//     for(int d:a){
//         cout<<d<<" ";
//     }

// }




//Check Prime
// class Solution {
// public:
//     bool isPrime(int n) {
//         int c =0;
//         for(int i=1;i<n;i++){
//             if(n%i==0){
//                 c++;
//                 if((n/i)!=i)c++;
//             }
//         }
//         if(c>=2) return true;
//         else return false;
//     }
// };
// int main(){
//     int x;
//     cin>>x;
//     Solution ob;
//     bool v = ob.isPrime(x);
//     cout<<(v ? "Prime":"Not Prime");
// }


//GCD(Using Eucledian Algorithm)
// class Solution {
// public:
//     int GCD(int n1, int n2) {
//         while (n2 != 0) {
//             int temp = n2;
//             n2 = n1 % n2;
//             n1 = temp;
//         }
//         return n1;
//     }
// };
