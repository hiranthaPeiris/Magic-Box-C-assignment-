#include<stdio.h>
void main(){
	int mBox [4][4];
	
	//reads data
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("Enter values for %d by %d: ",i,j);
			scanf("%d",&mBox[i][j]);
		}
	}
	
	//diagnol sum
	int d1Sum=0,d2Sum=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i==j){
				d1Sum+=mBox[i][j];
			}
		}
	}
	printf("D1 value: %d\n",d1Sum);
	for(int i=0;i<4;i++){
		for(int j=3;j>=0;j--){
			if(i==j){
				d2Sum+=mBox[i][j];
			}
		}
	}
	printf("D2 value: %d\n",d2Sum);

	//get row & column sum
	int rSum=0,cSum=0;
	if(d1Sum==d2Sum){
		for (int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				rSum+=mBox[i][j];
				cSum+=mBox[j][i];	
			}
			if(d1Sum!=rSum || d2Sum!=cSum){
				printf("This is not a magic Box\nExecuted on L2\n");
				return;
			}
			rSum=0;
			cSum=0;			 
		}
	}else{
		printf("This is not a magic Box\nExecuted on L1\n");
		return;
	}

	printf("Congratulations... This is a magic Box\n");

	
		
		
}
