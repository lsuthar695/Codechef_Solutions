    #include<stdio.h>
    int main()
    {
    	int t;
    	double time;
    	double s,v;
    	scanf("%d",&t);
    while(t--)
    {
    scanf("%lf%lf",&s,&v);
    time=(2*s)/(3*v);
    printf("%0.15lf\n",time);
    }
    return 0;
    } 
