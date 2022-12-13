#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<pair<int,int>> a;
a.push_back({1000,2});
a.push_back({2000,5});
a.push_back({3000,9});
a.push_back({4000,0});
a.push_back({5000,5});
a.push_back({6000,9});
cout<<a[0].first<<" ";
cout<<a[0].second<<endl;
cout<<a[1].first<<" ";
cout<<a[1].second<<endl;
cout<<a[2].first<<" ";
cout<<a[2].second<<endl;
cout<<a[3].first<<" ";
cout<<a[3].second<<endl;
cout<<a[4].first<<" ";
cout<<a[4].second<<endl;
cout<<a[5].first<<" ";
cout<<a[5].second<<endl;

int dat[10];




return 0;
}
