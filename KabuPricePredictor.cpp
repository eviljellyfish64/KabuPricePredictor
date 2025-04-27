#include <iostream>
using namespace std;

int main(){
	cout << "Welcome to the Kabu Price Predictor!"<<endl;
	cout << "------------------------------------"<<endl;
	cout << "Input the base price to start!"<<endl;
	cout << "Or Input "-100" to exit."<<endl;
	int choice;
	cin >> choice;
	if (choice == -100) return -1;
	else
		int base_price = choice;
	cout << base_price << endl;
	

	return 0;
}
