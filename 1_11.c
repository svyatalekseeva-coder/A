#include <stdio.h>
#include <stdlib.h>


int step(int x1, int x2, int y1, int y2) {
    int d = 0;
    if ((x1 == x2 && y1 == y2) || x1 > 8 || x2 > 8 || y1 > 8 || y2 > 8) {
        return 3;
    }
    if(x1 == x2 && y1 != y2) {
        d = 1;
    }
    else if(x1 != x2 && y1 == y2) {
        d = 1;
    }
    else if(abs(x2 - x1) == abs(y2 - y1)) {
        d = 1;
    }
    else {
        d = 0;
    }
    return d;
}

int main() {
    int x1, y1, x2, y2, id;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    id = step(x1, x2, y1, y2);
    if(id == 0) {
        printf("No");
    }
    else if(id == 1) {
        printf("Yes");
    }
    else {
        printf("Error");
    }
    return 0;
}
