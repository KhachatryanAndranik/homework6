//#include <stdio.h>
//#include <string.h>
//
//#define MAX_LINE_LENGTH 256
//
//int main() {
//    FILE* file1, * file2;
//    char line1[MAX_LINE_LENGTH], line2[MAX_LINE_LENGTH];
//    int line_number = 1;
//
//    file1 = fopen("file1.txt", "r");
//    file2 = fopen("file2.txt", "r");
//
//    if (file1 == NULL || file2 == NULL) {
//        printf("Error.\n");
//        return 1;
//    }
//
//    while (fgets(line1, MAX_LINE_LENGTH, file1) != NULL &&
//        fgets(line2, MAX_LINE_LENGTH, file2) != NULL) {
//        if (strcmp(line1, line2) != 0) {
//            printf("Files differ at line %d:\n", line_number);
//            printf("File1: %s", line1);
//            printf("File2: %s", line2);
//            break;
//        }
//        line_number++;
//    }
//
//    fclose(file1);
//    fclose(file2);
//
//    return 0;
//}


#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 256

int main() {
    char keyword[50];             
    char line[MAX_LINE_LENGTH];    

    printf("Enter keyword to search: ");
    scanf("%s", keyword);


    FILE* file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file\n");
        return 1;
    }

    int line_number = 1;
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {

        if (strstr(line, keyword) != NULL) {
            printf("Line %d: %s", line_number, line);
        }
        line_number++;
    }

    fclose(file);

    return 0;
}