#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, Q, Y, temp;
    vector <int> v;
    vector<int> :: iterator itr;
    cin>>N;
    while(N--){
        cin>>temp;
        v.push_back(temp);
    }
    cin>>Q;
    while (Q--){
        cin>>Y;
        itr = lower_bound(v.begin(), v.end(), Y);
        if(*itr == Y){
            cout<<"Yes"<<" "<< ( itr - v.begin() + 1 )<<endl;
        }
        else
            cout<<"No"<<" "<< ( itr - v.begin() + 1 )<<endl;          
    }
    return 0;
}
