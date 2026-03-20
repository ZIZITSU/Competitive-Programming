#include<iostream>
#include<vector>

using namespace std;


int main(){

int x, even=0, odd=0;
cin >> x;

int arr[x];
for(int i=0;i<x;i++){
    cin >> arr[i];
}

for(int i=0;i<x;i++){

    if(arr[i]%2==0){
        even++;
    }
    else{
        odd++;
    }

}

    if(odd==1){
        for(int i=0;i<x;i++){
            if(arr[i]%2==1){
                cout << i+1;
            }
        }
    }
    else if(even==1){
        for(int i=0;i<x;i++){
            if(arr[i]%2==0){
                cout << i+1;
            }
        }
    }



}