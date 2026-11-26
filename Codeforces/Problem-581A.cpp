#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if(a == b) cout << a << " " << 0 << endl;
    else if(a < b){
        cout << a << " ";
        b -= a;
        b /= 2;
        cout << b << endl;
    }
    else{
        cout << b << " ";
        a -= b;
        a /= 2;
        cout << a << endl;
    }
    return 0;
}
