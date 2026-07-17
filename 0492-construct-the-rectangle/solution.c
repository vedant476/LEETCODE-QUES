// #include <math.h>
// #include <stdlib.h>

int* constructRectangle(int area, int* returnSize) {

    int s = sqrt(area);

    while (area % s != 0) {
        s--;
    }

    int* ans = (int*)malloc(2 * sizeof(int));

    ans[0] = area / s;
    ans[1] = s;

    *returnSize = 2;

    return ans;
}