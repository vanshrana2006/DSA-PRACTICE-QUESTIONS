#include<iostream>
using namespace std;
// //Print name n times
// class Solution{
//     public:
//     void printn(int n, int i){
//         if(i>n) return;
//         cout<<"Vansh"<<endl;
//         printn(n,i+1);
//     }
// };
// int main(){
//     int x;
//     int i = 1;
//     cin>>x;
//     Solution ob;
//     ob.printn(x,i);
// }
//TC and SC are O(N)


// Print linearly from 1 to n
// class Solution{
//     public:
//     void printn(int x,int c){
//         if(c>x)return;
//         cout<<c<<endl;
//         printn(x,c+1);
//     }
// };
// int main(){
//     int a;
//     cin>>a;
//     int c=1;
//     Solution ob;
//     ob.printn(a,c);
// }


//Print from n to 1
// class Solution{
//     public:
//     void printn(int x){
//         if(x==0)return;
//         cout<<x<<endl;
//         printn(x-1);
        
//     }

// };
// int main(){
//     int a;
//     cin>>a;
//     Solution ob;
//     ob.printn(a);
// }



//Print from n to 1 but by backtracking
// class Solution{
//     public:
//     void p(int x,int i){
//         if(i<1)return;
//         cout<<i<<endl;
//         p(x,i-1);
//     }
// };
// int main(){
//     int a;
//     cin>>a;
//     Solution ob;
//     ob.p(a,a);


// }

// Again n to 1 but in simple
// class Solution{
//     public:
//     void p(int x){
//         if(x<=0)return;
//         cout<<x<<endl;
//         p(x-1);
//     }
// };
// int main(){
//     int x;
//     cin>>x;
//     Solution ob;
//     ob.p(x);
// }


// class Solution{
//     public:
//     void p(int x,int i){
//         if(i>x)return;
//         cout<<i<<endl;
//         p(x,i+1);
//     }
// };
// int main(){
//     int x;
//     cin>>x;
//     int i=1;
//     Solution ob;
//     ob.p(x,i);
// }

//Sum of N natural numbers
// class Solution{
//     public:
//     int x=0;
//     int sum(int n){
//         if(n==0)return x;
//         x+=n;
//         return sum(n-1);
//     }
// };
// int main(){
//     int a,b;
//     cin>>a;
//     Solution ob;
//     b=ob.sum(a);
//     cout<<b;
// }

//Factorial of a number
// class Solution{
//     public:
//     int fact(int x){
//         if(x==0)return 1;
//         return x * fact(x-1);
//     }
// };
// int main(){
//     int x,y;
//     cin>>x;
//     Solution ob;
//     y= ob.fact(x);
//     cout<<y;
// }
//TC and SC both are O(N)



//Reversing an array
// class Solution{
//     public:
//     void arr(int a[],int n){
//         if(n<0)return;
//         cout<<a[n]<<endl;
//         arr(a,n-1);
//     }
// };
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     Solution ob;
//     ob.arr(a,n-1);
// }



// class Solution{
//     public:
//     void arr(int a[],int n,int x){
//         if (x<=n) return;
//         swap(a[n],a[x]);
//         arr(a,n+1,x-1);   
//     }
// };



// class Solution{
//     public:
//     void arr(int x[],int a,int b){
//         if(a>=b/2)return;
//         swap(x[a],x[b-a-1]);
//         arr(x,a+1,b);
//     }
// };
// int main(){
//     int n;
//     int y=0;
//     Solution ob;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     ob.arr(a,y,n);
//     for(int i=0;i<n;i++){
//     cout<<a[i]<<" ";
//     }
// }


// class Solution{
//     public:
//     bool isp(string &s,int i, int n){
//         if(i>=n/2)return true;
//         if(s[i]!=s[n-i-1])return false;
//         return isp(s,i+1,n);
//     }
// };
// int main(){
//     string a;
//     cin>>a;
//     Solution ob;
//     int n;
//     n=a.length();
//     if(ob.isp(a,0,n)){
//         cout<<"Pallindrome";
//     } else{
//         cout<<"Not Pallindrome";
//     }

// }


