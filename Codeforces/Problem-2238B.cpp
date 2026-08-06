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
    int a = 1;
    int b = 2;
    int c = 1;
    int x = gcd(lcm(a, b), lcm(b, c));
    int y = gcd(a,c);
    cout << x << " " << y << '\n';
    return 0;
}
