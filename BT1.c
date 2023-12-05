#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE * filePointer;
	char buffer[100];
	
	filePointer = fopen("C:\\pro c\\tex\\Bt1.txt","w");
	
	if (filePointer == NULL){
		printf("Khong the mo duoc file");
		exit(0);
	}else{
		printf("Nhap vao mot chuoi: ");
		gets(buffer);
		fprintf(filePointer,"%s ",buffer);
	}
	fclose(filePointer);
	return(0);
}
