#include <stdarg.h>
#include <stdint.h>
#include <math.h>



#pragma once
/**
 * Compute kernel between feature vector and support vector.
 * Kernel type: rbf
 */
double compute_kernel(double x[6], ...) {
    va_list w;
    double kernel = 0.0;
    va_start(w, 6);
    for (uint16_t i = 0; i < 6; i++)
            kernel += pow(x[i] -  va_arg(w, double) , 2);
        kernel = exp(-0.0001 * kernel);
    return kernel;
}
/**
 * Predict class for features vector
 */
int predict(double *x) {
    double kernels[586] = { 0 };
    double decisions[3] = { 0 };
    int votes[3] = { 0 };
        kernels[0] = compute_kernel(x,   2.0  , 1.0  , 87.0  , 36.0  , 367.0  , 39.0 );
        kernels[1] = compute_kernel(x,   65.0  , 0.0  , 36.0  , 8.0  , 278.0  , 6.0 );
        kernels[2] = compute_kernel(x,   37.0  , 0.0  , 19.0  , 5.0  , 225.0  , 49.0 );
        kernels[3] = compute_kernel(x,   84.0  , 0.0  , 57.0  , 7.0  , 428.0  , 1.0 );
        kernels[4] = compute_kernel(x,   11.0  , 0.0  , 43.0  , 10.0  , 207.0  , 4.0 );
        kernels[5] = compute_kernel(x,   68.0  , 1.0  , 49.0  , 1.0  , 244.0  , 59.0 );
        kernels[6] = compute_kernel(x,   79.0  , 1.0  , 97.0  , 9.0  , 276.0  , 45.0 );
        kernels[7] = compute_kernel(x,   96.0  , 0.0  , 70.0  , 9.0  , 285.0  , 72.0 );
        kernels[8] = compute_kernel(x,   35.0  , 0.0  , 59.0  , 6.0  , 119.0  , 93.0 );
        kernels[9] = compute_kernel(x,   4.0  , 0.0  , 62.0  , 32.0  , 451.0  , 26.0 );
        kernels[10] = compute_kernel(x,   3.0  , 0.0  , 32.0  , 67.0  , 338.0  , 16.0 );
        kernels[11] = compute_kernel(x,   8.0  , 1.0  , 70.0  , 88.0  , 307.0  , 60.0 );
        kernels[12] = compute_kernel(x,   45.0  , 1.0  , 16.0  , 9.0  , 310.0  , 41.0 );
        kernels[13] = compute_kernel(x,   3.0  , 0.0  , 38.0  , 44.0  , 286.0  , 22.0 );
        kernels[14] = compute_kernel(x,   99.0  , 1.0  , 33.0  , 8.0  , 456.0  , 7.0 );
        kernels[15] = compute_kernel(x,   68.0  , 1.0  , 63.0  , 5.0  , 431.0  , 40.0 );
        kernels[16] = compute_kernel(x,   5.0  , 1.0  , 44.0  , 73.0  , 390.0  , 96.0 );
        kernels[17] = compute_kernel(x,   2.0  , 0.0  , 70.0  , 37.0  , 272.0  , 21.0 );
        kernels[18] = compute_kernel(x,   4.0  , 0.0  , 26.0  , 13.0  , 488.0  , 63.0 );
        kernels[19] = compute_kernel(x,   1.0  , 1.0  , 68.0  , 84.0  , 248.0  , 95.0 );
        kernels[20] = compute_kernel(x,   73.0  , 1.0  , 54.0  , 4.0  , 470.0  , 14.0 );
        kernels[21] = compute_kernel(x,   6.0  , 1.0  , 99.0  , 90.0  , 385.0  , 31.0 );
        kernels[22] = compute_kernel(x,   6.0  , 0.0  , 33.0  , 16.0  , 57.0  , 25.0 );
        kernels[23] = compute_kernel(x,   4.0  , 0.0  , 94.0  , 58.0  , 411.0  , 62.0 );
        kernels[24] = compute_kernel(x,   4.0  , 0.0  , 83.0  , 12.0  , 164.0  , 61.0 );
        kernels[25] = compute_kernel(x,   3.0  , 0.0  , 12.0  , 62.0  , 321.0  , 30.0 );
        kernels[26] = compute_kernel(x,   3.0  , 0.0  , 5.0  , 95.0  , 425.0  , 42.0 );
        kernels[27] = compute_kernel(x,   1.0  , 1.0  , 59.0  , 12.0  , 290.0  , 99.0 );
        kernels[28] = compute_kernel(x,   87.0  , 0.0  , 14.0  , 0.0  , 391.0  , 55.0 );
        kernels[29] = compute_kernel(x,   3.0  , 1.0  , 52.0  , 51.0  , 224.0  , 4.0 );
        kernels[30] = compute_kernel(x,   3.0  , 1.0  , 12.0  , 57.0  , 163.0  , 63.0 );
        kernels[31] = compute_kernel(x,   9.0  , 0.0  , 28.0  , 71.0  , 362.0  , 48.0 );
        kernels[32] = compute_kernel(x,   75.0  , 1.0  , 43.0  , 3.0  , 440.0  , 56.0 );
        kernels[33] = compute_kernel(x,   22.0  , 1.0  , 87.0  , 9.0  , 476.0  , 87.0 );
        kernels[34] = compute_kernel(x,   42.0  , 0.0  , 77.0  , 4.0  , 315.0  , 92.0 );
        kernels[35] = compute_kernel(x,   62.0  , 1.0  , 88.0  , 5.0  , 345.0  , 38.0 );
        kernels[36] = compute_kernel(x,   81.0  , 0.0  , 52.0  , 0.0  , 273.0  , 66.0 );
        kernels[37] = compute_kernel(x,   28.0  , 0.0  , 21.0  , 3.0  , 396.0  , 12.0 );
        kernels[38] = compute_kernel(x,   82.0  , 0.0  , 16.0  , 4.0  , 211.0  , 48.0 );
        kernels[39] = compute_kernel(x,   7.0  , 1.0  , 20.0  , 65.0  , 441.0  , 34.0 );
        kernels[40] = compute_kernel(x,   7.0  , 0.0  , 24.0  , 87.0  , 355.0  , 20.0 );
        kernels[41] = compute_kernel(x,   7.0  , 0.0  , 71.0  , 6.0  , 163.0  , 64.0 );
        kernels[42] = compute_kernel(x,   92.0  , 1.0  , 63.0  , 6.0  , 413.0  , 3.0 );
        kernels[43] = compute_kernel(x,   7.0  , 1.0  , 43.0  , 67.0  , 403.0  , 56.0 );
        kernels[44] = compute_kernel(x,   2.0  , 1.0  , 32.0  , 65.0  , 485.0  , 56.0 );
        kernels[45] = compute_kernel(x,   8.0  , 0.0  , 40.0  , 64.0  , 376.0  , 23.0 );
        kernels[46] = compute_kernel(x,   22.0  , 0.0  , 77.0  , 0.0  , 252.0  , 62.0 );
        kernels[47] = compute_kernel(x,   9.0  , 0.0  , 77.0  , 15.0  , 375.0  , 8.0 );
        kernels[48] = compute_kernel(x,   9.0  , 0.0  , 64.0  , 100.0  , 125.0  , 22.0 );
        kernels[49] = compute_kernel(x,   40.0  , 0.0  , 34.0  , 2.0  , 368.0  , 87.0 );
        kernels[50] = compute_kernel(x,   62.0  , 0.0  , 57.0  , 1.0  , 288.0  , 96.0 );
        kernels[51] = compute_kernel(x,   8.0  , 1.0  , 8.0  , 56.0  , 286.0  , 6.0 );
        kernels[52] = compute_kernel(x,   5.0  , 0.0  , 71.0  , 16.0  , 229.0  , 94.0 );
        kernels[53] = compute_kernel(x,   6.0  , 0.0  , 61.0  , 26.0  , 244.0  , 4.0 );
        kernels[54] = compute_kernel(x,   59.0  , 0.0  , 20.0  , 8.0  , 218.0  , 43.0 );
        kernels[55] = compute_kernel(x,   28.0  , 1.0  , 44.0  , 7.0  , 262.0  , 66.0 );
        kernels[56] = compute_kernel(x,   13.0  , 1.0  , 6.0  , 2.0  , 485.0  , 64.0 );
        kernels[57] = compute_kernel(x,   99.0  , 0.0  , 70.0  , 7.0  , 211.0  , 37.0 );
        kernels[58] = compute_kernel(x,   84.0  , 0.0  , 95.0  , 9.0  , 198.0  , 36.0 );
        kernels[59] = compute_kernel(x,   56.0  , 1.0  , 83.0  , 9.0  , 397.0  , 22.0 );
        kernels[60] = compute_kernel(x,   37.0  , 1.0  , 47.0  , 0.0  , 360.0  , 65.0 );
        kernels[61] = compute_kernel(x,   1.0  , 0.0  , 61.0  , 31.0  , 244.0  , 48.0 );
        kernels[62] = compute_kernel(x,   4.0  , 0.0  , 9.0  , 38.0  , 184.0  , 5.0 );
        kernels[63] = compute_kernel(x,   9.0  , 1.0  , 85.0  , 71.0  , 403.0  , 75.0 );
        kernels[64] = compute_kernel(x,   3.0  , 0.0  , 76.0  , 32.0  , 76.0  , 71.0 );
        kernels[65] = compute_kernel(x,   34.0  , 1.0  , 77.0  , 5.0  , 428.0  , 37.0 );
        kernels[66] = compute_kernel(x,   23.0  , 0.0  , 28.0  , 2.0  , 416.0  , 38.0 );
        kernels[67] = compute_kernel(x,   6.0  , 0.0  , 78.0  , 60.0  , 285.0  , 76.0 );
        kernels[68] = compute_kernel(x,   1.0  , 0.0  , 93.0  , 48.0  , 278.0  , 81.0 );
        kernels[69] = compute_kernel(x,   67.0  , 1.0  , 18.0  , 2.0  , 449.0  , 79.0 );
        kernels[70] = compute_kernel(x,   4.0  , 1.0  , 3.0  , 66.0  , 113.0  , 36.0 );
        kernels[71] = compute_kernel(x,   3.0  , 0.0  , 56.0  , 76.0  , 478.0  , 4.0 );
        kernels[72] = compute_kernel(x,   8.0  , 1.0  , 76.0  , 12.0  , 282.0  , 31.0 );
        kernels[73] = compute_kernel(x,   8.0  , 1.0  , 61.0  , 2.0  , 395.0  , 77.0 );
        kernels[74] = compute_kernel(x,   4.0  , 1.0  , 24.0  , 63.0  , 291.0  , 63.0 );
        kernels[75] = compute_kernel(x,   3.0  , 0.0  , 1.0  , 46.0  , 339.0  , 14.0 );
        kernels[76] = compute_kernel(x,   9.0  , 1.0  , 38.0  , 58.0  , 294.0  , 78.0 );
        kernels[77] = compute_kernel(x,   14.0  , 0.0  , 88.0  , 10.0  , 217.0  , 61.0 );
        kernels[78] = compute_kernel(x,   61.0  , 1.0  , 74.0  , 3.0  , 454.0  , 21.0 );
        kernels[79] = compute_kernel(x,   23.0  , 1.0  , 72.0  , 5.0  , 320.0  , 80.0 );
        kernels[80] = compute_kernel(x,   53.0  , 0.0  , 4.0  , 2.0  , 90.0  , 72.0 );
        kernels[81] = compute_kernel(x,   25.0  , 1.0  , 46.0  , 2.0  , 462.0  , 69.0 );
        kernels[82] = compute_kernel(x,   48.0  , 1.0  , 13.0  , 0.0  , 358.0  , 4.0 );
        kernels[83] = compute_kernel(x,   7.0  , 0.0  , 76.0  , 73.0  , 156.0  , 22.0 );
        kernels[84] = compute_kernel(x,   7.0  , 0.0  , 98.0  , 82.0  , 192.0  , 57.0 );
        kernels[85] = compute_kernel(x,   3.0  , 0.0  , 93.0  , 98.0  , 356.0  , 99.0 );
        kernels[86] = compute_kernel(x,   8.0  , 1.0  , 22.0  , 97.0  , 279.0  , 84.0 );
        kernels[87] = compute_kernel(x,   6.0  , 1.0  , 39.0  , 98.0  , 466.0  , 21.0 );
        kernels[88] = compute_kernel(x,   16.0  , 0.0  , 92.0  , 8.0  , 334.0  , 37.0 );
        kernels[89] = compute_kernel(x,   5.0  , 0.0  , 37.0  , 50.0  , 238.0  , 15.0 );
        kernels[90] = compute_kernel(x,   8.0  , 0.0  , 5.0  , 17.0  , 120.0  , 11.0 );
        kernels[91] = compute_kernel(x,   13.0  , 1.0  , 77.0  , 10.0  , 443.0  , 57.0 );
        kernels[92] = compute_kernel(x,   5.0  , 0.0  , 11.0  , 49.0  , 325.0  , 26.0 );
        kernels[93] = compute_kernel(x,   2.0  , 0.0  , 20.0  , 72.0  , 351.0  , 72.0 );
        kernels[94] = compute_kernel(x,   6.0  , 0.0  , 18.0  , 19.0  , 98.0  , 60.0 );
        kernels[95] = compute_kernel(x,   95.0  , 1.0  , 0.0  , 1.0  , 80.0  , 31.0 );
        kernels[96] = compute_kernel(x,   5.0  , 1.0  , 31.0  , 93.0  , 194.0  , 35.0 );
        kernels[97] = compute_kernel(x,   8.0  , 0.0  , 86.0  , 98.0  , 351.0  , 27.0 );
        kernels[98] = compute_kernel(x,   16.0  , 0.0  , 66.0  , 0.0  , 193.0  , 97.0 );
        kernels[99] = compute_kernel(x,   8.0  , 1.0  , 5.0  , 79.0  , 386.0  , 85.0 );
        kernels[100] = compute_kernel(x,   80.0  , 0.0  , 21.0  , 7.0  , 187.0  , 83.0 );
        kernels[101] = compute_kernel(x,   97.0  , 0.0  , 6.0  , 6.0  , 127.0  , 7.0 );
        kernels[102] = compute_kernel(x,   1.0  , 1.0  , 10.0  , 55.0  , 411.0  , 9.0 );
        kernels[103] = compute_kernel(x,   7.0  , 1.0  , 100.0  , 6.0  , 325.0  , 99.0 );
        kernels[104] = compute_kernel(x,   6.0  , 0.0  , 28.0  , 8.0  , 417.0  , 65.0 );
        kernels[105] = compute_kernel(x,   5.0  , 1.0  , 77.0  , 36.0  , 337.0  , 18.0 );
        kernels[106] = compute_kernel(x,   8.0  , 1.0  , 73.0  , 20.0  , 441.0  , 82.0 );
        kernels[107] = compute_kernel(x,   59.0  , 0.0  , 37.0  , 8.0  , 72.0  , 30.0 );
        kernels[108] = compute_kernel(x,   72.0  , 0.0  , 60.0  , 5.0  , 322.0  , 42.0 );
        kernels[109] = compute_kernel(x,   95.0  , 0.0  , 48.0  , 6.0  , 334.0  , 84.0 );
        kernels[110] = compute_kernel(x,   7.0  , 0.0  , 59.0  , 11.0  , 268.0  , 23.0 );
        kernels[111] = compute_kernel(x,   2.0  , 1.0  , 38.0  , 12.0  , 351.0  , 85.0 );
        kernels[112] = compute_kernel(x,   26.0  , 0.0  , 26.0  , 8.0  , 63.0  , 11.0 );
        kernels[113] = compute_kernel(x,   64.0  , 0.0  , 3.0  , 0.0  , 68.0  , 33.0 );
        kernels[114] = compute_kernel(x,   9.0  , 1.0  , 13.0  , 19.0  , 372.0  , 27.0 );
        kernels[115] = compute_kernel(x,   29.0  , 1.0  , 33.0  , 1.0  , 322.0  , 96.0 );
        kernels[116] = compute_kernel(x,   5.0  , 1.0  , 17.0  , 72.0  , 379.0  , 7.0 );
        kernels[117] = compute_kernel(x,   76.0  , 1.0  , 83.0  , 5.0  , 482.0  , 31.0 );
        kernels[118] = compute_kernel(x,   24.0  , 1.0  , 82.0  , 7.0  , 372.0  , 58.0 );
        kernels[119] = compute_kernel(x,   93.0  , 0.0  , 43.0  , 10.0  , 102.0  , 12.0 );
        kernels[120] = compute_kernel(x,   45.0  , 0.0  , 26.0  , 8.0  , 54.0  , 82.0 );
        kernels[121] = compute_kernel(x,   17.0  , 0.0  , 82.0  , 9.0  , 386.0  , 41.0 );
        kernels[122] = compute_kernel(x,   99.0  , 1.0  , 98.0  , 6.0  , 393.0  , 12.0 );
        kernels[123] = compute_kernel(x,   71.0  , 0.0  , 79.0  , 8.0  , 458.0  , 70.0 );
        kernels[124] = compute_kernel(x,   3.0  , 0.0  , 19.0  , 2.0  , 432.0  , 35.0 );
        kernels[125] = compute_kernel(x,   3.0  , 1.0  , 72.0  , 21.0  , 284.0  , 57.0 );
        kernels[126] = compute_kernel(x,   7.0  , 0.0  , 44.0  , 52.0  , 112.0  , 62.0 );
        kernels[127] = compute_kernel(x,   14.0  , 0.0  , 98.0  , 3.0  , 170.0  , 15.0 );
        kernels[128] = compute_kernel(x,   7.0  , 0.0  , 63.0  , 75.0  , 397.0  , 99.0 );
        kernels[129] = compute_kernel(x,   5.0  , 0.0  , 96.0  , 41.0  , 164.0  , 100.0 );
        kernels[130] = compute_kernel(x,   14.0  , 1.0  , 59.0  , 10.0  , 485.0  , 22.0 );
        kernels[131] = compute_kernel(x,   4.0  , 1.0  , 63.0  , 73.0  , 396.0  , 0.0 );
        kernels[132] = compute_kernel(x,   4.0  , 1.0  , 46.0  , 14.0  , 475.0  , 90.0 );
        kernels[133] = compute_kernel(x,   4.0  , 1.0  , 61.0  , 77.0  , 353.0  , 11.0 );
        kernels[134] = compute_kernel(x,   75.0  , 1.0  , 14.0  , 5.0  , 246.0  , 18.0 );
        kernels[135] = compute_kernel(x,   5.0  , 0.0  , 77.0  , 10.0  , 228.0  , 38.0 );
        kernels[136] = compute_kernel(x,   19.0  , 1.0  , 73.0  , 6.0  , 458.0  , 5.0 );
        kernels[137] = compute_kernel(x,   7.0  , 0.0  , 86.0  , 59.0  , 364.0  , 30.0 );
        kernels[138] = compute_kernel(x,   87.0  , 0.0  , 60.0  , 3.0  , 196.0  , 5.0 );
        kernels[139] = compute_kernel(x,   93.0  , 0.0  , 85.0  , 2.0  , 228.0  , 57.0 );
        kernels[140] = compute_kernel(x,   3.0  , 1.0  , 35.0  , 72.0  , 62.0  , 1.0 );
        kernels[141] = compute_kernel(x,   1.0  , 0.0  , 1.0  , 23.0  , 459.0  , 35.0 );
        kernels[142] = compute_kernel(x,   1.0  , 1.0  , 70.0  , 25.0  , 494.0  , 20.0 );
        kernels[143] = compute_kernel(x,   4.0  , 1.0  , 22.0  , 33.0  , 416.0  , 3.0 );
        kernels[144] = compute_kernel(x,   70.0  , 0.0  , 73.0  , 4.0  , 296.0  , 12.0 );
        kernels[145] = compute_kernel(x,   59.0  , 0.0  , 19.0  , 6.0  , 271.0  , 34.0 );
        kernels[146] = compute_kernel(x,   54.0  , 0.0  , 83.0  , 5.0  , 175.0  , 62.0 );
        kernels[147] = compute_kernel(x,   60.0  , 0.0  , 93.0  , 2.0  , 481.0  , 47.0 );
        kernels[148] = compute_kernel(x,   2.0  , 1.0  , 80.0  , 94.0  , 50.0  , 41.0 );
        kernels[149] = compute_kernel(x,   37.0  , 1.0  , 11.0  , 3.0  , 363.0  , 7.0 );
        kernels[150] = compute_kernel(x,   7.0  , 1.0  , 79.0  , 84.0  , 411.0  , 13.0 );
        kernels[151] = compute_kernel(x,   3.0  , 1.0  , 7.0  , 73.0  , 258.0  , 95.0 );
        kernels[152] = compute_kernel(x,   42.0  , 1.0  , 3.0  , 8.0  , 371.0  , 97.0 );
        kernels[153] = compute_kernel(x,   74.0  , 1.0  , 0.0  , 5.0  , 342.0  , 50.0 );
        kernels[154] = compute_kernel(x,   6.0  , 0.0  , 35.0  , 17.0  , 314.0  , 80.0 );
        kernels[155] = compute_kernel(x,   9.0  , 0.0  , 52.0  , 0.0  , 498.0  , 44.0 );
        kernels[156] = compute_kernel(x,   19.0  , 0.0  , 87.0  , 10.0  , 329.0  , 11.0 );
        kernels[157] = compute_kernel(x,   80.0  , 0.0  , 85.0  , 10.0  , 472.0  , 48.0 );
        kernels[158] = compute_kernel(x,   62.0  , 0.0  , 84.0  , 3.0  , 211.0  , 17.0 );
        kernels[159] = compute_kernel(x,   56.0  , 0.0  , 97.0  , 9.0  , 113.0  , 46.0 );
        kernels[160] = compute_kernel(x,   4.0  , 1.0  , 80.0  , 43.0  , 162.0  , 92.0 );
        kernels[161] = compute_kernel(x,   3.0  , 1.0  , 89.0  , 60.0  , 135.0  , 20.0 );
        kernels[162] = compute_kernel(x,   80.0  , 0.0  , 47.0  , 8.0  , 230.0  , 61.0 );
        kernels[163] = compute_kernel(x,   32.0  , 0.0  , 15.0  , 0.0  , 350.0  , 14.0 );
        kernels[164] = compute_kernel(x,   47.0  , 0.0  , 65.0  , 9.0  , 294.0  , 58.0 );
        kernels[165] = compute_kernel(x,   91.0  , 0.0  , 81.0  , 5.0  , 210.0  , 95.0 );
        kernels[166] = compute_kernel(x,   58.0  , 1.0  , 76.0  , 7.0  , 417.0  , 99.0 );
        kernels[167] = compute_kernel(x,   2.0  , 0.0  , 8.0  , 77.0  , 274.0  , 22.0 );
        kernels[168] = compute_kernel(x,   20.0  , 1.0  , 31.0  , 1.0  , 255.0  , 99.0 );
        kernels[169] = compute_kernel(x,   2.0  , 1.0  , 77.0  , 36.0  , 107.0  , 33.0 );
        kernels[170] = compute_kernel(x,   69.0  , 1.0  , 55.0  , 63.0  , 239.0  , 45.0 );
        kernels[171] = compute_kernel(x,   85.0  , 1.0  , 6.0  , 0.0  , 221.0  , 44.0 );
        kernels[172] = compute_kernel(x,   95.0  , 1.0  , 7.0  , 71.0  , 228.0  , 1.0 );
        kernels[173] = compute_kernel(x,   7.0  , 1.0  , 58.0  , 27.0  , 60.0  , 99.0 );
        kernels[174] = compute_kernel(x,   6.0  , 1.0  , 16.0  , 60.0  , 104.0  , 31.0 );
        kernels[175] = compute_kernel(x,   19.0  , 1.0  , 32.0  , 24.0  , 56.0  , 2.0 );
        kernels[176] = compute_kernel(x,   59.0  , 1.0  , 54.0  , 61.0  , 220.0  , 4.0 );
        kernels[177] = compute_kernel(x,   36.0  , 1.0  , 22.0  , 70.0  , 175.0  , 45.0 );
        kernels[178] = compute_kernel(x,   81.0  , 1.0  , 14.0  , 26.0  , 197.0  , 16.0 );
        kernels[179] = compute_kernel(x,   71.0  , 1.0  , 49.0  , 61.0  , 76.0  , 19.0 );
        kernels[180] = compute_kernel(x,   49.0  , 1.0  , 23.0  , 56.0  , 149.0  , 2.0 );
        kernels[181] = compute_kernel(x,   18.0  , 1.0  , 52.0  , 83.0  , 217.0  , 35.0 );
        kernels[182] = compute_kernel(x,   11.0  , 1.0  , 73.0  , 26.0  , 228.0  , 0.0 );
        kernels[183] = compute_kernel(x,   52.0  , 1.0  , 58.0  , 72.0  , 170.0  , 47.0 );
        kernels[184] = compute_kernel(x,   39.0  , 1.0  , 15.0  , 50.0  , 211.0  , 42.0 );
        kernels[185] = compute_kernel(x,   11.0  , 1.0  , 22.0  , 92.0  , 63.0  , 6.0 );
        kernels[186] = compute_kernel(x,   12.0  , 1.0  , 42.0  , 77.0  , 145.0  , 23.0 );
        kernels[187] = compute_kernel(x,   31.0  , 1.0  , 60.0  , 2.0  , 224.0  , 6.0 );
        kernels[188] = compute_kernel(x,   17.0  , 1.0  , 35.0  , 86.0  , 131.0  , 30.0 );
        kernels[189] = compute_kernel(x,   16.0  , 1.0  , 91.0  , 33.0  , 142.0  , 1.0 );
        kernels[190] = compute_kernel(x,   29.0  , 1.0  , 98.0  , 11.0  , 107.0  , 19.0 );
        kernels[191] = compute_kernel(x,   83.0  , 1.0  , 69.0  , 3.0  , 79.0  , 45.0 );
        kernels[192] = compute_kernel(x,   71.0  , 1.0  , 36.0  , 67.0  , 74.0  , 24.0 );
        kernels[193] = compute_kernel(x,   28.0  , 1.0  , 17.0  , 5.0  , 162.0  , 82.0 );
        kernels[194] = compute_kernel(x,   7.0  , 1.0  , 47.0  , 83.0  , 130.0  , 82.0 );
        kernels[195] = compute_kernel(x,   25.0  , 1.0  , 35.0  , 72.0  , 102.0  , 4.0 );
        kernels[196] = compute_kernel(x,   39.0  , 1.0  , 67.0  , 59.0  , 209.0  , 29.0 );
        kernels[197] = compute_kernel(x,   67.0  , 1.0  , 86.0  , 82.0  , 181.0  , 41.0 );
        kernels[198] = compute_kernel(x,   92.0  , 1.0  , 44.0  , 32.0  , 126.0  , 34.0 );
        kernels[199] = compute_kernel(x,   21.0  , 1.0  , 15.0  , 58.0  , 102.0  , 42.0 );
        kernels[200] = compute_kernel(x,   9.0  , 1.0  , 35.0  , 93.0  , 188.0  , 81.0 );
        kernels[201] = compute_kernel(x,   12.0  , 1.0  , 52.0  , 81.0  , 139.0  , 48.0 );
        kernels[202] = compute_kernel(x,   38.0  , 1.0  , 30.0  , 46.0  , 167.0  , 0.0 );
        kernels[203] = compute_kernel(x,   76.0  , 1.0  , 50.0  , 21.0  , 190.0  , 40.0 );
        kernels[204] = compute_kernel(x,   7.0  , 1.0  , 77.0  , 57.0  , 191.0  , 4.0 );
        kernels[205] = compute_kernel(x,   86.0  , 1.0  , 18.0  , 25.0  , 178.0  , 47.0 );
        kernels[206] = compute_kernel(x,   9.0  , 1.0  , 48.0  , 47.0  , 171.0  , 70.0 );
        kernels[207] = compute_kernel(x,   52.0  , 1.0  , 60.0  , 93.0  , 139.0  , 36.0 );
        kernels[208] = compute_kernel(x,   70.0  , 1.0  , 28.0  , 94.0  , 178.0  , 24.0 );
        kernels[209] = compute_kernel(x,   65.0  , 1.0  , 65.0  , 67.0  , 236.0  , 43.0 );
        kernels[210] = compute_kernel(x,   63.0  , 1.0  , 80.0  , 74.0  , 204.0  , 5.0 );
        kernels[211] = compute_kernel(x,   75.0  , 1.0  , 54.0  , 86.0  , 70.0  , 30.0 );
        kernels[212] = compute_kernel(x,   61.0  , 1.0  , 100.0  , 29.0  , 229.0  , 44.0 );
        kernels[213] = compute_kernel(x,   41.0  , 1.0  , 41.0  , 99.0  , 73.0  , 37.0 );
        kernels[214] = compute_kernel(x,   24.0  , 1.0  , 26.0  , 51.0  , 91.0  , 16.0 );
        kernels[215] = compute_kernel(x,   73.0  , 1.0  , 27.0  , 97.0  , 151.0  , 11.0 );
        kernels[216] = compute_kernel(x,   10.0  , 1.0  , 40.0  , 26.0  , 163.0  , 20.0 );
        kernels[217] = compute_kernel(x,   38.0  , 1.0  , 59.0  , 51.0  , 127.0  , 47.0 );
        kernels[218] = compute_kernel(x,   55.0  , 1.0  , 67.0  , 67.0  , 58.0  , 25.0 );
        kernels[219] = compute_kernel(x,   92.0  , 1.0  , 76.0  , 36.0  , 221.0  , 12.0 );
        kernels[220] = compute_kernel(x,   50.0  , 1.0  , 64.0  , 39.0  , 148.0  , 43.0 );
        kernels[221] = compute_kernel(x,   21.0  , 1.0  , 95.0  , 1.0  , 179.0  , 3.0 );
        kernels[222] = compute_kernel(x,   90.0  , 1.0  , 50.0  , 54.0  , 191.0  , 4.0 );
        kernels[223] = compute_kernel(x,   37.0  , 1.0  , 85.0  , 68.0  , 179.0  , 30.0 );
        kernels[224] = compute_kernel(x,   16.0  , 1.0  , 80.0  , 33.0  , 233.0  , 20.0 );
        kernels[225] = compute_kernel(x,   67.0  , 1.0  , 7.0  , 50.0  , 102.0  , 12.0 );
        kernels[226] = compute_kernel(x,   78.0  , 1.0  , 40.0  , 81.0  , 61.0  , 20.0 );
        kernels[227] = compute_kernel(x,   55.0  , 1.0  , 24.0  , 45.0  , 191.0  , 47.0 );
        kernels[228] = compute_kernel(x,   76.0  , 1.0  , 9.0  , 33.0  , 128.0  , 48.0 );
        kernels[229] = compute_kernel(x,   57.0  , 1.0  , 99.0  , 89.0  , 134.0  , 0.0 );
        kernels[230] = compute_kernel(x,   91.0  , 1.0  , 41.0  , 8.0  , 63.0  , 71.0 );
        kernels[231] = compute_kernel(x,   72.0  , 1.0  , 11.0  , 78.0  , 50.0  , 30.0 );
        kernels[232] = compute_kernel(x,   26.0  , 1.0  , 100.0  , 21.0  , 95.0  , 27.0 );
        kernels[233] = compute_kernel(x,   10.0  , 1.0  , 85.0  , 8.0  , 58.0  , 52.0 );
        kernels[234] = compute_kernel(x,   48.0  , 1.0  , 18.0  , 8.0  , 148.0  , 43.0 );
        kernels[235] = compute_kernel(x,   84.0  , 1.0  , 98.0  , 12.0  , 204.0  , 19.0 );
        kernels[236] = compute_kernel(x,   96.0  , 1.0  , 15.0  , 84.0  , 195.0  , 32.0 );
        kernels[237] = compute_kernel(x,   36.0  , 1.0  , 86.0  , 0.0  , 85.0  , 87.0 );
        kernels[238] = compute_kernel(x,   52.0  , 1.0  , 89.0  , 84.0  , 237.0  , 19.0 );
        kernels[239] = compute_kernel(x,   42.0  , 1.0  , 71.0  , 22.0  , 73.0  , 37.0 );
        kernels[240] = compute_kernel(x,   83.0  , 1.0  , 79.0  , 66.0  , 135.0  , 34.0 );
        kernels[241] = compute_kernel(x,   52.0  , 1.0  , 28.0  , 10.0  , 213.0  , 54.0 );
        kernels[242] = compute_kernel(x,   40.0  , 1.0  , 59.0  , 17.0  , 218.0  , 36.0 );
        kernels[243] = compute_kernel(x,   36.0  , 1.0  , 80.0  , 5.0  , 116.0  , 69.0 );
        kernels[244] = compute_kernel(x,   61.0  , 1.0  , 97.0  , 18.0  , 232.0  , 19.0 );
        kernels[245] = compute_kernel(x,   15.0  , 1.0  , 66.0  , 34.0  , 113.0  , 40.0 );
        kernels[246] = compute_kernel(x,   20.0  , 1.0  , 96.0  , 1.0  , 201.0  , 78.0 );
        kernels[247] = compute_kernel(x,   92.0  , 1.0  , 13.0  , 99.0  , 121.0  , 46.0 );
        kernels[248] = compute_kernel(x,   28.0  , 1.0  , 90.0  , 43.0  , 209.0  , 24.0 );
        kernels[249] = compute_kernel(x,   66.0  , 1.0  , 79.0  , 21.0  , 92.0  , 3.0 );
        kernels[250] = compute_kernel(x,   22.0  , 1.0  , 81.0  , 22.0  , 62.0  , 28.0 );
        kernels[251] = compute_kernel(x,   53.0  , 1.0  , 100.0  , 96.0  , 172.0  , 23.0 );
        kernels[252] = compute_kernel(x,   7.0  , 1.0  , 89.0  , 97.0  , 204.0  , 74.0 );
        kernels[253] = compute_kernel(x,   61.0  , 1.0  , 33.0  , 49.0  , 221.0  , 5.0 );
        kernels[254] = compute_kernel(x,   64.0  , 1.0  , 76.0  , 78.0  , 124.0  , 25.0 );
        kernels[255] = compute_kernel(x,   65.0  , 1.0  , 78.0  , 97.0  , 113.0  , 0.0 );
        kernels[256] = compute_kernel(x,   10.0  , 1.0  , 61.0  , 51.0  , 225.0  , 22.0 );
        kernels[257] = compute_kernel(x,   78.0  , 1.0  , 48.0  , 9.0  , 162.0  , 21.0 );
        kernels[258] = compute_kernel(x,   19.0  , 1.0  , 94.0  , 30.0  , 58.0  , 13.0 );
        kernels[259] = compute_kernel(x,   84.0  , 1.0  , 29.0  , 48.0  , 63.0  , 28.0 );
        kernels[260] = compute_kernel(x,   82.0  , 1.0  , 25.0  , 8.0  , 61.0  , 82.0 );
        kernels[261] = compute_kernel(x,   32.0  , 1.0  , 59.0  , 75.0  , 227.0  , 13.0 );
        kernels[262] = compute_kernel(x,   87.0  , 1.0  , 65.0  , 37.0  , 207.0  , 22.0 );
        kernels[263] = compute_kernel(x,   62.0  , 1.0  , 58.0  , 1.0  , 111.0  , 25.0 );
        kernels[264] = compute_kernel(x,   73.0  , 1.0  , 100.0  , 68.0  , 71.0  , 25.0 );
        kernels[265] = compute_kernel(x,   47.0  , 1.0  , 65.0  , 70.0  , 107.0  , 47.0 );
        kernels[266] = compute_kernel(x,   29.0  , 1.0  , 10.0  , 86.0  , 167.0  , 9.0 );
        kernels[267] = compute_kernel(x,   24.0  , 1.0  , 40.0  , 53.0  , 141.0  , 18.0 );
        kernels[268] = compute_kernel(x,   100.0  , 1.0  , 64.0  , 24.0  , 193.0  , 15.0 );
        kernels[269] = compute_kernel(x,   64.0  , 1.0  , 43.0  , 14.0  , 62.0  , 22.0 );
        kernels[270] = compute_kernel(x,   67.0  , 1.0  , 13.0  , 72.0  , 130.0  , 30.0 );
        kernels[271] = compute_kernel(x,   86.0  , 1.0  , 67.0  , 98.0  , 74.0  , 28.0 );
        kernels[272] = compute_kernel(x,   52.0  , 1.0  , 6.0  , 14.0  , 197.0  , 17.0 );
        kernels[273] = compute_kernel(x,   74.0  , 1.0  , 62.0  , 97.0  , 134.0  , 31.0 );
        kernels[274] = compute_kernel(x,   84.0  , 1.0  , 30.0  , 3.0  , 219.0  , 97.0 );
        kernels[275] = compute_kernel(x,   30.0  , 1.0  , 58.0  , 76.0  , 104.0  , 12.0 );
        kernels[276] = compute_kernel(x,   18.0  , 1.0  , 98.0  , 9.0  , 204.0  , 47.0 );
        kernels[277] = compute_kernel(x,   20.0  , 1.0  , 48.0  , 100.0  , 80.0  , 45.0 );
        kernels[278] = compute_kernel(x,   91.0  , 1.0  , 25.0  , 33.0  , 65.0  , 41.0 );
        kernels[279] = compute_kernel(x,   70.0  , 1.0  , 58.0  , 33.0  , 154.0  , 6.0 );
        kernels[280] = compute_kernel(x,   75.0  , 1.0  , 34.0  , 66.0  , 230.0  , 45.0 );
        kernels[281] = compute_kernel(x,   68.0  , 1.0  , 91.0  , 46.0  , 149.0  , 23.0 );
        kernels[282] = compute_kernel(x,   58.0  , 1.0  , 7.0  , 27.0  , 139.0  , 45.0 );
        kernels[283] = compute_kernel(x,   87.0  , 1.0  , 76.0  , 83.0  , 79.0  , 2.0 );
        kernels[284] = compute_kernel(x,   40.0  , 1.0  , 30.0  , 58.0  , 232.0  , 4.0 );
        kernels[285] = compute_kernel(x,   52.0  , 1.0  , 98.0  , 55.0  , 184.0  , 9.0 );
        kernels[286] = compute_kernel(x,   16.0  , 1.0  , 85.0  , 88.0  , 96.0  , 38.0 );
        kernels[287] = compute_kernel(x,   95.0  , 1.0  , 34.0  , 8.0  , 109.0  , 93.0 );
        kernels[288] = compute_kernel(x,   85.0  , 1.0  , 38.0  , 83.0  , 196.0  , 5.0 );
        kernels[289] = compute_kernel(x,   95.0  , 1.0  , 51.0  , 4.0  , 155.0  , 84.0 );
        kernels[290] = compute_kernel(x,   85.0  , 1.0  , 29.0  , 33.0  , 210.0  , 0.0 );
        kernels[291] = compute_kernel(x,   48.0  , 1.0  , 64.0  , 7.0  , 81.0  , 32.0 );
        kernels[292] = compute_kernel(x,   44.0  , 1.0  , 81.0  , 15.0  , 128.0  , 16.0 );
        kernels[293] = compute_kernel(x,   58.0  , 1.0  , 58.0  , 0.0  , 74.0  , 90.0 );
        kernels[294] = compute_kernel(x,   9.0  , 1.0  , 96.0  , 87.0  , 217.0  , 29.0 );
        kernels[295] = compute_kernel(x,   57.0  , 1.0  , 37.0  , 55.0  , 77.0  , 39.0 );
        kernels[296] = compute_kernel(x,   39.0  , 1.0  , 80.0  , 48.0  , 176.0  , 21.0 );
        kernels[297] = compute_kernel(x,   21.0  , 1.0  , 91.0  , 42.0  , 181.0  , 30.0 );
        kernels[298] = compute_kernel(x,   65.0  , 1.0  , 59.0  , 56.0  , 165.0  , 30.0 );
        kernels[299] = compute_kernel(x,   31.0  , 1.0  , 90.0  , 12.0  , 391.0  , 45.0 );
        kernels[300] = compute_kernel(x,   10.0  , 1.0  , 73.0  , 36.0  , 155.0  , 100.0 );
        kernels[301] = compute_kernel(x,   80.0  , 1.0  , 91.0  , 14.0  , 409.0  , 77.0 );
        kernels[302] = compute_kernel(x,   68.0  , 0.0  , 67.0  , 50.0  , 177.0  , 26.0 );
        kernels[303] = compute_kernel(x,   13.0  , 0.0  , 54.0  , 68.0  , 433.0  , 18.0 );
        kernels[304] = compute_kernel(x,   35.0  , 0.0  , 81.0  , 92.0  , 54.0  , 5.0 );
        kernels[305] = compute_kernel(x,   11.0  , 1.0  , 1.0  , 94.0  , 279.0  , 19.0 );
        kernels[306] = compute_kernel(x,   20.0  , 0.0  , 76.0  , 70.0  , 79.0  , 26.0 );
        kernels[307] = compute_kernel(x,   46.0  , 0.0  , 94.0  , 19.0  , 68.0  , 32.0 );
        kernels[308] = compute_kernel(x,   84.0  , 0.0  , 94.0  , 35.0  , 74.0  , 29.0 );
        kernels[309] = compute_kernel(x,   21.0  , 0.0  , 69.0  , 91.0  , 172.0  , 47.0 );
        kernels[310] = compute_kernel(x,   38.0  , 1.0  , 81.0  , 50.0  , 175.0  , 62.0 );
        kernels[311] = compute_kernel(x,   43.0  , 0.0  , 83.0  , 23.0  , 151.0  , 6.0 );
        kernels[312] = compute_kernel(x,   13.0  , 1.0  , 25.0  , 41.0  , 324.0  , 41.0 );
        kernels[313] = compute_kernel(x,   33.0  , 1.0  , 21.0  , 15.0  , 245.0  , 14.0 );
        kernels[314] = compute_kernel(x,   56.0  , 1.0  , 29.0  , 92.0  , 497.0  , 7.0 );
        kernels[315] = compute_kernel(x,   38.0  , 0.0  , 95.0  , 11.0  , 383.0  , 18.0 );
        kernels[316] = compute_kernel(x,   13.0  , 0.0  , 69.0  , 12.0  , 50.0  , 85.0 );
        kernels[317] = compute_kernel(x,   99.0  , 0.0  , 23.0  , 20.0  , 467.0  , 22.0 );
        kernels[318] = compute_kernel(x,   94.0  , 0.0  , 64.0  , 93.0  , 101.0  , 17.0 );
        kernels[319] = compute_kernel(x,   67.0  , 0.0  , 32.0  , 52.0  , 94.0  , 38.0 );
        kernels[320] = compute_kernel(x,   70.0  , 0.0  , 62.0  , 39.0  , 109.0  , 28.0 );
        kernels[321] = compute_kernel(x,   28.0  , 1.0  , 93.0  , 89.0  , 438.0  , 0.0 );
        kernels[322] = compute_kernel(x,   57.0  , 0.0  , 71.0  , 71.0  , 243.0  , 24.0 );
        kernels[323] = compute_kernel(x,   16.0  , 0.0  , 4.0  , 58.0  , 133.0  , 34.0 );
        kernels[324] = compute_kernel(x,   13.0  , 0.0  , 31.0  , 42.0  , 346.0  , 86.0 );
        kernels[325] = compute_kernel(x,   52.0  , 1.0  , 54.0  , 11.0  , 456.0  , 76.0 );
        kernels[326] = compute_kernel(x,   46.0  , 0.0  , 28.0  , 70.0  , 197.0  , 2.0 );
        kernels[327] = compute_kernel(x,   85.0  , 1.0  , 21.0  , 11.0  , 269.0  , 10.0 );
        kernels[328] = compute_kernel(x,   16.0  , 1.0  , 15.0  , 95.0  , 368.0  , 66.0 );
        kernels[329] = compute_kernel(x,   20.0  , 0.0  , 7.0  , 22.0  , 265.0  , 14.0 );
        kernels[330] = compute_kernel(x,   91.0  , 0.0  , 22.0  , 18.0  , 145.0  , 94.0 );
        kernels[331] = compute_kernel(x,   15.0  , 0.0  , 3.0  , 99.0  , 466.0  , 46.0 );
        kernels[332] = compute_kernel(x,   34.0  , 0.0  , 44.0  , 84.0  , 401.0  , 5.0 );
        kernels[333] = compute_kernel(x,   20.0  , 0.0  , 71.0  , 11.0  , 293.0  , 33.0 );
        kernels[334] = compute_kernel(x,   22.0  , 0.0  , 92.0  , 69.0  , 129.0  , 21.0 );
        kernels[335] = compute_kernel(x,   99.0  , 1.0  , 91.0  , 11.0  , 274.0  , 18.0 );
        kernels[336] = compute_kernel(x,   31.0  , 0.0  , 61.0  , 77.0  , 207.0  , 2.0 );
        kernels[337] = compute_kernel(x,   22.0  , 1.0  , 74.0  , 45.0  , 86.0  , 55.0 );
        kernels[338] = compute_kernel(x,   47.0  , 1.0  , 85.0  , 25.0  , 376.0  , 94.0 );
        kernels[339] = compute_kernel(x,   82.0  , 0.0  , 11.0  , 70.0  , 193.0  , 3.0 );
        kernels[340] = compute_kernel(x,   20.0  , 0.0  , 72.0  , 93.0  , 339.0  , 19.0 );
        kernels[341] = compute_kernel(x,   13.0  , 0.0  , 70.0  , 51.0  , 73.0  , 62.0 );
        kernels[342] = compute_kernel(x,   12.0  , 0.0  , 61.0  , 66.0  , 147.0  , 62.0 );
        kernels[343] = compute_kernel(x,   11.0  , 0.0  , 31.0  , 20.0  , 372.0  , 20.0 );
        kernels[344] = compute_kernel(x,   19.0  , 0.0  , 6.0  , 89.0  , 444.0  , 27.0 );
        kernels[345] = compute_kernel(x,   90.0  , 0.0  , 65.0  , 25.0  , 107.0  , 21.0 );
        kernels[346] = compute_kernel(x,   14.0  , 1.0  , 5.0  , 16.0  , 497.0  , 25.0 );
        kernels[347] = compute_kernel(x,   54.0  , 0.0  , 94.0  , 88.0  , 233.0  , 4.0 );
        kernels[348] = compute_kernel(x,   16.0  , 0.0  , 4.0  , 17.0  , 259.0  , 73.0 );
        kernels[349] = compute_kernel(x,   95.0  , 0.0  , 38.0  , 13.0  , 318.0  , 10.0 );
        kernels[350] = compute_kernel(x,   29.0  , 1.0  , 31.0  , 22.0  , 235.0  , 85.0 );
        kernels[351] = compute_kernel(x,   73.0  , 0.0  , 93.0  , 26.0  , 69.0  , 41.0 );
        kernels[352] = compute_kernel(x,   25.0  , 0.0  , 99.0  , 13.0  , 134.0  , 28.0 );
        kernels[353] = compute_kernel(x,   41.0  , 1.0  , 84.0  , 12.0  , 322.0  , 48.0 );
        kernels[354] = compute_kernel(x,   32.0  , 0.0  , 7.0  , 13.0  , 206.0  , 62.0 );
        kernels[355] = compute_kernel(x,   81.0  , 0.0  , 61.0  , 38.0  , 133.0  , 55.0 );
        kernels[356] = compute_kernel(x,   97.0  , 0.0  , 11.0  , 31.0  , 94.0  , 8.0 );
        kernels[357] = compute_kernel(x,   25.0  , 1.0  , 41.0  , 22.0  , 315.0  , 62.0 );
        kernels[358] = compute_kernel(x,   11.0  , 1.0  , 18.0  , 46.0  , 318.0  , 7.0 );
        kernels[359] = compute_kernel(x,   22.0  , 1.0  , 69.0  , 71.0  , 146.0  , 51.0 );
        kernels[360] = compute_kernel(x,   15.0  , 1.0  , 100.0  , 48.0  , 275.0  , 59.0 );
        kernels[361] = compute_kernel(x,   24.0  , 0.0  , 37.0  , 26.0  , 481.0  , 72.0 );
        kernels[362] = compute_kernel(x,   76.0  , 0.0  , 47.0  , 16.0  , 84.0  , 95.0 );
        kernels[363] = compute_kernel(x,   42.0  , 1.0  , 85.0  , 19.0  , 427.0  , 1.0 );
        kernels[364] = compute_kernel(x,   96.0  , 0.0  , 93.0  , 28.0  , 233.0  , 2.0 );
        kernels[365] = compute_kernel(x,   11.0  , 1.0  , 83.0  , 83.0  , 141.0  , 51.0 );
        kernels[366] = compute_kernel(x,   98.0  , 1.0  , 65.0  , 93.0  , 55.0  , 99.0 );
        kernels[367] = compute_kernel(x,   18.0  , 1.0  , 79.0  , 15.0  , 430.0  , 45.0 );
        kernels[368] = compute_kernel(x,   35.0  , 1.0  , 86.0  , 30.0  , 500.0  , 13.0 );
        kernels[369] = compute_kernel(x,   15.0  , 0.0  , 3.0  , 47.0  , 497.0  , 44.0 );
        kernels[370] = compute_kernel(x,   99.0  , 1.0  , 43.0  , 17.0  , 443.0  , 92.0 );
        kernels[371] = compute_kernel(x,   46.0  , 0.0  , 34.0  , 16.0  , 61.0  , 25.0 );
        kernels[372] = compute_kernel(x,   17.0  , 0.0  , 21.0  , 16.0  , 311.0  , 74.0 );
        kernels[373] = compute_kernel(x,   75.0  , 0.0  , 6.0  , 42.0  , 108.0  , 9.0 );
        kernels[374] = compute_kernel(x,   10.0  , 0.0  , 9.0  , 64.0  , 340.0  , 4.0 );
        kernels[375] = compute_kernel(x,   100.0  , 0.0  , 21.0  , 77.0  , 199.0  , 11.0 );
        kernels[376] = compute_kernel(x,   25.0  , 1.0  , 78.0  , 36.0  , 433.0  , 11.0 );
        kernels[377] = compute_kernel(x,   22.0  , 0.0  , 92.0  , 52.0  , 264.0  , 15.0 );
        kernels[378] = compute_kernel(x,   12.0  , 0.0  , 10.0  , 40.0  , 264.0  , 29.0 );
        kernels[379] = compute_kernel(x,   21.0  , 0.0  , 43.0  , 87.0  , 228.0  , 1.0 );
        kernels[380] = compute_kernel(x,   54.0  , 1.0  , 5.0  , 61.0  , 86.0  , 7.0 );
        kernels[381] = compute_kernel(x,   96.0  , 1.0  , 70.0  , 16.0  , 260.0  , 63.0 );
        kernels[382] = compute_kernel(x,   95.0  , 1.0  , 2.0  , 35.0  , 225.0  , 31.0 );
        kernels[383] = compute_kernel(x,   91.0  , 0.0  , 83.0  , 74.0  , 131.0  , 33.0 );
        kernels[384] = compute_kernel(x,   16.0  , 0.0  , 43.0  , 82.0  , 309.0  , 29.0 );
        kernels[385] = compute_kernel(x,   22.0  , 0.0  , 84.0  , 30.0  , 98.0  , 50.0 );
        kernels[386] = compute_kernel(x,   93.0  , 1.0  , 91.0  , 32.0  , 189.0  , 72.0 );
        kernels[387] = compute_kernel(x,   82.0  , 0.0  , 25.0  , 57.0  , 161.0  , 10.0 );
        kernels[388] = compute_kernel(x,   59.0  , 1.0  , 74.0  , 20.0  , 487.0  , 12.0 );
        kernels[389] = compute_kernel(x,   54.0  , 0.0  , 64.0  , 75.0  , 249.0  , 7.0 );
        kernels[390] = compute_kernel(x,   18.0  , 0.0  , 76.0  , 40.0  , 190.0  , 54.0 );
        kernels[391] = compute_kernel(x,   64.0  , 0.0  , 20.0  , 18.0  , 374.0  , 92.0 );
        kernels[392] = compute_kernel(x,   31.0  , 0.0  , 41.0  , 58.0  , 156.0  , 60.0 );
        kernels[393] = compute_kernel(x,   96.0  , 0.0  , 32.0  , 46.0  , 220.0  , 49.0 );
        kernels[394] = compute_kernel(x,   84.0  , 0.0  , 73.0  , 25.0  , 91.0  , 41.0 );
        kernels[395] = compute_kernel(x,   43.0  , 0.0  , 12.0  , 15.0  , 90.0  , 24.0 );
        kernels[396] = compute_kernel(x,   69.0  , 0.0  , 87.0  , 31.0  , 244.0  , 32.0 );
        kernels[397] = compute_kernel(x,   82.0  , 0.0  , 68.0  , 14.0  , 465.0  , 33.0 );
        kernels[398] = compute_kernel(x,   12.0  , 0.0  , 45.0  , 14.0  , 253.0  , 92.0 );
        kernels[399] = compute_kernel(x,   41.0  , 1.0  , 39.0  , 15.0  , 422.0  , 45.0 );
        kernels[400] = compute_kernel(x,   12.0  , 1.0  , 17.0  , 37.0  , 467.0  , 61.0 );
        kernels[401] = compute_kernel(x,   88.0  , 0.0  , 59.0  , 21.0  , 393.0  , 8.0 );
        kernels[402] = compute_kernel(x,   43.0  , 0.0  , 84.0  , 94.0  , 136.0  , 19.0 );
        kernels[403] = compute_kernel(x,   76.0  , 0.0  , 40.0  , 12.0  , 464.0  , 6.0 );
        kernels[404] = compute_kernel(x,   77.0  , 0.0  , 65.0  , 81.0  , 75.0  , 16.0 );
        kernels[405] = compute_kernel(x,   97.0  , 1.0  , 90.0  , 13.0  , 262.0  , 75.0 );
        kernels[406] = compute_kernel(x,   20.0  , 1.0  , 32.0  , 68.0  , 384.0  , 31.0 );
        kernels[407] = compute_kernel(x,   34.0  , 0.0  , 78.0  , 78.0  , 188.0  , 39.0 );
        kernels[408] = compute_kernel(x,   89.0  , 1.0  , 90.0  , 23.0  , 218.0  , 66.0 );
        kernels[409] = compute_kernel(x,   32.0  , 1.0  , 15.0  , 15.0  , 302.0  , 92.0 );
        kernels[410] = compute_kernel(x,   17.0  , 1.0  , 28.0  , 61.0  , 368.0  , 93.0 );
        kernels[411] = compute_kernel(x,   19.0  , 0.0  , 96.0  , 55.0  , 60.0  , 79.0 );
        kernels[412] = compute_kernel(x,   17.0  , 1.0  , 66.0  , 43.0  , 228.0  , 51.0 );
        kernels[413] = compute_kernel(x,   25.0  , 1.0  , 0.0  , 34.0  , 408.0  , 52.0 );
        kernels[414] = compute_kernel(x,   10.0  , 0.0  , 88.0  , 53.0  , 331.0  , 99.0 );
        kernels[415] = compute_kernel(x,   15.0  , 0.0  , 83.0  , 51.0  , 153.0  , 84.0 );
        kernels[416] = compute_kernel(x,   94.0  , 1.0  , 1.0  , 12.0  , 487.0  , 63.0 );
        kernels[417] = compute_kernel(x,   40.0  , 1.0  , 94.0  , 46.0  , 196.0  , 63.0 );
        kernels[418] = compute_kernel(x,   55.0  , 1.0  , 38.0  , 13.0  , 161.0  , 66.0 );
        kernels[419] = compute_kernel(x,   83.0  , 0.0  , 5.0  , 12.0  , 375.0  , 41.0 );
        kernels[420] = compute_kernel(x,   99.0  , 0.0  , 54.0  , 57.0  , 182.0  , 19.0 );
        kernels[421] = compute_kernel(x,   49.0  , 0.0  , 92.0  , 90.0  , 122.0  , 5.0 );
        kernels[422] = compute_kernel(x,   20.0  , 0.0  , 29.0  , 23.0  , 99.0  , 42.0 );
        kernels[423] = compute_kernel(x,   29.0  , 0.0  , 56.0  , 18.0  , 145.0  , 95.0 );
        kernels[424] = compute_kernel(x,   36.0  , 0.0  , 76.0  , 96.0  , 151.0  , 11.0 );
        kernels[425] = compute_kernel(x,   15.0  , 1.0  , 65.0  , 19.0  , 376.0  , 25.0 );
        kernels[426] = compute_kernel(x,   28.0  , 0.0  , 83.0  , 84.0  , 133.0  , 58.0 );
        kernels[427] = compute_kernel(x,   100.0  , 1.0  , 66.0  , 16.0  , 268.0  , 76.0 );
        kernels[428] = compute_kernel(x,   16.0  , 0.0  , 11.0  , 53.0  , 288.0  , 7.0 );
        kernels[429] = compute_kernel(x,   30.0  , 1.0  , 62.0  , 12.0  , 491.0  , 86.0 );
        kernels[430] = compute_kernel(x,   39.0  , 0.0  , 78.0  , 40.0  , 332.0  , 2.0 );
        kernels[431] = compute_kernel(x,   64.0  , 0.0  , 60.0  , 29.0  , 213.0  , 18.0 );
        kernels[432] = compute_kernel(x,   16.0  , 1.0  , 79.0  , 49.0  , 208.0  , 63.0 );
        kernels[433] = compute_kernel(x,   76.0  , 1.0  , 3.0  , 21.0  , 138.0  , 15.0 );
        kernels[434] = compute_kernel(x,   12.0  , 0.0  , 12.0  , 29.0  , 455.0  , 57.0 );
        kernels[435] = compute_kernel(x,   59.0  , 0.0  , 7.0  , 57.0  , 127.0  , 21.0 );
        kernels[436] = compute_kernel(x,   22.0  , 1.0  , 21.0  , 39.0  , 489.0  , 16.0 );
        kernels[437] = compute_kernel(x,   11.0  , 0.0  , 35.0  , 15.0  , 100.0  , 57.0 );
        kernels[438] = compute_kernel(x,   12.0  , 0.0  , 8.0  , 43.0  , 68.0  , 27.0 );
        kernels[439] = compute_kernel(x,   14.0  , 0.0  , 98.0  , 21.0  , 273.0  , 46.0 );
        kernels[440] = compute_kernel(x,   50.0  , 1.0  , 28.0  , 96.0  , 58.0  , 85.0 );
        kernels[441] = compute_kernel(x,   15.0  , 0.0  , 96.0  , 96.0  , 313.0  , 80.0 );
        kernels[442] = compute_kernel(x,   79.0  , 0.0  , 32.0  , 78.0  , 126.0  , 32.0 );
        kernels[443] = compute_kernel(x,   17.0  , 1.0  , 6.0  , 40.0  , 303.0  , 19.0 );
        kernels[444] = compute_kernel(x,   54.0  , 0.0  , 3.0  , 51.0  , 183.0  , 16.0 );
        kernels[445] = compute_kernel(x,   52.0  , 1.0  , 86.0  , 21.0  , 256.0  , 86.0 );
        kernels[446] = compute_kernel(x,   90.0  , 1.0  , 45.0  , 61.0  , 245.0  , 0.0 );
        kernels[447] = compute_kernel(x,   20.0  , 0.0  , 49.0  , 23.0  , 295.0  , 11.0 );
        kernels[448] = compute_kernel(x,   78.0  , 1.0  , 43.0  , 18.0  , 75.0  , 76.0 );
        kernels[449] = compute_kernel(x,   20.0  , 0.0  , 99.0  , 47.0  , 400.0  , 58.0 );
        kernels[450] = compute_kernel(x,   11.0  , 1.0  , 60.0  , 92.0  , 281.0  , 12.0 );
        kernels[451] = compute_kernel(x,   31.0  , 1.0  , 73.0  , 18.0  , 466.0  , 21.0 );
        kernels[452] = compute_kernel(x,   19.0  , 1.0  , 34.0  , 13.0  , 470.0  , 75.0 );
        kernels[453] = compute_kernel(x,   32.0  , 0.0  , 62.0  , 28.0  , 103.0  , 50.0 );
        kernels[454] = compute_kernel(x,   18.0  , 0.0  , 78.0  , 37.0  , 284.0  , 77.0 );
        kernels[455] = compute_kernel(x,   23.0  , 1.0  , 25.0  , 89.0  , 382.0  , 51.0 );
        kernels[456] = compute_kernel(x,   77.0  , 0.0  , 7.0  , 98.0  , 152.0  , 20.0 );
        kernels[457] = compute_kernel(x,   28.0  , 0.0  , 48.0  , 85.0  , 140.0  , 26.0 );
        kernels[458] = compute_kernel(x,   31.0  , 0.0  , 47.0  , 81.0  , 70.0  , 40.0 );
        kernels[459] = compute_kernel(x,   66.0  , 0.0  , 14.0  , 73.0  , 213.0  , 11.0 );
        kernels[460] = compute_kernel(x,   79.0  , 0.0  , 50.0  , 91.0  , 102.0  , 14.0 );
        kernels[461] = compute_kernel(x,   15.0  , 1.0  , 37.0  , 30.0  , 263.0  , 13.0 );
        kernels[462] = compute_kernel(x,   34.0  , 0.0  , 42.0  , 46.0  , 161.0  , 59.0 );
        kernels[463] = compute_kernel(x,   100.0  , 1.0  , 88.0  , 16.0  , 327.0  , 83.0 );
        kernels[464] = compute_kernel(x,   17.0  , 1.0  , 12.0  , 91.0  , 336.0  , 66.0 );
        kernels[465] = compute_kernel(x,   89.0  , 1.0  , 8.0  , 22.0  , 191.0  , 70.0 );
        kernels[466] = compute_kernel(x,   51.0  , 0.0  , 80.0  , 85.0  , 56.0  , 26.0 );
        kernels[467] = compute_kernel(x,   89.0  , 1.0  , 54.0  , 20.0  , 397.0  , 27.0 );
        kernels[468] = compute_kernel(x,   97.0  , 0.0  , 91.0  , 98.0  , 492.0  , 18.0 );
        kernels[469] = compute_kernel(x,   25.0  , 0.0  , 96.0  , 100.0  , 220.0  , 22.0 );
        kernels[470] = compute_kernel(x,   15.0  , 0.0  , 23.0  , 18.0  , 71.0  , 93.0 );
        kernels[471] = compute_kernel(x,   35.0  , 0.0  , 68.0  , 15.0  , 332.0  , 58.0 );
        kernels[472] = compute_kernel(x,   10.0  , 1.0  , 38.0  , 31.0  , 274.0  , 38.0 );
        kernels[473] = compute_kernel(x,   28.0  , 0.0  , 32.0  , 29.0  , 302.0  , 97.0 );
        kernels[474] = compute_kernel(x,   11.0  , 1.0  , 84.0  , 96.0  , 419.0  , 35.0 );
        kernels[475] = compute_kernel(x,   18.0  , 0.0  , 46.0  , 11.0  , 149.0  , 46.0 );
        kernels[476] = compute_kernel(x,   20.0  , 1.0  , 62.0  , 53.0  , 348.0  , 81.0 );
        kernels[477] = compute_kernel(x,   23.0  , 1.0  , 51.0  , 29.0  , 198.0  , 69.0 );
        kernels[478] = compute_kernel(x,   20.0  , 0.0  , 60.0  , 41.0  , 279.0  , 24.0 );
        kernels[479] = compute_kernel(x,   54.0  , 0.0  , 38.0  , 87.0  , 173.0  , 0.0 );
        kernels[480] = compute_kernel(x,   83.0  , 0.0  , 9.0  , 11.0  , 80.0  , 72.0 );
        kernels[481] = compute_kernel(x,   85.0  , 0.0  , 36.0  , 34.0  , 93.0  , 20.0 );
        kernels[482] = compute_kernel(x,   98.0  , 1.0  , 46.0  , 16.0  , 462.0  , 0.0 );
        kernels[483] = compute_kernel(x,   18.0  , 0.0  , 17.0  , 16.0  , 437.0  , 68.0 );
        kernels[484] = compute_kernel(x,   19.0  , 0.0  , 3.0  , 61.0  , 201.0  , 13.0 );
        kernels[485] = compute_kernel(x,   38.0  , 1.0  , 55.0  , 55.0  , 226.0  , 52.0 );
        kernels[486] = compute_kernel(x,   23.0  , 0.0  , 79.0  , 14.0  , 449.0  , 71.0 );
        kernels[487] = compute_kernel(x,   20.0  , 0.0  , 15.0  , 37.0  , 197.0  , 47.0 );
        kernels[488] = compute_kernel(x,   31.0  , 0.0  , 56.0  , 21.0  , 320.0  , 20.0 );
        kernels[489] = compute_kernel(x,   35.0  , 1.0  , 100.0  , 22.0  , 410.0  , 73.0 );
        kernels[490] = compute_kernel(x,   13.0  , 1.0  , 57.0  , 18.0  , 154.0  , 59.0 );
        kernels[491] = compute_kernel(x,   13.0  , 1.0  , 93.0  , 34.0  , 443.0  , 33.0 );
        kernels[492] = compute_kernel(x,   20.0  , 0.0  , 84.0  , 11.0  , 97.0  , 5.0 );
        kernels[493] = compute_kernel(x,   60.0  , 0.0  , 92.0  , 17.0  , 253.0  , 62.0 );
        kernels[494] = compute_kernel(x,   12.0  , 1.0  , 91.0  , 67.0  , 496.0  , 82.0 );
        kernels[495] = compute_kernel(x,   93.0  , 0.0  , 8.0  , 18.0  , 335.0  , 45.0 );
        kernels[496] = compute_kernel(x,   10.0  , 1.0  , 73.0  , 93.0  , 257.0  , 20.0 );
        kernels[497] = compute_kernel(x,   22.0  , 0.0  , 16.0  , 97.0  , 179.0  , 29.0 );
        kernels[498] = compute_kernel(x,   17.0  , 0.0  , 1.0  , 36.0  , 282.0  , 88.0 );
        kernels[499] = compute_kernel(x,   30.0  , 1.0  , 96.0  , 34.0  , 302.0  , 91.0 );
        kernels[500] = compute_kernel(x,   35.0  , 0.0  , 41.0  , 19.0  , 397.0  , 60.0 );
        kernels[501] = compute_kernel(x,   37.0  , 0.0  , 22.0  , 94.0  , 164.0  , 38.0 );
        kernels[502] = compute_kernel(x,   42.0  , 0.0  , 85.0  , 12.0  , 267.0  , 84.0 );
        kernels[503] = compute_kernel(x,   38.0  , 1.0  , 47.0  , 25.0  , 239.0  , 86.0 );
        kernels[504] = compute_kernel(x,   20.0  , 0.0  , 26.0  , 26.0  , 486.0  , 24.0 );
        kernels[505] = compute_kernel(x,   77.0  , 0.0  , 53.0  , 74.0  , 120.0  , 11.0 );
        kernels[506] = compute_kernel(x,   82.0  , 0.0  , 52.0  , 100.0  , 78.0  , 57.0 );
        kernels[507] = compute_kernel(x,   22.0  , 1.0  , 2.0  , 69.0  , 489.0  , 89.0 );
        kernels[508] = compute_kernel(x,   21.0  , 0.0  , 26.0  , 63.0  , 192.0  , 30.0 );
        kernels[509] = compute_kernel(x,   75.0  , 1.0  , 87.0  , 59.0  , 188.0  , 52.0 );
        kernels[510] = compute_kernel(x,   21.0  , 1.0  , 67.0  , 25.0  , 384.0  , 30.0 );
        kernels[511] = compute_kernel(x,   65.0  , 1.0  , 13.0  , 16.0  , 198.0  , 80.0 );
        kernels[512] = compute_kernel(x,   92.0  , 0.0  , 77.0  , 84.0  , 73.0  , 22.0 );
        kernels[513] = compute_kernel(x,   61.0  , 1.0  , 87.0  , 16.0  , 474.0  , 5.0 );
        kernels[514] = compute_kernel(x,   62.0  , 0.0  , 4.0  , 11.0  , 89.0  , 95.0 );
        kernels[515] = compute_kernel(x,   11.0  , 1.0  , 68.0  , 54.0  , 266.0  , 56.0 );
        kernels[516] = compute_kernel(x,   40.0  , 0.0  , 3.0  , 11.0  , 373.0  , 46.0 );
        kernels[517] = compute_kernel(x,   51.0  , 0.0  , 65.0  , 33.0  , 134.0  , 35.0 );
        kernels[518] = compute_kernel(x,   73.0  , 1.0  , 0.0  , 99.0  , 64.0  , 11.0 );
        kernels[519] = compute_kernel(x,   22.0  , 1.0  , 47.0  , 27.0  , 398.0  , 40.0 );
        kernels[520] = compute_kernel(x,   57.0  , 0.0  , 34.0  , 11.0  , 70.0  , 21.0 );
        kernels[521] = compute_kernel(x,   20.0  , 0.0  , 25.0  , 30.0  , 308.0  , 36.0 );
        kernels[522] = compute_kernel(x,   75.0  , 0.0  , 70.0  , 99.0  , 145.0  , 3.0 );
        kernels[523] = compute_kernel(x,   47.0  , 0.0  , 50.0  , 22.0  , 167.0  , 62.0 );
        kernels[524] = compute_kernel(x,   76.0  , 0.0  , 30.0  , 98.0  , 452.0  , 100.0 );
        kernels[525] = compute_kernel(x,   20.0  , 1.0  , 41.0  , 18.0  , 352.0  , 38.0 );
        kernels[526] = compute_kernel(x,   77.0  , 0.0  , 80.0  , 65.0  , 124.0  , 7.0 );
        kernels[527] = compute_kernel(x,   14.0  , 0.0  , 75.0  , 15.0  , 306.0  , 94.0 );
        kernels[528] = compute_kernel(x,   76.0  , 1.0  , 95.0  , 100.0  , 498.0  , 81.0 );
        kernels[529] = compute_kernel(x,   88.0  , 1.0  , 86.0  , 22.0  , 254.0  , 22.0 );
        kernels[530] = compute_kernel(x,   68.0  , 0.0  , 70.0  , 19.0  , 51.0  , 20.0 );
        kernels[531] = compute_kernel(x,   37.0  , 0.0  , 70.0  , 56.0  , 231.0  , 34.0 );
        kernels[532] = compute_kernel(x,   34.0  , 0.0  , 92.0  , 18.0  , 402.0  , 28.0 );
        kernels[533] = compute_kernel(x,   84.0  , 0.0  , 61.0  , 19.0  , 50.0  , 90.0 );
        kernels[534] = compute_kernel(x,   67.0  , 0.0  , 0.0  , 19.0  , 381.0  , 3.0 );
        kernels[535] = compute_kernel(x,   63.0  , 0.0  , 60.0  , 14.0  , 94.0  , 81.0 );
        kernels[536] = compute_kernel(x,   30.0  , 0.0  , 23.0  , 96.0  , 77.0  , 23.0 );
        kernels[537] = compute_kernel(x,   12.0  , 0.0  , 13.0  , 89.0  , 67.0  , 51.0 );
        kernels[538] = compute_kernel(x,   15.0  , 0.0  , 44.0  , 16.0  , 338.0  , 69.0 );
        kernels[539] = compute_kernel(x,   90.0  , 0.0  , 95.0  , 83.0  , 212.0  , 22.0 );
        kernels[540] = compute_kernel(x,   11.0  , 1.0  , 72.0  , 92.0  , 118.0  , 96.0 );
        kernels[541] = compute_kernel(x,   61.0  , 0.0  , 75.0  , 20.0  , 59.0  , 6.0 );
        kernels[542] = compute_kernel(x,   13.0  , 0.0  , 68.0  , 19.0  , 65.0  , 38.0 );
        kernels[543] = compute_kernel(x,   19.0  , 1.0  , 63.0  , 46.0  , 371.0  , 50.0 );
        kernels[544] = compute_kernel(x,   23.0  , 0.0  , 10.0  , 91.0  , 355.0  , 85.0 );
        kernels[545] = compute_kernel(x,   33.0  , 1.0  , 66.0  , 19.0  , 422.0  , 13.0 );
        kernels[546] = compute_kernel(x,   70.0  , 0.0  , 43.0  , 57.0  , 216.0  , 35.0 );
        kernels[547] = compute_kernel(x,   14.0  , 1.0  , 68.0  , 14.0  , 65.0  , 70.0 );
        kernels[548] = compute_kernel(x,   97.0  , 0.0  , 13.0  , 11.0  , 191.0  , 48.0 );
        kernels[549] = compute_kernel(x,   25.0  , 0.0  , 68.0  , 37.0  , 160.0  , 11.0 );
        kernels[550] = compute_kernel(x,   37.0  , 0.0  , 22.0  , 34.0  , 344.0  , 10.0 );
        kernels[551] = compute_kernel(x,   12.0  , 1.0  , 27.0  , 73.0  , 436.0  , 24.0 );
        kernels[552] = compute_kernel(x,   23.0  , 1.0  , 65.0  , 91.0  , 166.0  , 51.0 );
        kernels[553] = compute_kernel(x,   10.0  , 1.0  , 94.0  , 83.0  , 171.0  , 74.0 );
        kernels[554] = compute_kernel(x,   82.0  , 0.0  , 60.0  , 45.0  , 136.0  , 58.0 );
        kernels[555] = compute_kernel(x,   14.0  , 0.0  , 67.0  , 65.0  , 373.0  , 3.0 );
        kernels[556] = compute_kernel(x,   18.0  , 0.0  , 22.0  , 31.0  , 376.0  , 38.0 );
        kernels[557] = compute_kernel(x,   17.0  , 0.0  , 46.0  , 28.0  , 442.0  , 45.0 );
        kernels[558] = compute_kernel(x,   14.0  , 0.0  , 23.0  , 17.0  , 326.0  , 25.0 );
        kernels[559] = compute_kernel(x,   13.0  , 0.0  , 77.0  , 89.0  , 435.0  , 99.0 );
        kernels[560] = compute_kernel(x,   11.0  , 0.0  , 63.0  , 84.0  , 499.0  , 27.0 );
        kernels[561] = compute_kernel(x,   16.0  , 1.0  , 78.0  , 97.0  , 281.0  , 92.0 );
        kernels[562] = compute_kernel(x,   29.0  , 0.0  , 18.0  , 11.0  , 411.0  , 60.0 );
        kernels[563] = compute_kernel(x,   20.0  , 1.0  , 83.0  , 16.0  , 442.0  , 68.0 );
        kernels[564] = compute_kernel(x,   76.0  , 0.0  , 7.0  , 100.0  , 72.0  , 92.0 );
        kernels[565] = compute_kernel(x,   96.0  , 1.0  , 33.0  , 26.0  , 87.0  , 64.0 );
        kernels[566] = compute_kernel(x,   53.0  , 0.0  , 7.0  , 33.0  , 113.0  , 19.0 );
        kernels[567] = compute_kernel(x,   21.0  , 0.0  , 85.0  , 27.0  , 322.0  , 20.0 );
        kernels[568] = compute_kernel(x,   82.0  , 0.0  , 88.0  , 43.0  , 194.0  , 34.0 );
        kernels[569] = compute_kernel(x,   19.0  , 0.0  , 20.0  , 29.0  , 194.0  , 95.0 );
        kernels[570] = compute_kernel(x,   62.0  , 0.0  , 19.0  , 93.0  , 143.0  , 42.0 );
        kernels[571] = compute_kernel(x,   29.0  , 0.0  , 13.0  , 26.0  , 167.0  , 29.0 );
        kernels[572] = compute_kernel(x,   52.0  , 1.0  , 16.0  , 13.0  , 182.0  , 80.0 );
        kernels[573] = compute_kernel(x,   36.0  , 0.0  , 16.0  , 11.0  , 419.0  , 88.0 );
        kernels[574] = compute_kernel(x,   47.0  , 1.0  , 48.0  , 15.0  , 283.0  , 14.0 );
        kernels[575] = compute_kernel(x,   84.0  , 0.0  , 77.0  , 15.0  , 230.0  , 65.0 );
        kernels[576] = compute_kernel(x,   46.0  , 1.0  , 88.0  , 12.0  , 476.0  , 99.0 );
        kernels[577] = compute_kernel(x,   66.0  , 0.0  , 36.0  , 67.0  , 74.0  , 39.0 );
        kernels[578] = compute_kernel(x,   99.0  , 0.0  , 11.0  , 23.0  , 283.0  , 46.0 );
        kernels[579] = compute_kernel(x,   25.0  , 1.0  , 82.0  , 15.0  , 299.0  , 87.0 );
        kernels[580] = compute_kernel(x,   80.0  , 0.0  , 10.0  , 44.0  , 204.0  , 19.0 );
        kernels[581] = compute_kernel(x,   22.0  , 0.0  , 97.0  , 28.0  , 483.0  , 53.0 );
        kernels[582] = compute_kernel(x,   59.0  , 0.0  , 34.0  , 70.0  , 52.0  , 10.0 );
        kernels[583] = compute_kernel(x,   100.0  , 0.0  , 72.0  , 25.0  , 493.0  , 99.0 );
        kernels[584] = compute_kernel(x,   55.0  , 1.0  , 81.0  , 13.0  , 171.0  , 99.0 );
        kernels[585] = compute_kernel(x,   10.0  , 0.0  , 63.0  , 26.0  , 405.0  , 59.0 );
        decisions[0] = 0.662871691
                    + kernels[1] * 0.137083819
                    + kernels[2]
                    + kernels[4]
                    + kernels[6] * 0.318055078
                    + kernels[8]
                    + kernels[14] * 0.151958799
                    + kernels[17]
                    + kernels[19]
                    + kernels[22]
                    + kernels[24]
                    + kernels[26] * 0.009883211
                    + kernels[29]
                    + kernels[30]
                    + kernels[33] * 0.148009395
                    + kernels[38]
                    + kernels[41]
                    + kernels[48]
                    + kernels[53]
                    + kernels[54]
                    + kernels[56] * 0.133971419
                    + kernels[57]
                    + kernels[58]
                    + kernels[61] * 0.181064783
                    + kernels[62]
                    + kernels[64]
                    + kernels[70]
                    + kernels[71] * 0.049214131
                    + kernels[77]
                    + kernels[80]
                    + kernels[83]
                    + kernels[84]
                    + kernels[86] * 0.37341042
                    + kernels[87] * 0.146971798
                    + kernels[89]
                    + kernels[90]
                    + kernels[94]
                    + kernels[95]
                    + kernels[96]
                    + kernels[97] * 0.005244089
                    + kernels[100]
                    + kernels[101]
                    + kernels[107]
                    + kernels[112]
                    + kernels[113]
                    + kernels[117] * 0.030414846
                    + kernels[119]
                    + kernels[120]
                    + kernels[122] * 0.054526198
                    + kernels[126]
                    + kernels[127]
                    + kernels[129] * 0.94684457
                    + kernels[134]
                    + kernels[135]
                    + kernels[138]
                    + kernels[139]
                    + kernels[140]
                    + kernels[146]
                    + kernels[148]
                    + kernels[158]
                    + kernels[159]
                    + kernels[160]
                    + kernels[161]
                    + kernels[162]
                    + kernels[165] * 0.544544351
                    + kernels[167] * 0.102580665
                    + kernels[169]
                    + kernels[170] * -0.568227262
                    - kernels[171]
                    + kernels[172] * -0.11679134
                    - kernels[173]
                    - kernels[174]
                    - kernels[175]
                    - kernels[178]
                    + kernels[181] * -0.843666909
                    - kernels[182]
                    - kernels[184]
                    - kernels[185]
                    - kernels[187]
                    + kernels[189] * -0.910540664
                    + kernels[190] * -0.570347589
                    - kernels[193]
                    - kernels[194]
                    - kernels[199]
                    - kernels[200]
                    + kernels[201] * -0.709638307
                    + kernels[203] * -0.198383638
                    + kernels[204] * -0.367954419
                    - kernels[206]
                    - kernels[212]
                    - kernels[214]
                    - kernels[216]
                    + kernels[219] * -0.231082788
                    - kernels[221]
                    - kernels[224]
                    + kernels[225] * -0.528819362
                    + kernels[230] * -0.383556842
                    + kernels[231] * -0.237783497
                    - kernels[233]
                    - kernels[234]
                    - kernels[235]
                    - kernels[237]
                    - kernels[241]
                    - kernels[242]
                    - kernels[243]
                    - kernels[244]
                    - kernels[245]
                    - kernels[246]
                    + kernels[250] * -0.131139157
                    - kernels[252]
                    - kernels[256]
                    + kernels[257] * -0.229043972
                    - kernels[258]
                    - kernels[260]
                    - kernels[263]
                    - kernels[268]
                    - kernels[269]
                    - kernels[272]
                    - kernels[274]
                    - kernels[276]
                    + kernels[277] * -0.446211314
                    - kernels[278]
                    + kernels[282] * -0.623632048
                    - kernels[284]
                    - kernels[286]
                    + kernels[287] * -0.728541352
                    - kernels[289]
                    + kernels[293] * -0.509080185
                    - kernels[294]
                    + kernels[297] * -0.99933693
        ;
        decisions[1] = 0.519959987
                    + kernels[0]
                    + kernels[1]
                    + kernels[2]
                    + kernels[3]
                    + kernels[4] * 0.82888935
                    + kernels[5]
                    + kernels[6]
                    + kernels[7]
                    + kernels[8]
                    + kernels[9]
                    + kernels[10]
                    + kernels[11]
                    + kernels[12]
                    + kernels[13]
                    + kernels[14]
                    + kernels[15]
                    + kernels[16]
                    + kernels[17]
                    + kernels[18]
                    + kernels[19]
                    + kernels[20]
                    + kernels[21]
                    + kernels[22]
                    + kernels[23]
                    + kernels[24]
                    + kernels[25]
                    + kernels[26]
                    + kernels[27]
                    + kernels[28]
                    + kernels[29]
                    + kernels[30]
                    + kernels[31]
                    + kernels[32]
                    + kernels[33]
                    + kernels[34]
                    + kernels[35]
                    + kernels[36]
                    + kernels[37]
                    + kernels[38]
                    + kernels[39]
                    + kernels[40]
                    + kernels[41]
                    + kernels[42]
                    + kernels[43]
                    + kernels[44]
                    + kernels[45]
                    + kernels[46] * 0.125275174
                    + kernels[47]
                    + kernels[48]
                    + kernels[49]
                    + kernels[50]
                    + kernels[51]
                    + kernels[52]
                    + kernels[53]
                    + kernels[54]
                    + kernels[55]
                    + kernels[56]
                    + kernels[57]
                    + kernels[58]
                    + kernels[59]
                    + kernels[60]
                    + kernels[61]
                    + kernels[62]
                    + kernels[63]
                    + kernels[64]
                    + kernels[65]
                    + kernels[66]
                    + kernels[67]
                    + kernels[68]
                    + kernels[69]
                    + kernels[70]
                    + kernels[71]
                    + kernels[72]
                    + kernels[73]
                    + kernels[74]
                    + kernels[75]
                    + kernels[76]
                    + kernels[77]
                    + kernels[78]
                    + kernels[79]
                    + kernels[80]
                    + kernels[81]
                    + kernels[82]
                    + kernels[83]
                    + kernels[84]
                    + kernels[85]
                    + kernels[86]
                    + kernels[87]
                    + kernels[88]
                    + kernels[89]
                    + kernels[90]
                    + kernels[91]
                    + kernels[92]
                    + kernels[93]
                    + kernels[94]
                    + kernels[95]
                    + kernels[96]
                    + kernels[97]
                    + kernels[98]
                    + kernels[99]
                    + kernels[100]
                    + kernels[101]
                    + kernels[102]
                    + kernels[103] * 0.965341108
                    + kernels[104]
                    + kernels[105]
                    + kernels[106]
                    + kernels[107]
                    + kernels[108]
                    + kernels[109]
                    + kernels[110]
                    + kernels[111]
                    + kernels[112]
                    + kernels[113]
                    + kernels[114]
                    + kernels[115]
                    + kernels[116]
                    + kernels[117]
                    + kernels[118]
                    + kernels[119]
                    + kernels[120]
                    + kernels[121]
                    + kernels[122]
                    + kernels[123]
                    + kernels[124] * 0.387566966
                    + kernels[125]
                    + kernels[126]
                    + kernels[127] * 0.383969746
                    + kernels[128]
                    + kernels[129]
                    + kernels[130]
                    + kernels[131]
                    + kernels[132]
                    + kernels[133]
                    + kernels[134]
                    + kernels[136]
                    + kernels[137]
                    + kernels[138]
                    + kernels[139]
                    + kernels[140]
                    + kernels[141]
                    + kernels[142]
                    + kernels[143]
                    + kernels[144]
                    + kernels[145]
                    + kernels[146]
                    + kernels[147]
                    + kernels[148]
                    + kernels[149]
                    + kernels[150]
                    + kernels[151]
                    + kernels[152]
                    + kernels[153]
                    + kernels[154]
                    + kernels[155]
                    + kernels[156]
                    + kernels[157]
                    + kernels[158]
                    + kernels[159]
                    + kernels[160]
                    + kernels[161]
                    + kernels[162]
                    + kernels[163]
                    + kernels[164]
                    + kernels[165]
                    + kernels[166]
                    + kernels[167]
                    + kernels[168]
                    + kernels[169]
                    - kernels[299]
                    - kernels[300]
                    - kernels[301]
                    - kernels[303]
                    - kernels[304]
                    - kernels[305]
                    - kernels[311]
                    - kernels[312]
                    - kernels[313]
                    - kernels[315]
                    - kernels[316]
                    + kernels[317] * -0.10403467
                    + kernels[321] * -0.547229186
                    + kernels[323] * -0.871508763
                    - kernels[324]
                    + kernels[325] * -0.270131929
                    - kernels[327]
                    - kernels[328]
                    - kernels[329]
                    + kernels[331] * -0.844355098
                    + kernels[332] * -0.506889073
                    - kernels[333]
                    - kernels[334]
                    - kernels[335]
                    + kernels[338] * -0.649579328
                    - kernels[340]
                    - kernels[343]
                    - kernels[344]
                    + kernels[345] * -0.370813016
                    - kernels[346]
                    - kernels[348]
                    - kernels[349]
                    - kernels[350]
                    - kernels[352]
                    - kernels[353]
                    - kernels[354]
                    - kernels[356]
                    - kernels[357]
                    - kernels[358]
                    - kernels[360]
                    + kernels[361] * -0.814522269
                    - kernels[363]
                    - kernels[364]
                    - kernels[365]
                    + kernels[366] * -0.188228483
                    - kernels[367]
                    - kernels[368]
                    + kernels[369] * -0.001661697
                    + kernels[370] * -0.522775619
                    - kernels[371]
                    - kernels[372]
                    - kernels[374]
                    + kernels[376] * -0.827853274
                    + kernels[377] * -0.269036328
                    - kernels[378]
                    - kernels[381]
                    + kernels[384] * -0.053599357
                    + kernels[386] * -0.09226183
                    + kernels[388] * -0.711447294
                    - kernels[390]
                    + kernels[391] * -0.603564014
                    - kernels[395]
                    - kernels[397]
                    - kernels[398]
                    - kernels[399]
                    - kernels[400]
                    - kernels[401]
                    - kernels[403]
                    - kernels[405]
                    - kernels[406]
                    - kernels[408]
                    - kernels[409]
                    - kernels[410]
                    + kernels[411] * -0.188317116
                    - kernels[412]
                    + kernels[413] * -0.830645275
                    - kernels[414]
                    - kernels[415]
                    + kernels[416] * -0.743200098
                    + kernels[418] * -0.546704583
                    - kernels[419]
                    + kernels[422] * -0.33007195
                    + kernels[423] * -0.917638245
                    - kernels[425]
                    - kernels[427]
                    + kernels[428] * -0.327130579
                    - kernels[429]
                    + kernels[430] * -0.071964688
                    - kernels[431]
                    - kernels[432]
                    - kernels[433]
                    - kernels[434]
                    + kernels[436] * -0.948846663
                    - kernels[437]
                    - kernels[438]
                    - kernels[439]
                    - kernels[441]
                    - kernels[443]
                    + kernels[445] * -0.39710216
                    - kernels[447]
                    - kernels[449]
                    - kernels[450]
                    - kernels[451]
                    - kernels[452]
                    - kernels[454]
                    + kernels[455] * -0.983717268
                    - kernels[461]
                    - kernels[463]
                    - kernels[464]
                    - kernels[465]
                    + kernels[467] * -0.194871511
                    - kernels[470]
                    - kernels[471]
                    - kernels[472]
                    - kernels[473]
                    - kernels[474]
                    - kernels[475]
                    + kernels[476] * -0.893590208
                    - kernels[477]
                    - kernels[478]
                    - kernels[480]
                    - kernels[482]
                    - kernels[483]
                    - kernels[484]
                    - kernels[486]
                    - kernels[488]
                    - kernels[489]
                    - kernels[490]
                    - kernels[491]
                    - kernels[492]
                    - kernels[493]
                    + kernels[495] * -0.61901583
                    - kernels[496]
                    + kernels[497] * -0.642910409
                    + kernels[498] * -0.844984147
                    + kernels[499] * -0.460813509
                    - kernels[500]
                    - kernels[502]
                    - kernels[503]
                    - kernels[504]
                    - kernels[510]
                    + kernels[511] * -0.361157824
                    - kernels[513]
                    + kernels[514] * -0.55667072
                    + kernels[515] * -0.38676285
                    - kernels[516]
                    + kernels[518] * -0.079316289
                    - kernels[519]
                    - kernels[520]
                    - kernels[521]
                    - kernels[525]
                    - kernels[527]
                    + kernels[529] * -0.454723504
                    - kernels[532]
                    + kernels[533] * -0.390368026
                    - kernels[534]
                    + kernels[536] * -0.474549196
                    - kernels[537]
                    - kernels[538]
                    + kernels[540] * -0.340500112
                    + kernels[541] * -0.212311408
                    - kernels[542]
                    - kernels[543]
                    + kernels[544] * -0.694629492
                    - kernels[545]
                    + kernels[547] * -0.481016043
                    - kernels[548]
                    - kernels[549]
                    + kernels[550] * -0.241348742
                    - kernels[551]
                    - kernels[553]
                    - kernels[555]
                    - kernels[556]
                    - kernels[557]
                    - kernels[558]
                    - kernels[559]
                    + kernels[560] * -0.378046242
                    - kernels[561]
                    - kernels[562]
                    - kernels[563]
                    - kernels[567]
                    + kernels[569] * -0.426775427
                    - kernels[571]
                    - kernels[573]
                    - kernels[574]
                    - kernels[575]
                    - kernels[576]
                    + kernels[578] * -0.116072671
                    - kernels[579]
                    - kernels[581]
                    + kernels[583] * -0.905778327
                    - kernels[584]
                    - kernels[585]
        ;
        decisions[2] = -0.900876194
                    + kernels[170]
                    + kernels[171]
                    + kernels[172]
                    + kernels[173]
                    + kernels[174]
                    + kernels[175]
                    + kernels[176]
                    + kernels[177]
                    + kernels[178]
                    + kernels[179]
                    + kernels[180]
                    + kernels[181]
                    + kernels[182]
                    + kernels[183]
                    + kernels[184]
                    + kernels[185]
                    + kernels[186]
                    + kernels[188]
                    + kernels[190]
                    + kernels[191]
                    + kernels[192]
                    + kernels[193]
                    + kernels[194]
                    + kernels[195]
                    + kernels[196]
                    + kernels[197]
                    + kernels[198]
                    + kernels[199]
                    + kernels[200]
                    + kernels[201]
                    + kernels[202]
                    + kernels[203]
                    + kernels[204] * 0.83676827
                    + kernels[205]
                    + kernels[206]
                    + kernels[207]
                    + kernels[208]
                    + kernels[209]
                    + kernels[210]
                    + kernels[211]
                    + kernels[212]
                    + kernels[213]
                    + kernels[214]
                    + kernels[215]
                    + kernels[216]
                    + kernels[217]
                    + kernels[218]
                    + kernels[219]
                    + kernels[220]
                    + kernels[222]
                    + kernels[223]
                    + kernels[224]
                    + kernels[225]
                    + kernels[226]
                    + kernels[227]
                    + kernels[228]
                    + kernels[229]
                    + kernels[230]
                    + kernels[231]
                    + kernels[232]
                    + kernels[233]
                    + kernels[234]
                    + kernels[235] * 0.967717668
                    + kernels[236]
                    + kernels[237]
                    + kernels[238]
                    + kernels[239]
                    + kernels[240]
                    + kernels[241]
                    + kernels[242]
                    + kernels[243]
                    + kernels[244]
                    + kernels[245]
                    + kernels[246]
                    + kernels[247]
                    + kernels[248]
                    + kernels[249]
                    + kernels[250]
                    + kernels[251]
                    + kernels[252]
                    + kernels[253]
                    + kernels[254]
                    + kernels[255]
                    + kernels[256]
                    + kernels[257]
                    + kernels[258]
                    + kernels[259]
                    + kernels[260]
                    + kernels[261]
                    + kernels[262]
                    + kernels[263]
                    + kernels[264]
                    + kernels[265]
                    + kernels[266]
                    + kernels[267]
                    + kernels[268]
                    + kernels[269]
                    + kernels[270]
                    + kernels[271]
                    + kernels[272]
                    + kernels[273]
                    + kernels[274]
                    + kernels[275]
                    + kernels[276]
                    + kernels[277]
                    + kernels[278]
                    + kernels[279] * 0.418241963
                    + kernels[280]
                    + kernels[281]
                    + kernels[282]
                    + kernels[283]
                    + kernels[284]
                    + kernels[285] * 0.24648391
                    + kernels[286]
                    + kernels[287]
                    + kernels[288]
                    + kernels[289]
                    + kernels[290]
                    + kernels[291]
                    + kernels[292]
                    + kernels[293]
                    + kernels[294]
                    + kernels[295]
                    + kernels[296]
                    + kernels[297]
                    + kernels[298]
                    - kernels[302]
                    - kernels[304]
                    - kernels[306]
                    - kernels[307]
                    + kernels[308] * -0.431023108
                    - kernels[309]
                    - kernels[310]
                    - kernels[311]
                    - kernels[313]
                    + kernels[314] * -0.001602633
                    + kernels[316] * -0.734662113
                    - kernels[318]
                    - kernels[319]
                    - kernels[320]
                    - kernels[322]
                    - kernels[323]
                    - kernels[326]
                    + kernels[327] * -0.390728411
                    + kernels[330] * -0.548342141
                    + kernels[331] * -0.013474919
                    - kernels[334]
                    - kernels[336]
                    - kernels[337]
                    - kernels[339]
                    + kernels[341] * -0.129659497
                    - kernels[342]
                    - kernels[345]
                    + kernels[346] * -0.039583771
                    - kernels[347]
                    - kernels[351]
                    - kernels[352]
                    + kernels[354] * -0.425513367
                    - kernels[355]
                    - kernels[359]
                    + kernels[362] * -0.128291086
                    - kernels[364]
                    - kernels[365]
                    + kernels[368] * -0.005194246
                    - kernels[371]
                    - kernels[373]
                    - kernels[375]
                    - kernels[377]
                    - kernels[379]
                    - kernels[380]
                    - kernels[382]
                    - kernels[383]
                    - kernels[385]
                    + kernels[386] * -0.07675358
                    - kernels[387]
                    - kernels[389]
                    - kernels[390]
                    + kernels[392] * -0.028408353
                    - kernels[393]
                    - kernels[394]
                    + kernels[395] * -0.784010371
                    - kernels[396]
                    - kernels[402]
                    - kernels[404]
                    - kernels[407]
                    - kernels[408]
                    - kernels[412]
                    + kernels[416] * -0.027846556
                    - kernels[417]
                    - kernels[418]
                    - kernels[420]
                    - kernels[421]
                    - kernels[422]
                    - kernels[424]
                    + kernels[426] * -0.478075501
                    - kernels[431]
                    - kernels[432]
                    - kernels[433]
                    - kernels[435]
                    + kernels[437] * -0.300462268
                    - kernels[438]
                    + kernels[439] * -0.450460528
                    + kernels[440] * -0.389545057
                    - kernels[442]
                    - kernels[444]
                    - kernels[446]
                    + kernels[448] * -0.811643083
                    - kernels[453]
                    + kernels[456] * -0.258118412
                    - kernels[457]
                    - kernels[458]
                    - kernels[459]
                    - kernels[460]
                    + kernels[461] * -0.892855344
                    - kernels[462]
                    - kernels[465]
                    - kernels[466]
                    + kernels[468] * -0.046186913
                    - kernels[469]
                    - kernels[475]
                    - kernels[477]
                    - kernels[479]
                    - kernels[480]
                    - kernels[481]
                    - kernels[484]
                    + kernels[485] * -0.877946218
                    - kernels[487]
                    - kernels[490]
                    - kernels[492]
                    + kernels[494] * -0.02808384
                    - kernels[497]
                    - kernels[501]
                    - kernels[505]
                    + kernels[506] * -0.566386682
                    + kernels[507] * -0.01756316
                    - kernels[508]
                    - kernels[509]
                    + kernels[512] * -0.672589083
                    - kernels[517]
                    - kernels[518]
                    - kernels[520]
                    - kernels[522]
                    - kernels[523]
                    + kernels[524] * -0.001749131
                    - kernels[526]
                    + kernels[528] * -0.010761662
                    - kernels[529]
                    - kernels[530]
                    - kernels[531]
                    - kernels[533]
                    + kernels[535] * -0.850884852
                    - kernels[536]
                    - kernels[537]
                    - kernels[539]
                    - kernels[541]
                    - kernels[542]
                    - kernels[546]
                    - kernels[547]
                    - kernels[548]
                    - kernels[549]
                    - kernels[552]
                    - kernels[554]
                    + kernels[564] * -0.096128383
                    + kernels[565] * -0.088799166
                    - kernels[566]
                    - kernels[568]
                    - kernels[570]
                    - kernels[571]
                    + kernels[572] * -0.833324062
                    - kernels[575]
                    - kernels[577]
                    - kernels[580]
                    - kernels[582]
                    + kernels[583] * -0.032554313
        ;
        votes[decisions[0] > 0 ? 0 : 1] += 1;
        votes[decisions[1] > 0 ? 0 : 2] += 1;
        votes[decisions[2] > 0 ? 1 : 2] += 1;
                int classVal = -1;
        int classIdx = -1;
        for (int i = 0; i < 3; i++) {
            if (votes[i] > classVal) {
                classVal = votes[i];
                classIdx = i;
            }
        }
        return classIdx;
}
/**
 * Convert class idx to readable name
 */
const char* classIdxToName(uint8_t classIdx) {
    switch (classIdx) {
            case 0:
                return "LoRaWAN";
            case 1:
                return "NBIoT";
            case 2:
                return "DROP";
        default:
            return "UNKNOWN";
    }
}

