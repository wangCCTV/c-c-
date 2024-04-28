#include <stdio.h>
#include <string.h>

void deleteChar(char a, char str[]) {
    int strLength = strlen(str); 
    int point = 0;
    for (int i = 0; i < strLength; i++) {
        if (str[i] == a) {
            continue; 
        } else {
            str[point] = str[i]; 
            point++; 
        }
    }
    str[point] = '\0'; 
}

int main(void) {
    char a; 
    char str[200]; 
    scanf("%s", str);
    deleteChar('a', str);
    puts(str);
	return 0;
}
