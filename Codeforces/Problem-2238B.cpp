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
                if(a%b!=0) continue;
                for(c = 1; c <= n; c++)
                {
                    //if((b*c) > n) continue;
                    cout << "(" << a << ", " << b << ", " << c << ") ";
                    co++;
                    cout << co << "\n";
                }
            }
        }

    }
    return 0;
}
