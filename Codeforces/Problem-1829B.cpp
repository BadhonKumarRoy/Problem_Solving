#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int maxi = 0;
        int co = 0;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            arr[i] = a;
        }
        for(int i = 0; i < n; i++){
            if(arr[i] == 0) co++;
            else{
                if(co > maxi) maxi = co;
                co = 0;
            }
        }
        if(co > maxi) maxi = co;
        cout << maxi << endl;
    }
    return 0;
}
