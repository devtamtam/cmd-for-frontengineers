#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fileExists(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file != NULL) {
        fclose(file);
        return 1;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: front htmlfilename\n");
    } else {
        // Check if the HTML file exists
        if (!fileExists(argv[1])) {
            printf("HTML file not found: %s\ntry again\n", argv[1]);
            return 1;
        }

        char command[200];
        sprintf(command, "code %s && code style.css && start %s", argv[1], argv[1]);
        system(command);
    }

    return 0;
}
