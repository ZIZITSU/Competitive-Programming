#include<iostream>
#include<map>
using namespace std;

int main(){

    int n;
    cin >> n;

    map<string, int> freq;
    string s;

    for(int i=0; i<n; i++){
        cin >> s;

        if(freq[s]==0){
            cout << "OK" << endl;
        } else {
            cout << s << freq[s] << endl;
        }

        freq[s]++;
    }

    return 0;
}