#include <stdio.h>
int mail(){
	FILE *taptin = NULL;
	taptin = fopen("C\\ss16\\test.txt","w");
	if(taptin !=NULL){
		fputc('A',taptin);
		fclose(taptin);
	}
	return 0;
}
