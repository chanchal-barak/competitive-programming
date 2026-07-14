#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int a_win = 0,b_win = 0,draw = 0;
    for(int i = 1;i<=6;i++){
        if(abs(a-i) < abs(b-i)){
            a_win++;
        }
        else if(abs(a-i) > abs(b-i)){
            b_win++;
        }
        else{
            draw++;
        }
    }
    cout << a_win << " " << draw << " " << b_win << endl;
}