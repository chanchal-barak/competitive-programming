#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    string s1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y'){
            continue;
        }
        else{
            s1+='.';
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]+32;
            }
            s1+=s[i];
        }
    }
    cout<<s1<<endl;
    return 0;
}