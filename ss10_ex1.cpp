#include<stdio.h>
int main(){
	
	int x,y;
	scanf("%d%d" ,&x,&y);
	int a[x][y];
	
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int k;
	scanf("%d",&k);
	int o=0;
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(a[i][j]==k){
			printf( "%d",i);
			o=1;
			break;
			}
		}
		
	}
	return 0;
	}

