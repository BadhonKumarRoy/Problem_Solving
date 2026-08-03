#include <iostream>
#include <numeric>
#include <cstdlib>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
    }
    int l = lcm(1, 1);
    cout << l << endl;
    return 0;
}
