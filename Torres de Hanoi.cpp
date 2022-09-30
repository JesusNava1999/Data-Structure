//towers of hanoi
//problema de estado
#include<iostream>

using namespace std;

void hanoi(int n, char source, char target, char inter){
	if(n == 0) return;
	hanoi(n-1,source, inter, target);
	printf("%c -> %c\n", source, target);
	hanoi(n-1, inter, target, source);
}

int main(){
	
	int n;
	
	cin >> n;
	
	hanoi(n, 'A', 'B', 'C');
	
	return 0;
}
