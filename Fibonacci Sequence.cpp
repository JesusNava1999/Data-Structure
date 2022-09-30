#include<iostream>

using namespace std;

long i1 = 1, i2 = 1, res = 1, n;

long fibo(long n){
	for(int i = 3; i < n; i++){
		res = i1 + i2;
		i1 = i2;
		i2 = res;
	}
	return res;
}

int main(){
	
	cin >> n;
	
	for(int j = 1; j <= n; j++){
		cout << " " << i1 << " " <<  res;
		fibo(n);
	}
	
	return 0;
}
