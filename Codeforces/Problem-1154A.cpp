#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main()
{
    long long n;
    set<long long> x;
    long long a, b, c;
    for(int i = 0; i < 4; i++){
        cin >> n;
        x.insert(n);
    }
    vector<long long> num(x.begin(), x.end());
    int siz = num.size();
    if(siz == 2){
        a = (num[1] - num[0]);
        b = a;
        c = b;
    }
    else if(siz == 3){
        a = (num[2] - num[0]);
        b = (num[2] - num[1]);
        c = a;
        if(((a+c) != num[0]) && ((a+c) != num[1])){
            c = b;
        }
    }
    else {
        a = (num[3] - num[0]);
        b = (num[3] - num[1]);
        c = (num[3] - num[2]);
    }

    cout << a << " " << b << " " << c << endl;
    return 0;
}
