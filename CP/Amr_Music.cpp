#include <bits/stdc++.h>
using namespace std;

int main() {
vector<pair<int,int>> days;
vector<int> index;
int c=0;
int n,k;
cin>>n;
cin>>k;
 for(int i=1;i<=n;i++){
    int day;
    cin>>day;
    days.push_back({day,i});
 }
 sort(days.begin(),days.end());
 for(auto& p:days){
   if(p.first<=k){
   k=k-p.first;
   index.push_back(p.second);
c++;}
   else break;
   if(k==0){
   break; 
 }}
 cout<<c<<"\n";
for(auto&l:index)
cout<<l<<" ";

    return 0;
}