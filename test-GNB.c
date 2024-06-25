
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

// gcc test.c output/RF-2-lib.c -Dlib=\"RF-2\" -I emlearn/emlearn -o test
#ifndef lib
#define lib "UNDEFINED"
#endif

#ifndef HEIGHT
#define HEIGHT 100
#endif

#ifndef WIDTH
#define WIDTH  2
#endif

#ifndef testfile
#define testfile "./testfile-default.txt"
#endif

#ifndef testsquarepow
#define notestsquarepow
#endif

int pred;

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    double latencies[HEIGHT];
    double accumulated =0;
    double mean, differ, varsum, variance, SD;
    clock_t begin, end;

    FILE *myfile;
    myfile=fopen(testfile, "r");
    if(myfile == NULL)
    {
        printf("Error opening file: %s", testfile);   
        exit(1);             
    }

    
    float Input2[WIDTH];
#ifdef testsquarepow
    double a,b,c,d;
    srand ( time ( NULL));

    a = (double)rand()/RAND_MAX*2.0-1.0;
    b = (double)rand()/RAND_MAX*2.0-1.0;
    c = (double)rand()/RAND_MAX*2.0-1.0;
#endif
    
    printf ("Algorithm: %s; ",lib); 
    
    for (int i=0; i<HEIGHT; i++){   
        for (int j = 0 ; j < WIDTH; j++)
        {
        fscanf(myfile,"%f",&Input2[j]);
        //printf("%.10f ",Input2[j]);
        }
        
        begin = clock();
        
#ifdef testsquarepow
        d = sqrt(pow((double)a, 2) + pow((double)b, 2) + pow((double)c, 2));
#endif
        
        pred=eml_bayes_predict(&classifier_model, Input2, WIDTH);

        end = clock();
        latencies[i] = (double)(end - begin) / CLOCKS_PER_SEC;
        accumulated += latencies[i];
        
        //printf ("%d \n", pred);

    }
    printf ("Total elapsed: ");
    mean = accumulated /(double)HEIGHT;
    varsum = 0;
    for(int i=0; i<HEIGHT; i++)
    {
        differ = latencies[i] - mean;
        varsum = varsum + pow(differ,2);
    }
    
    variance = varsum / (double)HEIGHT;
    SD = sqrt(variance);
   
    printf ("%lf; Mean: %lf; Variance: %lf; StdDev: %lf", accumulated, mean, variance, SD);
        
#ifdef testsquarepow
    printf (" - WITH vector modulo calculation\n");
#endif
    
#ifndef testsquarepow
    printf("\n");
#endif
    
    return 0;
}


