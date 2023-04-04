#include <stdio.h>
#include <string.h>

#define WORDS 1000

int main() {
    char arr[] = "Moi ngay toi deu phai lam viec, lam viec de kiem tien, kiem tien de co the song, song mot cuoc song tot dep, tot dep den muc toi khong lo lang ve tuong lai, lo lang ve viec khong du tien de chi tieu. Tuy nhien, de dat duoc dieu do, toi phai co gang, co gang hon nua, doi khi phai hi sinh, hi sinh mot so thu de dat duoc muc tieu cua minh. Toi tin rang voi su no luc va chiu kho, moi dieu deu co the dat duoc, dat duoc trong cuoc song nay.";
    char *token;
    char words[WORDS][1000];
    int count[WORDS] = {0};
    int n = 0;

    // Tokenize the string into words
    token = strtok(arr, " ,.");
    while (token != NULL && n < WORDS) {
        strcpy(words[n], token);
        ++n;
        token = strtok(NULL, " ,.");
    }

    // Count the frequency of each word
    for (int i = 0; i < n; ++i) {
        if (strcmp(words[i], "") == 0) {
            continue;
        }
        int c = 1;
        for (int j = i + 1; j < n; ++j) {
            if (strcmp(words[i], words[j]) == 0) {
                ++c;
                strcpy(words[j], "");
            }
        }
        count[i] = c;
    }

    // Print the results
    for (int i = 0; i < n; ++i) {
        if (strcmp(words[i], "") != 0) {
            printf("%s: %d\n", words[i], count[i]);
        }
    }

    return 0;
}
