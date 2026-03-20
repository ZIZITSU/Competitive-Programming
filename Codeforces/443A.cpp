#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main(){

int sum=0;
int arr[100] = {0};
string a;

getline(cin, a);
int l = a.size();

for(int i=0;i<l;i++){

    if(isalpha(a[i])){
        a[i] = tolower(a[i]);
        arr[a[i]-97]=1;
    }
    else
        continue;

}

    for(int i=0;i<26;i++){
        sum+=arr[i];
    }
        cout<< sum;
}