#include<iostream>
using namespace std;


// //Selection Sort(In ascending order)
// void swap(int arr[],int m,int i){
//     int t=arr[m];
//     arr[m]=arr[i];
//     arr[i]=t;
// }

// void selection_sort(int arr[],int n){
//     for(int i=0;i<=n-2;i++){
//         int mini =i;
//         for(int j=i;j<=n-1;j++){
//             if(arr[j]<arr[mini])mini=j;
//         }
//         swap(arr,mini,i);
//     }
// }


// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     selection_sort(a,n);
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<endl;
//     }
//     return 0;
// }



// // Selection Sort in descending order
// void Selection_sort(int arr[],int n){
//     for(int i=0;i<=n-2;i++){
//         int m=i;
//         for(int j=i;j<=n-1;j++){
//             if(arr[j]>arr[m])m=j;// we just change the comparison operator
//         }
//         int t;
//         t=arr[m];
//         arr[m]=arr[i];
//         arr[i]=t;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     Selection_sort(a,n);
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<endl;
//     }
// }




// //Bubble Sort
// void Bubble_Sort(int arr[],int n){
//     for(int i=n-1;i>=1;i--){
//         for(int j=0;j<=i-1;j++){
//             if(arr[j]<arr[j+1]){
//                 int t;
//                 t=arr[j+1];
//                 arr[j+1]=arr[j];
//                 arr[j]=t;
//             }
//         }
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     Bubble_Sort(a,n);
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<endl;
//     }
// }



//Bubble sort(For best Case i.e. already sorted array)
// void Bubble_Sort(int arr[],int n){
//     for(int i=n-1;i>=1;i--){
//         int didsw=0;
//         for(int j=0;j<=i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int t;
//                 t=arr[j+1];
//                 arr[j+1]=arr[j];
//                 arr[j]=t;
//                 didsw=1;
//             }
//         if(didsw ==0){
//             break;
//         }
//         }
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];

//     }
//     Bubble_Sort(a,n);
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<endl;
//     }
// }

  

// //Insertion Sort
// void Insertion_Sort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int j=i;
//         while(j>0 && arr[j-1]>arr[j]){
//             int t= arr[j];
//             arr[j]=arr[j-1];
//             arr[j-1]=t;
//             j--;
//         }
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     Insertion_Sort(a,n);
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<endl;
//     }
// }

