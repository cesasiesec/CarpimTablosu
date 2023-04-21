//ic ice donguler icin ornek
//ekrana carpim tablosunu bastıran kodu yaziniz.
#include <iostream>
using namespace std;
int main() {
	int boyut;
	cout << "Kac sutunlu bir carpim tablosu istiyorsunuz?:";
	cin >> boyut;
	for (int i = 1; i <= boyut; i++) {
		for (int j = 1; j <= boyut; j++)
		{
			cout << i * j << " , ";
		}
		cout << endl;
	}

	return 0;
}