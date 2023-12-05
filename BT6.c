#include <stdio.h>
struct sinh_vien {
    char ho_ten[50];
    int tuoi;
    char so_dien_thoai[15];
    char email[30];
};
void nhap_sinh_vien(struct sinh_vien *sv) {
    printf("Nhap ho ten: ");
    scanf("%[^\n]%*c", sv->ho_ten); 
    printf("Nhap tuoi: ");
    scanf("%d", &sv->tuoi);
    printf("Nhap so dien thoai: ");
    scanf("%s", sv->so_dien_thoai);
    printf("Nhap email: ");
    scanf("%s", sv->email);
}
void ghi_sinh_vien(FILE *fptr, struct sinh_vien sv) {
    fprintf(fptr, "%s, %d, %s, %s\n", sv.ho_ten, sv.tuoi, sv.so_dien_thoai, sv.email);
}

int main() {
	int i;
    FILE *fptr;

    fptr = fopen("C:\\pro c\\tex\\students.txt", "w");
    if (fptr == NULL) {
        printf("Loi mo tep\n");
        return 1;
    }

    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    struct sinh_vien ds[n];
    for ( i = 0; i < n; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        nhap_sinh_vien(&ds[i]);

        ghi_sinh_vien(fptr, ds[i]);
    }

    fclose(fptr);

    printf("Da luu thong tin sinh vien vao tep students.txt\n");

    return 0;
}

