#include <stdio.h>
#include <stdlib.h>

void nc() {
    printf("Not Called, but you got this shell!\n");
    system("/bin/bash");
}

void vul(char* string) {
    char buffer[100];
    strcpy(buffer, string);
}

int main(int argc, char** argv) {
    vul(argv[1]);
    return 0;
}
