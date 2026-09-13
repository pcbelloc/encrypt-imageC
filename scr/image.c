#include <stdio.h>
#include <stdbool.h>
#include <image.h>
#include <fcntl.h>
#include <stdlib.h>



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

}