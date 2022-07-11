/*
	@author:kunduavik155
  Problem:https://codeforces.com/contest/1702/problem/A
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


void solve()
{
	int m;
	cin>>m;
	
	int d=log10(m)+1;
	
	int p=pow(10,d);
	int p2=pow(10,d-1);
	
	cout<<m-p2<<endl;
	
}
int main()
{
	fast;
	int test=1;
	cin>>test;
	int copy=test;
	while(test--)
	{
		 solve();
	}
}
