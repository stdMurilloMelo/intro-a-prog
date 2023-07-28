#include "image.h"
#include <stdlib.h>
#include <stdio.h>

Image img_new(int width, int height)
{
    Image img;

    img.Height = height;
    img.Width = width;

    img.data = (char **)malloc(height * sizeof(char *));

    int i;

    for (i = 0; i < height; i++)
        img.data[i] = (char *)malloc(width * sizeof(char));

    return img;
}

void img_free(Image Img)
{
    int i;
    for (i = 0; i < Img.Height; i++)
        free(Img.data[i]);
    free(Img.data);
}

void img_fill_background(Image Img, char color)
{
    int i, j;

    for (i = 0; i < Img.Height; i++)
    {
        for (j = 0; j < Img.Width; j++)
        {
            Img.data[i][j] = color; n
        }
    }
}

void img_draw_hline(Image Img, int x0, int y0, int xf, char color)
{
    int i;
    for (i = x0; i < xf; i++)
    {
        Img.data[y0][i] = color;
    }
}

void img_draw_vline(Image Img, int x0, int y0, int yf, char color)
{
    int j;
    for (j = y0; j < yf; j++)
    {
        Img.data[j][x0] = color;
    }
}

void img_draw_rectangle(Image Img, int x0, int y0, int xf, int yf, char color)
{
    img_draw_hline(Img, x0, y0, xf, color);
    img_draw_hline(Img, x0, yf, xf, color);
    img_draw_vline(Img, x0, y0 + 1, yf - 1, color);
    img_draw_vline(Img, xf, y0 + 1, yf - 1, color);
}

void img_draw_rectangle_fill(Image Img, int x0, int y0, int xf, int yf, char color)
{
    int i, j;
    for (i = x0; i < xf; i++)
    {
        for (j = y0; j < yf; j++)
        {
            Img.data[j][i] = color;
        }
    }
}

void img_write(Image Img)
{
    int i, j;

    printf("P2\n");
    printf("%d %d\n", Img.Height, Img.Width);
    
    for ( i = 0; i < Img.Height; i++)
    {
        for ( j = 0; j < Img.Width; j++)
        {
            printf("%d ", Img.data[j][i]);
        }
        printf("\n");
    }
    
}