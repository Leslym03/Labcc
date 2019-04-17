#include <iostream>
using namespace std;

int div(int n){
    int c=0;
    for (int i=1; i<=n; i++){
        if(n%i==0)
            c++;
    }
    return c;
}

int numT(int x){
    int s=0;
    int a=1;
    while(div(s)<=x){
        s+=a;
        cout << s << endl;
        ++a;
    }
    return s;
}

int main(){
    cout << numT(500)<< endl;
    return 0;
}
