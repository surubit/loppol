#include "bits/stdc++.h"
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    cout << "sum"<<a+b << "\n";
            vector<int> v(a,b);
        for(int i = 0; i < a;i++){
            cin >> v[i];
        }
    return 0;
}
