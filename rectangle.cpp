#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(a==b&&c==d)
		{
			cout<<"YES"<<endl;
		//	continue;
		}

	else
		if(a==c&&b==d)
		{
			cout<<"YES"<<endl;
		//	continue;
		}

		else
			if(a==d&&b==c)
		{
			cout<<"YES"<<endl;
			//continue;
		}
		else
			cout<<"NO"<<endl;
	}
	return 0;

}