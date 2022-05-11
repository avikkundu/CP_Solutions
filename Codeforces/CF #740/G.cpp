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
		int n;
		cin>>n;
		
		//vvi edges(n);
		int arr[n+1];
		
		for(int i=2;i<=n;i++)
		cin>>arr[i];
		
		string s;
		cin>>s;
		
		vi white(n+1,0),black(n+1,0);
		vi visited(n+1,false);
		
		if(s[0]=='W')white[1]++;
		else black[1]++;
		for(int i=2;i<=n;i++)
		{
			int root=i;
			//cout<<"all ok"<<endl;
			if(s[root-1]=='W')
				white[root]++;
				else
				black[root]++;
			while(root!=1)
			{
				//if(!visited[root])
				//{
				//	visited[root]=true;
						//cout<<"repeating "<<endl;
				
			
				  if(root!=1)
				  {
							white[arr[root]]+=white[i];
				            black[arr[root]]+=black[i];	
				  }
		     //}
			
				
				root=arr[root];
				
			}
			
			
		}
		   int count=0;
			//cout<<"all ok 2"<<endl;
			for(int i=1;i<=n;i++)
			{
				//cout<<i<<" --> "<<white[i]<<" , "<<black[i]<<endl;
				if(white[i]==black[i])count++;
			}
			
			cout<<count<<endl;
	//	cout<<"outside"<<endl;
		
		
	}  
		
} 
		
		
        


 
