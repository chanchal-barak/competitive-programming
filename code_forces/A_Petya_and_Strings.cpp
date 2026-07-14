#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    string s1;
    cin>>s1;
    for(int i=0;i<s.size();i++){
        if(s[i]>= 'A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
        if(s1[i]>='A' && s1[i]<='Z'){
            s1[i]=s1[i]+32;
        }
    }

    if(s<s1){
        cout<<-1<<endl;
    }
    else if(s>s1){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}