#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main(){

int n,Total=0,initial,size,ind=0;

/*printf("Enter the Disk Size:");
scanf("%d",&size);*/

printf("Enter the number of req strings:");
scanf("%d",&n);
int rq[n];
printf("Enter the initial head position:");
scanf("%d",&initial);

printf("Enter the req strings:");


for(int i=0;i<n;i++){
scanf("%d",&rq[i]);
}

for(int i=0;i<n;i++){
for(int j=0;j<n-i-1;j++){
if(rq[j+1]<rq[j]){
int temp=rq[j];
rq[j]=rq[j+1];
rq[j+1]=temp;
}
}
}

for(int i=0;i<n;i++){
if(rq[i]>initial){
ind=i-1;
break;
}
}

for(int i=ind;i>=0;i--){
printf("Head moved from %d to %d\n",initial,rq[i]);
Total+=abs(initial-rq[i]);
initial=rq[i];
}

printf("Head moved from %d to %d\n",initial,0);
Total+=abs(initial-0);
initial=0;


for(int i=ind+1;i<n;i++){
printf("Head moved from %d to %d\n",initial,rq[i]);
Total+=abs(initial-rq[i]);
initial=rq[i];
}

printf("Total Head Movement :%d",Total);

}
