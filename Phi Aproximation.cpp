#include <iostream>
int c;
using namespace std;
double phi(int n){
    if(n==0)return 1;
    return 1+(1/phi(n-1));
}
int main(int argc, const char * argv[]){
    cin >>c;
    cout<<phi(c)<<endl;
    system("pause");
    return 0;
}
