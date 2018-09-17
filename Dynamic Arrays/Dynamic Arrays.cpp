// Dynamic Arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<iostream>


using namespace std;
int main()
{
	int max = 10;    
	
	int* a = new int[max];  
	int n = 0;

	while (cin >> a[n]) {
		n++;
		if (n >= max) {
			max = max + 5;           
			int* temp = new int[max]; 
			for (int i = 0; i<n; i++) {
				temp[i] = a[i];       
			}
			
			delete[] a;           
			a = temp;          
		}
		for (int i = 0; i<n; i++) {
			cout << a[i] << endl;   
		}
	}
	return 0;
}

