#include <stdio.h>
int main()
{ 
    int numofapples,i,j;
    scanf("%d",&numofapples);
    int arr[numofapples];
    int count=0;
    for(i=0;i<numofapples;i++)
    {scanf("%d",&arr[i]);
        }
       
        for(i=0;i<numofapples;i++){ 
        for(j=i+1;j<numofapples;j++){
                if(arr[i]==arr[j]){
                count+=1;
                break;
                }
                }
        }
printf("%d",count);
return 0; 
    }
