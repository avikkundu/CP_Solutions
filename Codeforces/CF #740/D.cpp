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

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef long long i64;
typedef vector<i64> vll;
typedef vector<vll> vvll;
typedef pair<i64, i64> pll;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

//-------------------------------------------//
#define int long long
signed main()
{
	fast;
	int test;
	cin>>test;
	
	while(test--)
	{
		int n,m;
		cin>>n>>m;
		
		int arr[n+1][m+1];
		
		for(int i=1;i<=n;i++)
		{
		   for(int j=1;j<=m;j++)
		   cin>>arr[i][j];	
		}
		
	    int f[220*2],g[220*2];
	    
	    for(int i=0;i<=n+m;i++)
	    f[i]=g[i]=0;
	    
	    int ans=0;
	    
	    for(int i=1;i<=n;i++)
	    {
	    	for(int j=1;j<=m;j++)
	    	{
	    		f[i+j]+=arr[i][j];
	    		g[i-j+m]+=arr[i][j];
			}
		}
	    
	    for(int i=1;i<=n;i++)
	    {
	    	for(int j=1;j<=m;j++)
	    	ans=max(ans,f[i+j]+g[i-j+m]-arr[i][j]);
		}
		
		cout<<ans<<endl;
		//TIME
				
	}  
		
} 
		
		
        


 
