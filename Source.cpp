#include <iostream>
using namespace std;
int main() {
	//1 :  cДан массив из 5 элементов. Вывести в обратном порядке числа от 4 до 0.
	/*const int size = 5;
	int mas[size];
	for (int i = 0; i <= size; i++) {
		cin >> mas[i];
	}
	for (int i = size - 1; i >= 0; i--) {
		cout << mas[i] << ' ';
	}
	cout << endl;*/
	//2: Дан массив из 15 элементов. Заполнить его случайными числами из диапозона 0-20. Подсчитать кол-во чисел в массиве.
	/*const int n = 15;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 21;
		cout << arr[i] << " ";
	}
	cout << endl;
	int kol_vo = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			kol_vo++;
		}
	}
	cout << kol_vo << endl;*/
	//1
	/*const int n = 15;
	int mas[n];
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 21;
		cout << mas[i] << " ";
	}
	cout << endl;
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (mas[i] % 5 != 0) {
			k++;
		}
	}
	cout << k << endl;*/
	//2
	/*const int n = 20;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 31;
		cout << arr[i] << " ";
	}
	int suma = 0;
	int sumb = 0;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 3 == 0) {
			suma += arr[i];
		}
		else if (arr[i] % 5 == 0) {
			sumb += arr[i];
		}
	}
	sum = suma + sumb;
	cout << "summa = " << sum << endl;*/
	//3
	/*const int n = 17;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 46;
		cout << arr[i] << " ";
	}
	int proizv = 1;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0 || arr[i] % 3 == 0) {
			proizv *= arr[i];
		}
	}
	cout << "proizvedenie = " << proizv << endl;*/
	//4
	/*const int n = 17;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 53;
		cout << arr[i] << " ";
	}
	double k = 0;
	double sr_ar;
	double sum = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			k++;
			sum += arr[i];
		}
	}
	sr_ar = sum / k;
	cout << "srednee arefmeticheskoe = " << sr_ar << endl;*/
	//5
	const int n = 25;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 67;
		cout << arr[i] << " ";
	}
	double proizv = 1.0;
	double sr_geo;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 != 0) {
			proizv *= arr[i];
		}
	}
	sr_geo = sqrt(proizv);
	cout << "srednee geometricheskoe = " << sr_geo << endl;
}