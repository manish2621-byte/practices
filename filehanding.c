#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char *filename = "data.txt";
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("fopen write");
        return EXIT_FAILURE;
    }

    fprintf(fp, "Id\tName\tScore\n");
    fprintf(fp, "1\tAlice\t91\n");
    fprintf(fp, "2\tBob\t84\n");
    fprintf(fp, "3\tCharlie\t77\n");
    fclose(fp);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("fopen read");
        return EXIT_FAILURE;
    }

    printf("Contents of %s:\n", filename);
    char line[256];
    while (fgets(line, sizeof(line), fp) != NULL) {
        fputs(line, stdout);
    }
    fclose(fp);

    return EXIT_SUCCESS;
}
