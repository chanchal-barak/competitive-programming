#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> answers(n);
    for (int i = 0; i < n; ++i) {
        cin >> answers[i];
    }
    int correct_count = 0,odd,even;
    for (int i = 0; i < n; ++i) {
        if (answers[i] % 2 == 0) {
            correct_count++;
            even =i+1;
        }
        else{
            correct_count--;
            odd =i+1;
        }
    }
    if(correct_count > 0){
        cout << odd << endl;
    }
    else{
        cout << even << endl;
    }
    
}