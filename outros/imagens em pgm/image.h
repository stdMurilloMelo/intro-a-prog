

typedef struct image
{
    int Width, Height;
    char **data;
} Image;

Image img_new(int width, int height);
void img_free(Image Img);
void img_fill_background(Image Img, char color);
void img_draw_hline(Image Img, int x0, int y0, int xf, char color);
void img_draw_vline(Image Img, int x0, int y0, int yf, char color);
void img_draw_rectangle(Image Img,int x0, int y0, int xf, int yf, char color);
void img_draw_rectangle_fill(Image Img,int x0, int y0, int xf, int yf, char color);
void img_write(Image Img);

