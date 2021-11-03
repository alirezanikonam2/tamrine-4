#include <iostream>
using namespace std;
int main(){
	int a, b;
	cout << "this program is b m m" << endl << "enter numbre 1";
	cin >> a;
	cout << "enter adad 2";
	cin >> b;

	while (a != b){
		if (a > b){
			a -= b;
		}
		else{ b -= a; }
		cout << "b m m =" << a;


	}




	system("pause");
	return 0;
}