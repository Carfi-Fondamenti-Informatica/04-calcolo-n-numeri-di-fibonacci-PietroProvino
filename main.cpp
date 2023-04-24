#include <iostream>
using namespace std;


int main() {
    int n, a=1,b=1,c ;
    cin >> n;
    if (n>=2){
        cout << a << endl;
        cout << b << endl;
        for( int i=1;i<n;i++){
            c=a+b;
            a=b;
            b=c;
            cout << c << endl;
        }
    }
    else{
        cout << "errore";
    }
    return 0;
}
