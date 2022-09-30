#include<iostream>
using namespace std;
int main(){
	int Matrix1[4][4],Matrix2[4][4];
	int x,y;
	cout << "Please capture the First Matrix: " << endl;
	cout << "Plaase define the dimension (N x N) " << endl;
	cin >> x;
	cout << endl;
	
	
	for(int i=0; i < x; i++){	//CAPTURE MATRIX_1
		cout << "Row #" << i+1 << endl;
		cout << endl;
		for(int j=0; j < x; j++){
			cout << "Column #" << j+1 << endl;
			cin >> Matrix1[i][j]; 
		}
		cout << endl;
	}
	
	for(int i=0; i < x; i++){  //SHOW MATRIX_1
		for (int j=0; j < y; j++){
			cout << Matrix1[i][j];
			cout << " " ;
		}
		cout << endl;
	}
	
	
	cout << "Please capture the Second Matrix: " << endl;
	cout << "Plaase define the dimension (N x N) " << endl;
	cin >> y;
	cout << endl;
	
	
	for(int i=0; i < y; i++){	//CAPTURE MATRIX_2
		cout << "Row #" << i+1 << endl;
		cout << endl;
		for(int j=0; j < y; j++){
			cout << "Column #" << j+1 << endl;
			cin >> Matrix2[i][j]; 
		}
		cout << endl;
	}
	
	for(int i=0; i < x; i++){  //SHOW MATRIX_2
		for (int j=0; j < y; j++){
			cout << Matrix2[i][j];
			cout << " " ;
		}
		cout << endl;
	}	
	
	
		
	return 0;
}
