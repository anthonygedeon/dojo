#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER 40

const char *ascii_to_binary(const char *ascii) {
    switch (*ascii) {
        case 'a':
            return "01100001";
        case 'b':
            return "01100010";
        case 'c':
            return "01100011";
        case 'd':
            return "01100100";
        case 'e':
            return "01100101";
        case 'f':
            return "01100110";
        case 'g':
            return "01100111";
        case 'h':
            return "01101000";
        case 'i':
            return "01101001";
        case 'j':
            return "01101010";
        case 'k':
            return "01101011";
        case 'l':
            return "01101100";
        case 'm':
            return "01101101";
        case 'n':
            return "01101110";
        case 'o':
            return "01101111";
        case 'p':
            return "01110000";
        case 'q':
            return "01110001";
        case 'r':
            return "01110010";
        case 's':
            return "01110011";
        case 't':
            return "01110100";
        case 'u':
            return "01110101";
        case 'v':
            return "01110110";
        case 'w':
            return "01110111";
        case 'x':
            return "01111000";
        case 'y':
            return "01111001";
        case 'z':
            return "01111010";
    }
    return "";
}

void print(char arr[BUFFER][6]) {
        printf("[");
        for (int i = 0; i < BUFFER; i++) {
                printf("[");
                for (int j = 0; j < 6; j++) {
                        printf("%c", arr[i][j]);
                }
                printf("]\n");
        }
        printf("]");
}

char *str_slice(int *buffer, int start, int step, int end) {
        char *buffer;
        for (int i = start; i < end; i += step) {
               buffer[i] 
        }
        return buffer;
}

char *base64(const char *input) {
    char binary[BUFFER] = {};
    char bits[BUFFER][6];

    for (const char *i = input; *i != '\0'; i++) {
        strcat(binary, ascii_to_binary(i));
    }

    // 3. divide into 4 groups 
    for (int i = 0; i < BUFFER; i++) {
        for (int j = 0; j < BUFFER; j++) {
                bits[i][j] = binary[j];
        }
    }

    // 4. convert into base64
    
    //printf("[ ");
    //for (int i = 1; i < BUFFER; i++) {
    //    printf("%c", binary[i]);
    //}
    //printf(" ]\n");
     
    print(bits);
    
    return ""; 
}

int main(void) {
        printf("%s\n", base64("hello"));
        
        //assert(!strcmp("YQ==", base64("a")));
        //assert(strcmp("aGVsbG8=", base64("hello")));
        //assert(strcmp("Z29vZGJ5ZQ==", base64("goodbye")));
        //assert(strcmp("SGVsbG8sIFdvcmxkIQ==", base64("Hello, World!")));

        return 0;
}
