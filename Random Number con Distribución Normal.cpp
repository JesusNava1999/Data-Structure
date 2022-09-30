#include <iostream>
#include <ctime>
#include <cmath>
#include <stdlib.h>

using namespace std;
float normal(float mu,float sigma,int n){
    float x=0;
    for(int i=0;i<n;i++){
        x+=(rand()%1000)/1000.0;
        return sqrt(12.0/n)*(x-float(n)/2)*(sigma+mu);
    }
}
int main(int argc, const char * argv[]){
    srand((unsigned)time(NULL));
    float mu , sigma;
    int n;
    
    cin>> mu>> sigma>>n;
    for(int i=0;i<n;i++) {
        cout<< normal(mu,sigma,i)<<endl;
    }   
    //system("pause");
    return 0;

}
