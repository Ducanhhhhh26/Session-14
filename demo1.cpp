#include<stdio.h>
//#include<string.h> 
int main(){
	char str[100];
	printf("moi ban nhap vao mot chuoi bat ki:");
	scanf("%s",&str);
		int length=0;
		for(int i=0;str[i]!='\0';i++){
			length++; 
		} 
	printf("Chuoi ban vua nhap la:%s\n",str);
	printf("Do dai cua chuoi ban vua nhap la:%d\n",length); 
	return 0; 
} 
