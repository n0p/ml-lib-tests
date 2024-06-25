#include <stdio.h>
#include <time.h>
#include "rf.h"
#include <stdlib.h>

#define HEIGHT 10
#define WIDTH  2

int pred;

  /*float Input1[10][6] = {
  { 12, 1, 29, 62, 455, 89},  // NBIoT
  { 30, 1, 31, 80, 230, 18},  // LoRaWAN
  { 8, 1, 70, 88, 307, 60},  // DROP
  { 55, 1, 45, 28, 343, 88},  // NB-IoT
  { 41, 1, 87, 100, 88, 26},  // LoRaWAN
  { 36, 1, 0, 8, 122, 21},  // DROP
  { 78, 1, 66, 38, 147, 91},  // NBIoT
  { 84, 1, 38, 34, 104, 22},  // LoRaWAN
  { 9, 1, 56, 49, 460, 18},  // DROP
  { 63, 0, 89, 49, 249, 75 }   // NBIOT
};
*/



int main()
{
 time_t t;
 srand((unsigned) time(&t));

 FILE *myfile;
 myfile=fopen("test.txt", "r");
 float Input2[2];


 for (int i=0; i<HEIGHT; i++){
  //float Input2[4]={(double)rand() / (double)RAND_MAX, (double)rand() / (double)RAND_MAX, (double)rand() / (double)RAND_MAX, (double)rand() / (double)RAND_MAX};

    for (int j = 0 ; j < WIDTH; j++)
    {
      fscanf(myfile,"%f",&Input2[j]);
      printf("%.10f ",Input2[j]);
    }
    printf("\n");

    clock_t begin = clock();



    //pred=lib_predict(Input1[i],6);
    pred=lib_predict(Input2,2);

    clock_t end = clock();
    double microseconds= (double)(end - begin) / CLOCKS_PER_SEC;
    //printf ("%d \n", pred);

    //printf ("%lf \n", microseconds);

 }

   return 0;
}

