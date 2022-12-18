#include <stdio.h>

int x[100],y[100],u[100],v[100];
int main()  { 
    int k, n, m; long long a = 0;
    int i;
    scanf("%d %d",&n,&k);
    m = n-1; 
    for ( i = 0; i < k; ++i)
        scanf("%d",x+i), --x[i], u[i] = m-x[i];
    for ( i = 0; i < k; ++i)
        scanf("%d",y+i), --y[i], v[i] = m-y[i];
    for ( i = 0; i < k; ++i)  
        if (x[i] < u[i])
            a += x[i];
        else
            a += u[i];     
    for ( i = 0; i < k; ++i)  
        if (y[i] < v[i])
            a += y[i];
        else
            a += v[i];     
    printf("%lld",a); 
	return 0;
}
