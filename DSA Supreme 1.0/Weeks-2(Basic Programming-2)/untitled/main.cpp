#include <iostream>
#include <graphics.h>
#include <cmath>
#include <windows.h>

int main() {
    float x, y, x1, y1, x2, y2, dx, dy, step;
    int i, gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    std::cout << "Enter the starting point of line: ";
    std::cin >> x1 >> y1;

    std::cout << "Enter the ending point of line: ";
    std::cin >> x2 >> y2;

    dx = std::abs(x2 - x1);
    dy = std::abs(y2 - y1);

    if (dx >= dy) {
        step = dx;
    } else {
        step = dy;
    }

    dx = dx / step;
    dy = dy / step;

    x = x1;
    y = y1;
    i = 1;

    while (i <= step) {
        putpixel(x, y, WHITE);
        x = x + dx;
        y = y + dy;
        i = i + 1;
        Sleep(100);
    }

    getch();
    closegraph();
    return 0;
}
