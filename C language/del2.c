#include <stdio.h>

// ---------------- Preprocessor Directives ----------------
#define PI 3.14159            // constant macro
#define SQUARE(x) ((x) * (x)) // function-like macro

// #define DEBUG // Uncomment this to enable debug mode

#ifndef PI // if PI is not defined, then define it
#define PI 3.14
#endif

int main()
{
    FILE *fp;
    char ch;

    // ---------------- File Handling with Random Access ----------------
    fp = fopen("sample.txt", "w+"); // open file in read/write mode
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Write data into file
    fputs("Hello World!", fp);

    // Move file pointer to beginning
    rewind(fp);

    printf("Reading file content:\n");
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

    // Use ftell to get current position
    long pos = ftell(fp);
    printf("\n\nCurrent Position in file: %ld\n", pos);

    // Move pointer 6 bytes from beginning
    fseek(fp, 6, SEEK_SET);
    printf("After fseek, position: %ld\n", ftell(fp));

    // Read from that position
    ch = fgetc(fp);
    printf("Character at new position: %c\n", ch);

    // Rewind back to start
    rewind(fp);
    printf("Position after rewind: %ld\n", ftell(fp));

    fclose(fp);

    // ---------------- Using Macros ----------------
    int r = 5;
    printf("\nArea of Circle (r=5): %.2f\n", PI * SQUARE(r));

    // ---------------- Conditional Compilation ----------------
#ifdef DEBUG
    printf("Debugging is ENABLED\n");
#else
    printf("Debugging is DISABLED\n");
#endif

    return 0;
}
