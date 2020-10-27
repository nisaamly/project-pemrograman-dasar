	
	/* Program Empat */
	/* Perhitungan 6 Suku Pertama */
	/* Nisa Amalia */
	/* 20051397038 */
	/* 2020B */
	
	#include<iostream>
	#include<conio.h>
	#include<math.h>
	
	using namespace std;
	int main(){
		
		int A=0, B, C, Jumlah=0, i, n;
		
		cout << "Menghitung Jumlah 6 Suku Pertama Geometri" << endl;
		cout << "===================================" << endl;
		cout << "Masukan Bilangan Awal : ";
		cin >> A;
		cout << "Masukan Jumlah Nilai Suku ke-n : ";
		cin >> n;
			
		cout << "Suku ke-" << n << " : ";
		cout << A << ",";
		
		for (i=1; i<7; i++){
			 B = pow(i,3);
			 
			 cout<<B<<",";
			 
		}

	
	}
