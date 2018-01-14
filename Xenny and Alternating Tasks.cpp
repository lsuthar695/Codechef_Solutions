    #include<stdio.h>
    #define N 100000
    int a[N],b[N];
    int main()
    {
    	long long int t,n,i,sum,sum1,sum2,sum3,t1,t2,timee;
    	scanf("%lld\n",&t);
     
    	
    	while(t--)
    	{
    		sum=0;sum1=0;sum2=0;sum3=0;t1=0;t2=0;
    		timee=0;
    		scanf("%lld\n",&n);
    		
    		for(i=0;i<n;i++)
    		{
    			scanf("%lld\t",&a[i]);
    		}
    		for(i=0;i<n;i++)
    		{
    			scanf("%lld\t",&b[i]);
    		}
    		for(i=0;i<n;i++)
    		{
    			if(i%2==0)
    			{
    				sum=sum+a[i];
    			}
    			else
    			sum1=sum1+b[i];
    		}
    		t1=sum+sum1;
    		for(i=0;i<n;i++)
    		{
    			if(i%2==0)
    			{
    				sum2=sum2+b[i];
    			}
    			else
    			sum3=sum3+a[i];
    		}
    		t2=sum2+sum3;
    		if(t1>t2)
    		timee=t2;
    		else if(t2>t1)
    		timee=t1;
    		else if(t1==t2)
    		timee=t1;
    		printf("%lld\n",timee);
    	}
    	return 0;
    }   
