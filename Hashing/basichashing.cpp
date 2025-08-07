#include<iostream>
#include<map>
#include <unordered_map>
using namespace std;

//Number hashing
// int hashh[1000000] //Globally it can be declared with one more 0
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];

//     }


//     //precompute
//     int hash[100000]={0};//this 0 iinitializes all elements as 0
//     for(int i=0;i<n;i++){
//         hash[a[i]]+=1;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         int num;
//         cin>>num;
//         //fetch
//         cout<<hash[num]<<endl;
//     }
// }

// //character hashing(for lowercase letters)
// int main(){
//     string s;
//     cin>>s;

//     //precompute
//     int hash[26]={0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]-'a']+=1;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         char a;
//         cin>>a;
//         //fetch
//         cout<<hash[a-'a']<<endl;
//     }
// }




// //character hashing(for uppercase letters)
// int main(){
//     string s;
//     cin>>s;

//     //precompute
//     int hash[26]={0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]-'A']+=1;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         char a;
//         cin>>a;
//         //fetch
//         cout<<hash[a-'A']<<endl;
//     }
// }



//character hashing(for all letters)
// int main(){
//     string s;
//     cin>>s;

//     //precompute
//     int hash[256]={0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]]+=1;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         char a;
//         cin>>a;
//         //fetch
//         cout<<hash[a]<<endl;
//     }
//     return 0;
// }

//number hashing using maps
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     //precompute
//     map<int,int>mpp;
//     for(int i=0;i<n;i++){
//         mpp[a[i]]+=1;
//         }
//     // //to iterate in the map
//     // for(auto it:mpp){
//     //     cout<<it.first<<"->"<<it.second<<endl;
//     // }
//     int q;
//     cin>>q;
//     while(q--){
//         int x;
//         cin>>x;
//         //fetch
//         cout<<mpp[x]<<endl;
//     }
// }



//character hashing using maps
// int main(){
//     string s;
//     cin>>s;
//     map<char,int> mpp;
//     for(int i=0;i<s.size();i++){
//         mpp[s[i]]++;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         char n;
//         cin>>n;
//         cout<<mpp[n]<<endl;
//     }
// }



//highest frequency number hashing using maps
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     //precompute
//     map<int,int>mpp;
//     for(int i=0;i<n;i++){
//         mpp[a[i]]+=1;
//         }
//     //to iterate in the map
//     int high=0;
//     int ele=-1;
//     for(auto it:mpp){
//         cout<<it.first<<"->"<<it.second<<endl;
//         if(it.second>high){
//             high=it.second;
//             ele=it.first;
//         }
        

//     }
//     cout << "Highest frequency element: " << ele << " (frequency: " << high << ")" << endl;
//     int q;
//     cin>>q;
//     while(q--){
//         int x;
//         cin>>x;
//         //fetch
//         cout<<mpp[x]<<endl;
//     }
// }