#include<iostream>
using namespace std;
int main(){

	cout << "this program is for factoriel";
	int n, m=1,i=1;
	cout << "enter number";
	cin >> n;

	for (; m <n; i++){
		m = m*(i + 1);
	}
	if (m == n){
		cout << "yes";
	}
	else{ cout << "no"; }



	system("pause");
	return 0;
}