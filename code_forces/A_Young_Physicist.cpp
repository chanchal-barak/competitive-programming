#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int xsum=0,ysum=0,zsum=0;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin >>a>>b>>c;
        xsum+=a;
        ysum+=b;
        zsum+=c;
    }
    if(xsum==0 && ysum==0 && zsum==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}