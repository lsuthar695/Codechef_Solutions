#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<ll> v[n];
		ll x;
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<n;j++)
			{
				cin>>x;
				v[i].push_back(x);
			}
		}

		for(ll i=0;i<n;i++)
		{
			sort(v[i].begin(),v[i].end());
		}
		//vector<ll> ans;
		ll arr[n],k=0;
		for(ll i=n-1;i>-1;i--)
		{
			if(i==n-1)
			{
				arr[k]=v[i][v[i].size()-1];k++;
			}
			//ans.push_back(v[i][v[i].size()-1]);
			else
			{
				for(ll j=v[i].size()-1;j>-1;j--)
				{
					if(v[i][j]<arr[k-1])
					{
						arr[k]=v[i][j];
						k++;
						break;
					}

				}
			}
		}
		ll sum=0;
		if(k==n)
		{
			for(ll i=0;i<k;i++)
			{
				sum+=arr[i];
			}
			cout<<sum<<endl;
		}
		else
			cout<<"-1"<<endl;
	}
	return 0;

}