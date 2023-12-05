#include <stdio.h>
#include <stdlib.h>
int main(){
	int i;
	FILE *filePointer;
	char buffer[100];
	
	filePointer = fopen("C:\\pro c\\tex\\Bt1.txt","r");
	
	if (filePointer == NULL){
		printf("Khong the mo duoc file");
		exit(0);
	}
	for(i=0;i<sizeof(buffer);i++){
	fread(buffer,sizeof(char),1,filePointer);
	printf("%s",buffer);
	}
	fclose(filePointer);
	
	return 0;
}
