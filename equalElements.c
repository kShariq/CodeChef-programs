
#include<stdio.h>
int main(){
	int T;
	while(T--){
		int N,i,j,even=0,odd=0;
		scanf("%d",&N);
		int arr[N];
		for(i=0;i<N;i++){
			scanf("%d",&arr[i]);
		}
		for(j=0;j<N;j++){
			if(arr[j]%2==0){
				even++;
			}
			else {odd++;}
		}
		if(even>odd){
			printf("%d",odd);}
		else{
			printf("%d",even);
		}
	}
}
