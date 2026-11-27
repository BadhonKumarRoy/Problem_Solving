#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        char c;
        cin >> c;
        string match = "codeforces";
        int len = match.length();
        int flag = 0;
        for(int i = 0; i < len; i++){
            if(match[i] == c){
                cout << "YES" << endl;
                flag++;
                break;
            }
        }
        if(flag == 0) cout << "NO" << endl;
    }
    return 0;
}
