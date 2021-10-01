// #include<iostream>
// using namespace std;

// int main(){
//     int size;
//     cin>>size;
//     int arr[size];
//     for(int i =0; i<size; i++){
//         cin>>arr[i];
//     }
//     int T;
//     cin>>T;
//     int a,b;
//     int sum=0;
//     while(T--){
//         cin>>a>>b;
//         sum=0;
//         for(int i=a; i<=b; i++){
//             sum+= arr[i];
//         }
//         cout<<sum<<endl;
//     }
//     return 0;
// }


// algo prefixsum use:

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int prefixSum[n];
    int sum = 0;
    for(int i =0; i<n; i++){
        cin>>arr[i];
        sum += arr[i];
        prefixSum[i] = sum; 
    }
    // for(int i =0; i<n; i++){
    //     cout<<prefixSum[i]<<" ";
    // }
    int T; 
    cin>>T;
    while(T--){
        int a, b;
        cin>>a>>b;
        if(a==0){
            cout<<prefixSum[b]<<endl;
        }
        else{
            cout<<(prefixSum[b]-prefixSum[a-1])<<endl;
        }
    }
    return 0;
}
