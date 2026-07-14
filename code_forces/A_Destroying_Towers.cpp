#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        int sum=0;
        vector<int> v(a);
        for(int j=0;j<a;j++){
            int x;
            cin>>x;
            v[j] = x;
        }
        sum=v[0];
        for(int i=0;i<a-1;i++){
            if(v[i]<v[i+1]){
                v[i+1]=v[i];
            }
            sum+=v[i+1];
        }
        cout<<sum<<endl;
    }
}