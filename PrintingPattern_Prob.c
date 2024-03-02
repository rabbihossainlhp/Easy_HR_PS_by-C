#include <stdio.h>

int main() {
    int user,mini,row,col;
    scanf("%d", &user);

    int len = 2 * user - 1;

    for ( row = 0; row < len; row++) {
        for ( col = 0; col < len; col++) {
             mini = row < col ? row : col;
            mini = mini < len - row ? mini : len - row - 1;
            mini = mini < len - col - 1 ? mini : len - col - 1;
            printf("%d ", user - mini);
        }
        printf("\n");
    }

    return 0;
}
