#include <stdio.h>

char main() {
    FILE *fp;

    fp = fopen("/tmp/test.txt", "r+");
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...", fp);
   fclose(fp); 
}
