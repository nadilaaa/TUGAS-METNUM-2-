#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;

float m,c;
int y_rata2,y[7],x_kali_y[7],total_y=0,total_x_kali_y=0;
int i,n,x_rata2,x[7],x_kuadrat[7],total_x=0,total_x_kuadrat=0;
int sigma_x(int n);
int sigma_y(int n);

void Program();
int main()
{
	n=7;
	Program();
	return 0;
	system("Pause");
}
void Program()
{
	cout<<"|====================================================|"<<endl;
	cout<<"|TUGAS METODE NUMERIK 2                              |"<<endl;
	cout<<"|Program Menghitung Regresi Linier f(x) = mx + c     |"<<endl;
	cout<<"|NAMA  : Nadila Arsy Nurul Akhyari (3411151019)      |"<<endl;
	cout<<"|NAMA  : Nadia Nur Halimah (3411151017)              |"<<endl;
	cout<<"|KELAS : SIE - A                                     |"<<endl;
	cout<<"|====================================================|"<<endl;
	cout<<endl<<endl;
	cout<<"|Menginput kan Data Secara Manual|"<<endl;
	cout<<endl<<endl;
	cout<<"Masukkan Nilai X : "<<endl;
	sigma_x(n);
	cout<<endl;
	cout<<"Masukkan Nilai Y : "<<endl;
	sigma_y(n);
	cout<<endl;
	cout<<"Tabulansi Data   :"<<endl;
	cout<<"|--------------------------------------|"<<endl;
	cout<<"| x     |  y  |      x2  |      xy     |"<<endl;
	cout<<"|--------------------------------------|"<<endl;
	for (i=0 ; i<n ; i++)
	{
		cout.setf(ios::left|ios::showpoint);
		cout<<"|";
		cout.width(9);
		cout<<x[i];
		cout.width(9);
		cout<<y[i];
		cout<<"|";
		cout.width(9);
		cout<<x_kuadrat[i];
		cout<<"|";
		cout.width(9);
		cout<<x_kali_y[i];
		cout<<"|";
		cout<<endl;
	}
	cout<<"|--------------------------------------|"<<endl;
	cout<<"|";
	cout.width(7);
	cout<<"sigma";
	cout<<total_x;
	cout<<"|";
	cout.width(9);
	cout<<total_y;
	cout<<"|";
	cout.width(9);
	cout<<total_x_kuadrat;
	cout<<"|";
	cout.width(9);
	cout<<total_x_kali_y;
	cout<<"|";
	cout<<endl;
	cout<<"|--------------------------------------|"<<endl;
	x_rata2 = total_x/n;
	y_rata2 = total_y/n;
	m = ((n*total_x_kali_y)-(total_x*total_y))/((n*total_x_kuadrat)-(total_x*total_x));
	c = y_rata2-m*x_rata2;
	cout<<endl<<endl;
	cout<<"Maka Persamaan Liniernya Adalah : f(x) = "<<m<<"x"<<c<<endl;
	
}
int sigma_x(int n)
{
	for (i=0 ; i<n ; i++)
	{
		cin>>x[i];
		total_x = total_x + x[i];
		x_kuadrat[i] = x[i]*x[i];
		total_x_kuadrat = total_x_kuadrat + x_kuadrat[i];	
	}
	return total_x;
	return total_x_kuadrat;
}
	int sigma_y(int n)
	{
		for (i=0 ; i<n ;i++)
		{
			cin>>y[i];
			total_y = total_y + y[i];
			x_kali_y[i] = x[i]*y[i];
			total_x_kali_y = total_x_kali_y + x_kali_y[i];
		}
		return total_y;
		return total_x_kali_y;
	}
