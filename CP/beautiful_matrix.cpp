#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> mat(5, vector<int> (5));
    int a,b;
    int sum=0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> mat[i][j];
            if(mat[i][j]==1){
                a=abs(2-i);
                b=abs(2-j);
            }
        }   
    }
sum=a+b;
cout<<sum;
    return 0;
}