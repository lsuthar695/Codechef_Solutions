    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        int t,a[500][500],count,j;
    	cin>>t;
    	while(t--)
    	{   count=0;j=0;
    	    int n;
    	    cin>>n;
    	    for(int i=0;i<n;i++)
    	    {
    	        for(int j=0;j<n;j++){
    	        cin>>a[i][j];
    	        if(a[i][j]==1)
    	        {
    	            count=count+1;
    	        }}
    	    }
    	    int s=n;
    	    while(n<count)
    	    {   
    	        j++;
    	        n=n+2*(s-j);
    	    }
    	    cout<<j<<endl;
    	}
    	
    	return 0;
    }
     
