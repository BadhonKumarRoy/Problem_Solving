#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int sereja = 0, dima = 0;
    int it = 0;
    for(int i=0; i<n; i++)
    {
        if(it==0)
        {
            sereja += max(arr[0], arr[arr.size()-1]);
            it = 1;
            if(arr[0]>arr[arr.size()-1])
            {
                arr.erase(arr.begin());
            }
            else
            {
                arr.pop_back();
            }
        }
        else
        {
            dima += max(arr[0], arr[arr.size()-1]);
            it = 0;
            if(arr[0]>arr[arr.size()-1])
            {
                arr.erase(arr.begin());
            }
            else
            {
                arr.pop_back();
            }
        }
    }
    cout << sereja << " " << dima << endl;
}