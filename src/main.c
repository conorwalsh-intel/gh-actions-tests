/* Conor Walsh - Test Main 2025 */

#include <stdio.h>
#include <time.h>

char* current_time() {
    static char buffer[9];
    time_t t;
    struct tm* tm_info;

    time(&t);
    tm_info = localtime(&t);

    strftime(buffer, 9, "%H:%M:%S", tm_info);
    return buffer;
}

int main() {
    printf("Hello, World! (%s)\n", current_time());
    return 0;
}
