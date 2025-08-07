#include <bits/stdc++.h>
using namespace std;

int main() {
int n,k,l,c,d,p,nl,np;
int min1=INT_MAX;
int min2=INT_MAX;
cin>>n;
cin>>k;
cin>>l;
cin>>c;
cin>>d;
cin>>p;
cin>>nl;
cin>>np;
int toast1=(k*l)/nl;
int toast2=c*d;
int toast3=p/np;
 min1=min({toast1,toast2,toast3});

cout<<min1/n;    
return 0;
}