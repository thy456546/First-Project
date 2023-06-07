#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define en '\n'
#define ll long long int
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define mp(x,y) make_pair(x,y)
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define tst int t;cin>>t;while(t--)
#define sortv(v) sort(v.begin(),v.end())
#define r_sort(v) sort(v.rbegin(),v.rend())
#define rvs(v) reverse(v.begin(),v.end())
#define F first
#define S second
#define MOD 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pii pair<int,int>
#define fori(i,a,b) for(int i=a;i<=b;i++)
#define forj(j,a,b) for(int j=a;j<=b;j++)
#define coutv(v) for(auto it:v)cout<<it<<" ";cout<<endl
#define cinv(v) for(auto &it:v)cin>>it
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define unique(v) int sz=unique(v.begin(),v.end())-v.begin()
#define for_string for(int i=0;i<s.size();i++)
#define maxi(v)  int mx=*max_element(v.begin(),v.end())
///

void solve(vl v)
{
    vl v1;
    sortv(v);
    //coutv(v);
    vector<pair<ll,ll>>p;
    for(int i=0;i<v.size()-1;i++){
        p[i]=make_pair(abs(v[i]-v[i+1]),v[i]);
    }
    for(int i=0;i<p.size();i++)  cout<<p[i].first<<" "<<p[i].second<<en;
}
int main()
{
    optimize();
    tst{
       int x,y;
       cin>>x;
       vl v(x);
       cinv(v);
       solve(v);
    }
}
