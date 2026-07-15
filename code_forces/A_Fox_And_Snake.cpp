#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    string s,alt1;
    for(int i=0;i<m;i++){
        s+='#';
        alt1+=".";
    }
    string alt2=alt1;
    alt1[0]='#';
    alt2[m-1]='#';
    bool isalt=true;
    for(int i=0;i<n;i++){
        if(i%2!=0 && isalt){
            cout<<alt2<<endl;
            isalt=false;
        }
        else if(i%2!=0 && !isalt){
            cout<<alt1<<endl;
            isalt=true;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}