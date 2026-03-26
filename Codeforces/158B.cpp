#include<iostream>

using namespace std;


int main(){

    int x, y, count=0;
    int f1=0, f2=0, f3=0, f4 = 0;

    cin >> x;

    while(x--){
        cin >> y;

        if(y==1){
            f1++;
        }
        else if(y==2){
            f2++;
        }
        else if(y==3){
            f3++;
        }
        else if(y==4){
            f4++;
            count ++;
        }

    }

    //3 1
    int t = min(f3, f1);
    count += t;
    f3 -= t;
    f1 -= t;

    count += f3;

    // 2  2
    count += f2 / 2;
    f2 %= 2;
        
    // 2 1
    if(f2){
    count++;
    f1 -= min(2, f1);
}

    // 1 1
    count += (f1 + 3) / 4;

        cout << count;

}