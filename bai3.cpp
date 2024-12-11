#include<stdio.h>
int main(){
	char str[100]; 
	int length=0;
	printf("moi ban nhap vao mot chuoi bat ki:");
	scanf("%s",&str);
		for(int i=0;str[i]!='\0';i++){
			length++; 
		}
//		printf("%d",length); 
		for(int i=length-1;i>=0;i--){
			printf("%c ",str[i]); 
		} 
		return 0;
		} 
