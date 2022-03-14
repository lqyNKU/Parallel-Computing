#include <iostream>
#include<windows.h>
#include<stdlib.h>

using namespace std;

int main()
{
    //initialize
    int n;
    int step = 10;
    long long head, tail, freq;
    for(n = 0;n < 1000;n += step){
        double* sum = new double[n];
    int* a = new int[n];
    int** b = new int*[n];
    for(int i = 0;i < n;i++){
        b[i] = new int[n];
    }
    for(int i = 0;i < n;i++){
            a[i] = i + 1;
        for(int j = 0;j < n;j++){
            b[i][j] = i + j;
        }
    }

    QueryPerformanceFrequency((LARGE_INTEGER *)&freq);
    QueryPerformanceCounter((LARGE_INTEGER *)&head);
    //common
//    for(int i = 0;i < n;i++){
//        sum[i] = 0.0;
//        for(int j = 0;j < n;j++){
//            sum[i] += b[j][i] * a[j];
//        }
//    }

    //updated
    for(int i = 0;i < n;i++){
        sum[i] = 0.0;
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            sum[j] += b[i][j] * a[j];
        }
    }
    QueryPerformanceCounter((LARGE_INTEGER *)&tail);
    cout<<(tail - head) * 1000.0 / freq << "ms" <<endl;

    if(n == 100)step = 100;
    }

    return 0;
}
