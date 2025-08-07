#include<iostream>
#include<vector>
using namespace std;

// void merge(vector<int>&a,int l,int m,int h){
//     vector<int>t;
//     int i=l,j=m+1;
//     while(i<=m&&j<=h){
//         if(a[i]<=a[j]){
//             t.push_back(a[i]);
//             i++;
//         }
//         else{
//             t.push_back(a[j]);
//             j++;
//         }
//     }
//     while(i<=m){
//         t.push_back(a[i++]);
//     }
//     while(j<=h){
//         t.push_back(a[j++]);
//     }
//     for(int y=l;y<=h;y++){
//         a[y]=t[y-l];
//     }


// }

// void mergesort(vector<int>&a,int low,int high){
//     if(low>=high)return;
//     int mid=(low+high)/2;
//     mergesort(a,low,mid);
//     mergesort(a,mid+1,high);
//     merge(a,low,mid,high);
// };

// int main(){
//     int n;
//     cin>>n;
//     vector<int>a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     mergesort(a,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
// }

// void insert(vector<int>&a,int n){
//     int i=a[n-1];
//     int j=n-2;
//     while(j>=0&&a[j]>i){//we check here j=0 also because we are shifting right and 0th index also needs to be rechecked
//         a[j+1]=a[j];
//         j--;
//     }
//     a[j+1]=i;
// }

// void insertion_sort(vector<int>&a,int n){
//     if(n<=1)return;
//     insertion_sort(a,n-1);
//     insert(a,n);
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int>a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     insertion_sort(a,n);
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
// }

// void bubble(vector<int>&a,int n){
//     for(int i=0;i<n-1;i++){
//         if(a[i]>a[i+1]){
//             int t=a[i];
//             a[i]=a[i+1];
//             a[i+1]=t;
//         }
//     }
// }

// void bubble_sort(vector<int>&a,int n){
//     if(n==1)return;
//     bubble(a,n);
//     bubble_sort(a,n-1);//we call recursion fn after one full pass 
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int>a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     bubble_sort(a,n);
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
// }


// //Quick Sort
// int quicksort(vector<int>&a,int x,int y){
//     int c=a[x];
//     int i=x;
//     int j=y;
//     while(i<j){
//         while(a[i]<=c&&i<=y){
//             i++;
//         }
//         while(a[j]>c&&j>=x){
//             j--;
//         }
//         if(i<j){
//             swap(a[i],a[j]);
//         }
        
//     }
//     swap(a[x],a[j]);
//     return j;
// };

// void quick_sort(vector<int>&a,int l,int h){
//     if(l<h){
//         int p = quicksort(a,l,h);
//         quick_sort(a,l,p-1);
//         quick_sort(a,p+1,h);
//     }
// };

// int main(){
//     int n;
//     cin>>n;
//     vector<int>a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     quick_sort(a,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
// }