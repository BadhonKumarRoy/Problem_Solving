#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        int i;
        int maxi, mini;
        cin >> a >> b >> c;
        for(i = 0; i < 20; i++){
            maxi = max(a, max(b, c));
            mini = min(a, min(b, c));
            if(a == b || b == c || a == c){
                break;
            }
            else if(a == maxi && b == mini){
                a--;
                b++;
            }
            else if(a == maxi && c == mini){
                a--;
                c++;
            }
            else if(b == maxi && a == mini){
                b--;
                a++;
            }
            else if(b == maxi && c == mini){
                b--;
                c++;
            }
            else if(c == maxi && a == mini){
                c--;
                a++;
            }
            else if(c == maxi && b == mini){
                c--;
                b++;
            }
        }
        cout << i << endl;
    }
}