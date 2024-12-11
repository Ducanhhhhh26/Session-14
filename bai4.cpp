#include<stdio.h>
int main (){
	char  n;
	int count =0; 
	char str[]="hiamducanh";
	printf("%s\n",str); 
	printf("moi ban nhap ki tu can tim:");
	scanf(" %c",&n);
	for(int i =0;str[i]!='\0';i++){
		if(n==str[i]){
			count++; 
		} 
	} 
//	if(count==0){
//		printf("ki tu khong ton tai !"); 
//	}else{
		printf("Ki tu %c xuat hien %d lan",n,count); 
//	}	
	return 0; 
} 

