#include<stdio.h>
int main(){
	char str[]= "Nguyen        Duc Anh";
	int  count = 1;
	for(int i =0;str[i]!='\0';i++){
		if(str[i]==' '){
			count++; 
		} 
	} 
	printf("So luong tu trong chuoi la: %d",count);
	return 0; 
} 
	
