#include <iostream>
#include<ctime>
#include<time.h>

using namespace std;

int main()
{
    //initialize
    int n;
    int step = 10;
    long counter;
    float seconds;
    clock_t start,finish;
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

    start=clock();
    counter=0;
    while(clock()-start<10){
        counter++;
         //common
    for(int i = 0;i < n;i++){
        sum[i] = 0.0;
        for(int j = 0;j < n;j++){
            sum[i] += b[j][i] * a[j];
        }
    }

    //updated
    //for(int i = 0;i < n;i++){
    //    sum[i] = 0.0;
    //}
    //for(int i = 0;i < n;i++){
    //    for(int j = 0;j < n;j++){
    //        sum[j] += b[i][j] * a[j];
    //    }
    //}
    }

    finish=clock();
    seconds=(finish - start)/float(CLOCKS_PER_SEC);
    cout<<n<<' '<<counter<<' '<<seconds<<' '<<seconds/counter<<endl;

    if(n == 100)step = 100;
    }

    return 0;
}
