#include<stdio.h>
int main(){
	char str[100];
	printf("Moi ban nhap chuoi:");
	scanf("%s",&str); 
	printf("%s\n",&str);
	for(int i =0;str[i]!=0;i++){
		printf("%c ",str[i]); 
	} 
	return 0; 
} 
