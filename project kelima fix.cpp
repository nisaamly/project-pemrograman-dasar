	/* Program Lima */
	/* Perhitungan Jumlah Deret */
	/* Nisa Amalia */
	/* 20051397038 */
	/* 2020B */
	
	#include<iostream>
	#include<conio.h>
	#include<math.h>
	
	using namespace std;
	int main(){
		
		int A=0, B, C, Jumlah=0, i, n;
		
		cout << "Menghitung Jumlah Deret Bilangan" << endl;
		cout << "====================================" << endl;
		cout << "Masukan Bilangan Awal : ";
		cin >> A;
		cout << "Masukan Beda : ";
		cin >> B;
		cout << "Masukan Jumlah Nilai Suku ke-n : ";
		cin >> n;
		
		cout << "Deret ke-" << n << " : ";
		cout << A << ",";
		
		Jumlah = Jumlah+A; 
		
		for (i=0; i<n-1; i++){
			C = A+B;
			A = C;
			cout << C << ",";
			Jumlah=Jumlah+C;
			
		}
		
		cout << "Jumlah Deret Ke-" << n << " : ";
		cout << Jumlah;

		return 0;
		
	}
