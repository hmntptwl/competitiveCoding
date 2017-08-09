#include <bits/stdc++.h>

#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define sortv(v) sort(v.begin(),v.end());
#define sorta(a,n) sort(a,a+n);
#define arrayin(a,n) for(int i=0;i<n;i++) cin>>a[i];
#define arrayout(a,n) for(int i=0;i<n;i++) cout<<" ";cout<<"\n";
#define INF INT_MAX //Infinity
#define mp make_pair
#define pb push_back
#define mt make_tuple
#define MOD 1000000007
#define fi first
#define se second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vi64 vector<lli>
#define viii vector<tuple<int,int,int>>
#define prq priority_queue<int>
#define mii map<int,int>
#define msi multiset<int>
#define nl "\n"
#define sii set<int,int>

typedef long long int lli;
typedef unsigned long long int ulli;
typedef double ld;

using namespace std;

int main()
{
	fio;
	/*int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
	}*/
	int n;
	cin>>n;
	int a[n];
	REP(i,n) cin>>a[i];
	int increase=0,constant=0,decrease=0;
	if(a[0]==a[1])
		constant=1;
	if(a[0]<a[1])
		increase=1;
	if(a[0]>a[1])
		decrease=1;
	string ans="YES";
	//cout<<increase<<" "<<constant<<" "<<decrease<<endl;
	FOR(i,1,n-2)
	{
		//cout<<"i "<<i<<" "<<increase<<" "<<constant<<" "<<decrease<<endl;
		if(increase)
		{
			if(a[i]==a[i+1])
			{
				constant=1;
				increase=0;
			}
			if(a[i]>a[i+1])
			{
				increase=0;
				decrease=1;
			}
		}
		if(constant)
		{
			if(a[i]<a[i+1])
			{
				ans="NO";
				break;
			}
			if(a[i]>a[i+1])
			{
				decrease=1;
				constant=0;
			}
		}
		if(decrease)
		{
			if(a[i]<=a[i+1])
			{
				ans="NO";
				break;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}