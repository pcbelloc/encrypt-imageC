#define STB_IMAGE_IMPLEMENTATION
#include "stb_image/stb_image.h"
#include <stdio.h>
#include <stdbool.h>
#include <image.h>
#include <fcntl.h>
#include <image.h>
#include <stdlib.h>


// STB_IMAGE decode PNG/JPEG into RGB pixel data
// for conversion to PPM without relying on ImageMagick.

int main(){
    int width, height, channel;
    unsigned char  *data = stbi_load("input.png", &width, &height, &channel, 3);

    if(!data){
        perror("Error: no data found!");
        return 1; 
    }
    return 0;
}
//------------------------------------------------------------------------------

ppmimage *ppm_readimg(const char *filename){
    FILE *file = fopen(filename, "rb");
    if (file == NULL){
        perror("Error");
        return NULL;
    }

    fseek(file, 0, SEEK_END);
    size_t filesize = ftell(file);

    int file_desc = fileno(file);

    rewind(file);

    ppmimage *result = malloc(sizeof *result);

    
}

void ppm_destroy(ppmimage* image){

}

bool ppm_writeimage(const char *filename, ppmimage *image){
    
    return true;
}