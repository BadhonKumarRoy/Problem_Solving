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
    int l = lcm(8, 16);
    int g = gcd(8, 16);
    cout << l << endl;
    cout << g << endl;
    return 0;
}