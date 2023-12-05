#include <stdio.h>
struct person {
    int id;
    char str[50];
};

void input_person(struct person *p) {
    printf("Nhap noi dung: ");
    getchar();
    scanf("%s", p -> str);
}

void print_person(struct person p) {
    printf("%s\n", p.str);
}

int main(){
	int i;
    FILE *fptr;
    fptr = fopen("C:\\pro c\\tex\\bt3.txt", "wb");
    if (fptr == NULL) {
        printf("Loi mo tep\n");
        return 1;
    }

    int n;
    printf("Nhap so dong: ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++) {
        struct person p;

        printf("Nhap noi dung dong %d:\n", i + 1);
        input_person(&p);

        fwrite(&p, sizeof(struct person), 1, fptr);
    }
    fclose(fptr);

    fptr = fopen("C:\\pro c\\tex\\bt3.txt", "rb");
    if (fptr == NULL) {
        printf("Loi mo tep\n");
        return 1;
    }
    printf("\n");
    for (i = 0; i < n; i++) {
        struct person p;        
        fread(&p, sizeof(struct person), 1, fptr);

        print_person(p);
    }

    fclose(fptr);

    return 0;
}
