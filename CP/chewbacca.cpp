#include <bits/stdc++.h>
using namespace std;

int main() {
    long long  x;
    int d;
    int t;
    string s;
cin>> x;
long long  n =x;
while(n!=0){
d=n%10;
n=n/10;
t=9-d;
if(t<d)
s=to_string(t)+s;
else
s=to_string(d)+s;
}

if(s[0]=='0')
s[0]='0'+d;
cout<< s;
    return 0;
}