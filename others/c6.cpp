// NOTE: compile with g++ filename.cpp -std=c++11

#include <iostream>
#include <cmath>
#include <cstdlib>
#define DIM 1024
#define DM1 (DIM-1)
#define _sq(x) ((x)*(x)) // square
#define _cb(x) abs((x)*(x)*(x)) // absolute value of cube
#define _cr(x) (unsigned char)(pow((x),1.0/3.0)) // cube root

unsigned char GR(int,int);
unsigned char BL(int,int);

unsigned char RD(int i,int j){
    // YOUR CODE HERE
    #define S(f) float w=sqrt(_sq(32-i%64)+_sq(32-j%64))/91,x=sqrt(_sq(i-512)+_sq(j-512))/724;return((f)*w/2048*x-w*x+1)*255;
    S(2048-i-j)
}
unsigned char GR(int i,int j){
    // YOUR CODE HERE
    S(1024-i+j)
}
unsigned char BL(int i,int j){
    // YOUR CODE HERE
    S(1024+i-j)
}

void pixel_write(int,int);
FILE *fp;
int main(){
    fp = fopen("MathPic.ppm","wb");
    fprintf(fp, "P6\n%d %d\n255\n", DIM, DIM);
    for(int j=0;j<DIM;j++)
        for(int i=0;i<DIM;i++)
            pixel_write(i,j);
    fclose(fp);
    return 0;
}
void pixel_write(int i, int j){
    static unsigned char color[3];
    color[0] = RD(i,j)&255;
    color[1] = GR(i,j)&255;
    color[2] = BL(i,j)&255;
    fwrite(color, 1, 3, fp);
}
