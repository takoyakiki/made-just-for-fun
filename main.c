#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int count = 0;
    printf("Hello World\n");
    char ss[100];
    printf("Do you think this code is written in Python?\n");
    printf("yes or no\n");

    while (true) {
        scanf("%s", ss);

        if (strcmp(ss, "yes") == 0 || strcmp(ss,"y") == 0) {
            printf("You can see it...it's written in C language.\n");
            break;
        } else if (strcmp(ss, "no") == 0 || strcmp(ss,"n") == 0) {
            printf("that's right! You'll know it when you see it! C or C++!\n");
            printf("Now, C language and C++. Which one?\n");

            char aa[100];
            while (true) {
                scanf("%s", aa);

                if (strcmp(aa, "c++") == 0 || strcmp(aa, "C++") == 0 || strcmp(aa, "cpp") == 0) {
                    printf("Is that it? Where is #include <iostream>?\n");
                    printf("Let's take a look at the code.\n");
                    break;
                } else if (strcmp(aa, "C") == 0 || strcmp(aa, "c") == 0) {
                    printf("yes! correct answer! nice!\n");
                    break;
                } else {
                    printf("What are you talking about?\n");
                }
            }
            break;
        } else {
            count += 1;

            if (count == 3 || count == 4) {
                printf("I said yes or no!\n");
            } else if (count == 5) {
                printf("You're saying yes or no! You idiot! You can't even read the letters!\n");
            } else if (count == 0 || count == 1 || count == 2) {
                printf("Creepy guy.\n");
                printf("yes or no\n");
            } else {
                printf("that's enough. I'm disappointed in you\n");
                break;
            }
        }
    }

    return 0;
}
