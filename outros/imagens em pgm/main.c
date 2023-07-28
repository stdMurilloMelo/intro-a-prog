#include "image.h"

int main(int argc, char const *argv[])
{
    Image I;
    I = img_new(100, 100);
    img_fill_background(I,0);
    img_draw_hline(I, 2, 2, 10, 255);
    img_write(I);
    img_free(I);
    return 0;
}
