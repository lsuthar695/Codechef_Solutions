    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {	long long int t,i,n,j,ans,aa;
        scanf("%lld\n",&t);
    while(t--)
    {   long long int a[100000]={0};
        scanf("%lld\n",&n);
    	for(i=0;i<n;i++)
    	scanf("%lld\t",&a[i]);
    	sort(a,a+n);
    	for(i=0;i<n-2;i++)
    	{
    		if(a[i]==a[i+1])
    			ans=a[i];
    			else if(a[1]!=a[0]+1)
    			ans=a[0];
    			else if(a[n-1]!=a[n-2]+1)
    			ans=a[n-1];
    }printf("%lld\n",ans);}
    return 0;} 
