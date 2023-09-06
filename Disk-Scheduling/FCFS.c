#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main(){

int n,Total=0,initial;

printf("Enter the number of req strings:");
scanf("%d",&n);
int rq[n];
printf("Enter the initial head position:");
scanf("%d",&initial);

printf("Enter the req strings:");
for(int i=0;i<n;i++)
scanf("%d",&rq[i]);

for(int i=0;i<n;i++){
printf("Head moved from %d to %d\n",initial,rq[i]);
Total+=abs(initial-rq[i]);
initial=rq[i];
}

printf("Total Head Movement :%d",Total);


}
