#include <iostream>
#include<ctime>
#include<time.h>


using namespace std;

int main()
{
    int n;
    clock_t start, finish;
    long counter;
    float seconds;

    int sum = 0;
    cout<<"n counter seconds seconds/counter"<<endl;
    for(n = 4;n < 2048;n *= 2){
        int* a = new int[n];
        for(int i = 0;i < n;i++){
            a[i] = i;
        }

        start= clock();
        counter = 0;
        while(clock() - start<10){
            counter++;
            for(int i = 0;i < n;i++){
                sum += a[i];
            }
        }
        finish=clock();
        seconds=(finish - start)/float(CLOCKS_PER_SEC);
        cout<<n<<' '<<counter<<' '<<seconds<<' '<<seconds/counter<<endl;
    }

    return 0;
}
