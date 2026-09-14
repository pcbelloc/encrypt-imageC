#ifndef PPM_H
#define PPM_H
#include <stdint.h> //https://www.ibm.com/docs/pt-br/i/7.5.0?topic=files-stdinth
#include <stdbool.h>

// max_val for PPM is 65536 

typedef struct
{
    uint16_t r, g, b; //usando 16_t pois max_val de PPM é 65536, botando 36 seria 2x mais memoria.
                      //https://netpbm.sourceforge.net/doc/ppm.html
} pixel;

typedef struct
{
    unsigned int rows;
    unsigned int cols;
    unsigned int max_val;

    pixel **pixels;
} ppmimage;

ppmimage **ppm_readimg(const char *filename);
void ppm_destroy(ppmimage* image);

void ppm_encrypt(ppmimage *image, const uint16_t *key);

bool ppm_writeimage(const char *filename, ppmimage *image);

// https://www.youtube.com/watch?v=LRajghjH5BI. 1:08 - 4:50, header file for PPM read/write perms.

#endif