#include <iostream>
using namespace std;

int main(){
    int n, p, k; cin>>n>>p>>k;
    int a[n];
    for(int i = 1; i <= n; i++){
        cin>>a[i];
    }
    
    int scare = 0;
    for(int i = 1; i <= n; i++){
        if(i % p == 0 && a[i] == 0){
            scare++;
        }
        
        if(scare == k){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
}