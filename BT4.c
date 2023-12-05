#include <stdio.h>
struct person {
    int id;
    char str[50];
};
void print_person(struct person p) {
    printf("%s\n", p.str);
}

int main(){
	int i,n;
	n = 0;
	FILE *f;
	
	f = fopen("C:\\pro c\\tex\\bt3.txt","rb");
	if (f == NULL) {
        printf("Loi mo tep\n");
        return 1;
    }
    for (i = 0; i < sizeof(struct person); i++) {
        struct person p;        
        fread(&p, sizeof(struct person), 1, f);
        print_person(p);
        n++;
    }
	printf("So dong = %d",n);
    fclose(f);

    return 0;
}
