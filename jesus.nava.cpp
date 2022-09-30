#include <iostream>
#include <iomanip>
double pi(int n,int x,int y){
	return n<=1 ? 1 : x+(y*y)/pi(n-1,x+2,y+1);
}
int main(int argc, const char * argv[])
{
	int x=1,y=1,n;
	double p=4;
	std::cout << "Type (n): ";
	std::cin >> n;
	std::cout << "Pi in n(" << n << "): " << std::fixed << std::setprecision(20) << ((p)/(pi(n,x,y))) << std::endl;
	return 0;
}
