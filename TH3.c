#include <stdio.h>
int main(){
	FILE *taptin = NULL;
	const int SO_KY_TU_TOI_DA = 1000;
	char chuoi[SO_KY_TU_TOI_DA] ="";
	taptin = fopen("C\\ss16\\test3.txt","r");
	if (taptin != NULL){
		fgets(chuoi,SO_KY_TU_TOI_DA,taptin);
		printf("%s",chuoi);
		sclose (taptin);
	}
	return 0;
}
