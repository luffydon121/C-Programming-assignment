#include<stdio.h>

//20. to check whether a given number is prime or not using function.

void prime();

int main(){
	prime();
	return 0;
}

void prime(){
	printf("Prime numbers are: \n");
	for(int n=2; n<=100; n++){
		int flag=0;
		for(int j=2; j<n; j++){
			if(n%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("%d ",n);
		}
	}
}

