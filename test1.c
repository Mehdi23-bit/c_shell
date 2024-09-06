#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int main() {
    char buffer[1000];
    int fd = open("main.c", O_RDONLY);
    printf("%d\n",fd);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }

    ssize_t bytes_read = read(fd, buffer, sizeof(buffer));
    if (bytes_read == -1) {
        perror("Error reading file");
    } else {
        printf("Read %zd bytes\n", bytes_read);
        printf("%s\n",buffer);  // %zd is the format specifier for ssize_t
    }

    close(fd);
    return 0;
}
