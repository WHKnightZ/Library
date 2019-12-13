#include "lodepng.h"

void Swap_Image(unsigned char *img, unsigned w, unsigned h);
void Load_Png(unsigned char** img, unsigned* w, unsigned* h, const char* filename);
void Load_Png_Swap(unsigned char** img, unsigned* w, unsigned* h, const char* filename);

#include "loadpng.c"
