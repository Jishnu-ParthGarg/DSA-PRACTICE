#include <bits/stdc++.h>
using namespace std;
int firstmax(vector<int> &n){
    sort(n.begin(),n.end());
    return n.back();
}
int main()
{
    vector<int> v={2,5,9,8,4};
    firstmax(v);


}