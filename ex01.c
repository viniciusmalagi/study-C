#include<stdio.h>
#include<stdlib.h>

int main(){
	int  *pimba, x;
	pimba = (int*) malloc(x);
	*pimba=27;
	(*pimba)++;
	printf("%d",*pimba);
	return 0;
}
