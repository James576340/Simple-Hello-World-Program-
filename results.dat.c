/* 
Name: IRUNGU JAMES NDIRANGU 
Reg Number: PA106/G/28731/25
Description: C Files
*/

#include <stdio.h>

struct Student {
    char name[50];
    int regNo;
    float marks;
};

int main() {
    FILE *fptr;
    struct Student s;

    fptr = fopen("results.dat", "rb"); // Read binary
    if (fptr == NULL) {
        printf("Error opening results.dat file!\n");
        return 1;
    }

    printf("Student Results:\n");
    printf("-----------------\n");

    while (fread(&s, sizeof(struct Student), 1, fptr)) {
        printf("Name: %s\n", s.name);
        printf("Reg No: %d\n", s.regNo);
        printf("Marks: %.2f\n", s.marks);
        printf("-----------------\n");
    }

    fclose(fptr);
    return 0;
}