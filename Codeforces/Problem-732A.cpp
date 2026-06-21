#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, r;
    cin >> k >> r;

    int i = 1;
    int result = 0;
    int result_r = 0;
    while(true){
        result = k*i;
        result_r = result;
        result_r -= r;
        if((result_r % 10 == 0) || (result % 10 == 0)){
            break;
        }
        i++;
    }
    cout << i << endl;

    return 0;
}
