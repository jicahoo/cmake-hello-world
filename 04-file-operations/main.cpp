#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
    FILE* fileHandle = fopen("~/hello.txt", "r");
    if (fileHandle == NULL) {
        printf("Failed to open file. Error code: %d \n", errno);
        printf("Error description is : %s\n",strerror(errno));
    }
    return 0;
}
