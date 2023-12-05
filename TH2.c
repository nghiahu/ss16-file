#include <stdio.h>
int main(){
	FILE *taptin = NULL;
	int kytuHientai = 0;
	taptin = fopen("C\\ss16\\test2.txt","r");
	if (taptin != NULL){
		do{
			kytuHientai =fget(taptin);
			printf("%c",kytuHientai);
		}while(ktuHientai) != EOF);
		fclose(taptin);
	}
	return 0;
}
