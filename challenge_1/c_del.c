#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void del_buffer(char *buffer);

int main(void)
{
    char *str = malloc(sizeof(char) * 8);
    if (str == NULL) {
        return 1;
    }
    
    char obfuscatedStr[] = {((('p' ^ 0xAB) + 12) % 256), ((('e' ^ 0xAB) + 12) % 256), ((('g' ^ 0xAB) + 12) % 256), 
                            ((('a' ^ 0xAB) + 12) % 256), ((('s' ^ 0xAB) + 12) % 256), ((('u' ^ 0xAB) + 12) % 256), 
                            ((('s' ^ 0xAB) + 12) % 256), '\0'};
                            
    strcpy(str, obfuscatedStr);
    for (int i = 0; str[i]; i++) {
        str[i] = ((str[i] + 244) % 256) ^ 0xAB;
    }
    char buffer[8];
    strcpy(buffer, str);
    free(str);
    str = NULL; 
    del_buffer(buffer);
    if (str == NULL) {
        return 0;
    }
    return 1;
}
