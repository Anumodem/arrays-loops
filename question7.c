#include <stdio.h>
int main()
{ int t,n,x[100002],y[100002];
scanf("%d",&t);
int i;
while(t--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
}
for(i=0;i<n;i++){
    scanf("%d",&y[i]);
}
int sum=0;
int sum1=0;
for(i=0;i<n;i++){
    if(i%2!=0){
        sum+=x[i];
        sum1+=y[i];
        
    }
    else {
        sum1+=x[i];
        sum+=y[i];
    }
} if (sum<sum1)
{printf("%d",sum);}
else
{printf("%d",sum1);}


	return 0;
}
