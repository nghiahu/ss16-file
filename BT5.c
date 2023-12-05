#include <stdio.h>
FILE *f1, *f2, *f3;
f1 = fopen("C:\\pro c\\tex\\Bt1.txt", "r");
if (f1 == NULL) {
    printf("Loi mo tep bt1\n");
    return 1;
}
f2 = fopen("C:\\pro c\\tex\\bt3.txt", "r");
if (f2 == NULL) {
    printf("Loi mo tep bt03\n");
    return 1;
}
f3 = fopen("C:\\pro c\\tex\\bt5.txt", "w");
if (f3 == NULL) {
    printf("Loi mo tep bt5.txt\n");
    return 1;
}

char c;
 c= fgetc(f1);
while (c != EOF) {
    fputc(c, f3);
    c = fgetc(f1);
}
c = fgetc(f2);
while (c != EOF) {
    fputc(c, f3);
    c = fgetc(f2);
}
fclose(f1);
fclose(f2);
fclose(f3);

printf("Da sao chep noi dung tu 2 tep bt01 va bt03 sang tep bt5.txt\n");

