/*
/*
For 1 
#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int k;
	int N;
	cout << "задайте число k ";
	cin >> k;
	cout << "задайте число  N которое больше нуля ";
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cout << k << endl;
	}
	
}
*/
/*
#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	int N = 0;
	cout << "задайте число a ";
	cin >> a;
	cout << "задайте число  b ";
	cin >> b;
	for (int i = a; i <= b; i = i + 1) {
		cout << i << endl;
		N++;
	}
	cout << "qrt =" << N << endl ;
}
*/
/*
#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	int N = 0;
	cout << "задайте число a ";
	cin >> a;
	cout << "задайте число  b ";
	cin >> b;
	for (int i = b - 1; i > a; i = i - 1) {
		cout << i << endl;
		N++;
	}
	cout << "qrt =" << N << endl ;
}
*/
/*
#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	double price;
	cout << "задайте прайс ";
	cin >> price ;
	for (int weight  = 1 ; weight <=  10; weight++) {
		cout << weight <<weight * price  << endl;
		N++;
	}
}
*/
/*
//#include<iostream>
//using namespace std;
//void main()
//{
	//setlocale(LC_ALL, "Russian");
	//int n = 0;
	//double price;
	//cout << "задайте прайс ";
	//cin >> price;
//	for (double weight = 0.1; weight < 1.0; weight += 0.1 ) {
		//cout << weight <<" $ "<< weight * price << endl;
		
	//}
//}
*/
/*
//#include<iostream>
//using namespace std;
//void main()
//{
	//setlocale(LC_ALL, "Russian");
	//int n = 0;
//	double price;
//	cout << "задайте прайс ";
//	cin >> price;
//   for (double weight = 1.2; weight < 2.0; weight += 0.2) {
//		cout << weight << " $ " << weight * price << endl;
//
//	}
//}
*/

#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "задайте переменную A ";
	cin >> a;
	cout << "задайте переменную B больше чем A ";
	cin >> b;
	int n = b - a ;
	for (a < b; n++;) {
		cout << n  <<  endl;

	}
}