#include <stdio.h>
int main()
{ int t,men,women,collisions=0;
scanf("%d",&t);
scanf("%d %d\n",&men,&women);
int i,sum=0;
char a[men][women];
for(i=0;i<men;i++)
for(t=0;t<women;t++)
scanf("%c ",&a[i][t]);
for(i=0;i<women;i++)
{ for(t=0;t<men;t++)
if(a[t][i]=='1')
collisions=collisions+1;
sum+=collisions*(collisions-1)/2;
collisions=0;
}
printf("%d",sum);
	return 0;
}
