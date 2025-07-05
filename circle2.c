#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define WIDTH 80
#define HEIGHT 40

void draw_circle(int xc, int yc, int r) {
    char screen[HEIGHT][WIDTH];

    // Clear screen buffer
    for (int i = 0; i < HEIGHT; i++)
        for (int j = 0; j < WIDTH; j++)
            screen[i][j] = ' ';

    // Midpoint Circle Drawing Algorithm
    int x = 0, y = r;
    int p = 1 - r;

    while (x <= y) {
        // Plot the 8 symmetrical points
        int points[8][2] = {
            { xc + x, yc + y }, { xc - x, yc + y },
            { xc + x, yc - y }, { xc - x, yc - y },
            { xc + y, yc + x }, { xc - y, yc + x },
            { xc + y, yc - x }, { xc - y, yc - x }
        };

        for (int i = 0; i < 8; i++) {
            int px = points[i][0];
            int py = points[i][1];
            if (px >= 0 && px < WIDTH && py >= 0 && py < HEIGHT)
                screen[py][px] = '*';
        }

        x++;
        if (p < 0)
            p += 2 * x + 1;
        else {
            y--;
            p += 2 * (x - y) + 1;
        }
    }

    // Print the screen buffer
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++)
            putchar(screen[i][j]);
        putchar('\n');
    }
}

int main() {
    int xc = WIDTH / 2;
    int yc = HEIGHT / 2;
    int radius;

    printf("Enter radius of the circle: ");
    scanf("%d", &radius);

    draw_circle(xc, yc, radius);

    return 0;
}