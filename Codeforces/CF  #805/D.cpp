/*
	@author:kunduavik155
  Problem : https://codeforces.com/contest/1702/problem/D
*/
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define ld long double
#define mp make_pair
#define mt make_tuple
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin() , (x).rend()
#define rep(n) for(int i=1;i<=n;i++)
#define repab(a,b) for(int i=a;i<=b;i++)
#define pb push_back
#define F first
#define S second
#define endl "\n"
#define INF (ll)(1e9)
#define MOD (ll)(1e9 + 7)
#define PI  PI 3.1415926535897932384626433832795
#define set set
#define mset multiset
#define uset unordered_set
#define umset unordered_multiset
#define map map
#define mmap multimap
#define umap unordered_map
#define ummap unordered_multimap
#define TIME cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define deb(x...)
#endif

//-------------------------------------------//


//-------------------------------------------//

void solve()
{
    string s;
    cin>>s;
    
    int p;
    cin>>p;
    
    int sum=0;
    
    for(int i=0;i<s.length();i++)
    sum+=s[i]-'a'+1;
    
    map<char,int> m;
    
    if(sum<=p)
    {
    	cout<<s<<endl;
    	return;
	}
	
	string copy=s;
	sort(copy.rbegin(),copy.rend());
	//deb(copy);
	for(int i=0;i<copy.length();i++)
	{
		sum-=(copy[i]-'a'+1);
		m[copy[i]]++;
		if(sum<=p)break;
	}
	//deb(m);
	string ans="";
	for(int i=0;i<s.length();i++)
	{
		if(m[s[i]]==0)
		ans+=s[i];
		else
		m[s[i]]--;
	}
    
    cout<<ans<<endl;
}
int main()
{
	fast;
	int test=1;
	cin>>test;
	
	while(test--)
	{
		 solve();
	}
}
