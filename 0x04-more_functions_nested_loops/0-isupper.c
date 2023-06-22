#include <cctype>

int isUppercase(char c) {
    if (isupper(c)) {
        return 1;
    } else {
        return 0;
    }
}
