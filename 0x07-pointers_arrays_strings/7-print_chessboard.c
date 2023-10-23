#include <stdio.h>

void print_chessboard(char (*a)[8]) {
int i, j;

for (i = 0; i < 8; i++) {
for (j = 0; j < 8; j++) {
putchar(a[i][j]);
putchar(' '); // Add space for visual separation
}
putchar('\n'); // Move to the next line after each row
}
}

int main() {
char chessboard[8][8] = {
{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}
};

print_chessboard(chessboard);

return 0;
}

