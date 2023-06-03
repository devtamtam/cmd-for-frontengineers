#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if(argc!= 2) {printf("Usage:front htmlfilename\n"); }
    else{
        char command[100];
        sprintf(command, "code %s", argv[1]);
        system(command);
        sprintf(command, "code style.css");
        system(command);
        sprintf(command, "start %s", argv[1]);
        system(command);
    }


    return 0;
}
