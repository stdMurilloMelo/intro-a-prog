#include <stdio.h>

char LowerCase(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

char UpperCase(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    return c;
}

int main() {
    char str[51];
    
    while (fgets(str, sizeof(str), stdin)) {
        int i = 0;
        int up = 1;
        
        while (str[i] != '\0' && str[i] != '\n') {
            if (str[i] != ' ') {
                if (up) {
                    str[i] = UpperCase(str[i]);
                } else {
                    str[i] = LowerCase(str[i]);
                }
                up = !up;
            }
            i++;
        }
        
        printf("%s", str);
    }
    
    return 0;
}
