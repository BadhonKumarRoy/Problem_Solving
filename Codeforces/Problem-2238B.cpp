#include <iostream>
#include <numeric>
#include <cstdlib>
using namespace std;

int main()
{
    int t, n, co;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a, b, c;
        co = 0;
        for(a = 1; a <= n; a++)
        {
            for(b = 1; b <= n; b++)
            {
                for(c = 1; c <= n; c++)
                {
                    if(gcd(lcm(a, b), lcm(b, c)) == gcd(a,c))
                    {
                        co++;
                    }
                }
            }
        }
        cout << co << "\n";
    }
    cout << "Its Not fast algorithm :(" << endl;
    return 0;
}
