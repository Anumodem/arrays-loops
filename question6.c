#include <stdio.h>
#include <math.h>
int main()
{
    long int q,start,end;
    int c=0;
    scanf("%ld",&q);
    while(q--)
{
    scanf("%ld %ld",&start,&end);
    printf("%d\n",c=floor(sqrt(end))-ceil(sqrt(start))+1);
}
	return 0;
}
