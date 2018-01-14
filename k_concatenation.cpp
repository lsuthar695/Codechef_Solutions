#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
 
ll maxSum(ll ar1[], ll n)
{
   ll far = ar1[0];
   ll current = ar1[0];
 
   for (ll i = 1; i < n; i++)
   {
        current = max(ar1[i], current+ar1[i]);
        far = max(far, current);
   }
   return far;
}
 
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
				ll ar[n];
		for(ll i=0;i<n;i++)
			cin>>ar[i];
		if(k<1000)
		{
			     			ll jj=0;
    			ll ar1[n*k];
    		for(ll i=0;i<k;i++)
    		{
    			for(ll j=0;j<n;j++)
    			{
    				ar1[jj]=ar[j];
    				jj++;
    			}
    		}
 
    		ll ans = maxSum(ar1, jj);
    		cout<<ans<<endl;
		}
		 		else
 		{
     			ll kk=0;
    			ll ar2[n*40];
    			ll ar3[40],mm=0;
    		for(ll i=0;i<40;i++)
    		{
    			for(ll j=0;j<n;j++)
    			{
    				ar2[kk]=ar[j];
    				kk++;
    			}
    			ar3[mm]=maxSum(ar2,kk);
    			mm++;
    		}
 
 
 
    		if(ar3[mm-1]==ar3[mm-2])
    			cout<<ar3[mm-1]<<endl;
 
 
    		else
    		{
    			ll qq= ar3[2]+(k-3)*(ar3[mm-1]-ar3[mm-2]);
    			cout<<qq<<endl;
 
    		}
 		}


	}
}
 
     