#include<iostream>
#include<cmath>
using namespace std;

void integer10() {
	int n;
	cout << "Vvedite chislo N: ";
	cin >> n;
	cout << "Edinitsi: " << n % 10 << endl;
	cout << "Desyatki: " << int(n / 10) % 10;
	
}
void integer11() {
	int A;
	printf("A:");
	scanf("%i", &A);
	printf("+:%i  *:%i\n", A % 10 + (A % 100) / 10 + A / 100, (A % 10) * ((A % 100) / 10) * (A / 100));
	
}
void integer12() {
	int A;
	printf("A:");
	scanf("%i", &A);
	printf("%i\n", A % 10 * 100 + (A % 100) / 10 * 10 + A / 100);
}
void integer20() {
	int N;
	printf("N:");
	scanf("%i", &N);
	printf("%i\n", N / 60 / 60);
}
void integer21() {
	int N;
	printf("N:");
	scanf("%i", &N);
	printf("%i\n", N % 60);
}
void integer22() {
	int N;
	printf("N:");
	scanf("%i", &N);
	printf("%i\n", N % (60 * 60));

}
void boolean1() {
	int a;
	cout << "Vvedite chislo A: ";
	cin >> a;
	cout << "A - polojitel'noe chislo: " << (a > 0) << "." << endl;
}
void boolean2() {
	int a;
	cout << "Vvedite chislo A: ";
	cin >> a;
	cout << "A - nechyotnoye chislo: " << (a % 2 == 1) << "." << endl;
}
void boolean3() {
	int a;
	cout << "Vvedite chislo A: ";
	cin >> a;
	cout << "A - chyotnoye chislo: " (a % 2 == 0) << "." << endl;
	}
void boolean10() {
	int a, b;
	cout << "Vvedite chislo A: ";
	cin >> a;
	cout << "Vvedite chislo B: ";
	cin >> b;
	cout << "Rovno odno iz chisel A i B nechyotno: " << ((a % 2 == 1) != (b % 2 == 1)) << "." << endl;
}
void boolean18() {
	
	int a, b, c;
	bool answer;
	cout << "¬ведите 3 числа: " << endl;
	cout << "¬ведите a: ";
	cin >> a;
	cout << "¬ведите b: ";
	cin >> b;
	cout << "¬ведите c: ";
	cin >> c;
	answer = a == b || a == c || b == c;
	cout << "—реди трех данных целых чисел есть хот€ бы одна пара совпадающих: " << boolalpha << answer << endl;
	system("pause");
}
void boolean19() {
	int A, B, C;
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	cout << "C: ";
	cin >> C;
	cout << ((A == (-1) * B) | (A == (-1) * C) | (B == (-1) * C)) << endl;
}
void boolean21() {
	int A;
	cout << "A: ";
	cin >> A;
	A = fabs(A);
	cout << (((A / 100) < (A % 100 / 10)) & ((A % 100 / 10) < (A % 10))) << endl;
}
void boolean23() {
	int A;
	cout << "A:";
	cin >> A;
	A = abs(A);
	cout << (A % 10 == A / 1000 & A % 100 / 10 == A % 1000 / 100) << endl;
}
void boolean28() {
	double x, y;
	bool answer;
	cout << "¬ведите координаты точки." << endl << "¬ведите координату x: ";
	cin >> x;
	cout << "¬ведите координату y: ";
	cin >> y;
	answer = x > 0 && y > 0 || x < 0 && y < 0;
	cout << "“очка с координатами (x, y) лежит в первой или третьей координатной четверти: " << boolalpha << answer << endl;
	system("pause");
}
void boolean30() {
	float a, b, c;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	cout << ((a == b) & (a == c) & (b == c)) << endl;
}
void boolean36() {
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if (x1 == x2 || y1 == y2)
		cout << "1";
	else
		cout << "0";
}
void boolean37() {
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if (abs(x1 - x2) <= 1 && abs(y1 - y2) <= 1)
		cout << "1";
	else
		cout << "0";
}


int main()
{
	integer10();
	integer11();
	integer12();
	integer20();
	integer21();
	integer22();
	boolean1();
	boolean2();
	boolean3();
	boolean10();
	boolean18();
	boolean19();
	boolean21();
	boolean23();
	boolean28();
	boolean30();
	boolean36();
	boolean37();

	return 0;
}


