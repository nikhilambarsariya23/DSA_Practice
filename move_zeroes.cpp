


#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    int i = -1;
    for(int j =0;j<a.size();j++)
    {
        if(a[j]==0){
            continue;
        }
        else{
            i++;
            swap(a[i],a[j]);
        }
    }

    return a;
}


int main()
{
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;
    vector<int> ans = moveZeros(n, arr);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}

