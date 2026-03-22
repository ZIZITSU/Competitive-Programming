#include<iostream>

using namespace std;

int main(){

int t;

cin >> t;
int x[t];
int temp;

    for(int i=0;i<t;i++){
        cin >> x[i];
    }


    for(int i=0;i<t;i++){
        for(int j=i+1;j<t;j++){
        if(x[i]>=x[j]){
            temp =x[i];
            x[i] =x[j];
            x[j] =temp;
        }
    }
    }

    for(int i=0;i<t;i++){
        cout << x[i] << " ";
    }

}