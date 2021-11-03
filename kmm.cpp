#include<iostream>
using namespace std;

int main(){

	cout << "this program is for k m m ";
	int a, b, c, d, t, k,n=0;
	cout << "enter adad1";
	cin >> a;
	cout << "enter adad2";
	cin >> b;
	c = a;
	d = b;


	while (n == 0){

		if (b == 0){
			n = 1;
		}
		else{
			t = a%b;
			a = b;
			b = t;
		}
		k = (c*d) / a;
	}
	cout << "this is kmm=";
	cout << k;
	system("pause");
	return 0;
}