#include <iostream>
using namespace std;
int main(){
    int N=5;
    for(int i=0;i<N;i++){
        for(char ch='A';ch<='A'+(N-i-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}
