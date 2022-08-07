/*
	@author:kunduavik155

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
#define int long long
vector<long long> trial_division2(long long n) {
    vector<long long> factorization;
    while (n % 2 == 0) {
        factorization.push_back(2);
        n /= 2;
    }
    for (long long d = 3; d * d <= n; d += 2) {
        while (n % d == 0) {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
}
void solve()
{
    int x,y;
    cin>>x>>y;
    
    int a=x/2;
	int b=x/2;
	if(x%2!=0)b++;
	
	for(int i=1;i*i<=y;i++)
	{
		if(y%i==0)
		{
			int c=i;
			int d=y/i;
			if(d<a or c>a and (a!=c and a!=d and b!=c and b!=d))
			{
				cout<<a<<" "<<b<<endl;
				cout<<c<<" "<<d;
				return;
			}
		}
	 }
	 
	 cout<<"-1"; 
    
}
signed main()
{
	fast;
	int test=1;
	cin>>test;
	
	while(test--)
	{
		 solve();
		 cout<<endl;
	}
}
