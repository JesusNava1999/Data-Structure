#include<iostream>
#include<conio.h>

using namespace std;
int main(){
	int n1,n2,s = 0;	
	cout << "Primer numero: " << endl;
	cin >> n1;
    cout << "Segundo numero: " << endl;
    cin >> n2;
    cout << "\n\n";
    while(n1 > 0){
    	if((n1 % 2) == 1){
    		s += n2;
	    }
    	cout << n1 << "\t";
    	cout << n2 << "\t";
    	if((n1 % 2) == 1){
    		cout << "\t" << n2 << endl;
	    } else{
	    	cout << endl;
		}
    	n1 /= 2;
    	n2 *= 2; 
	}
	cout << "\t\tSuma:\t" << s;
	getch();
	return 0;
}
