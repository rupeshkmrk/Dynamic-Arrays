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
			cout << "Continue ... ?? (Y/N)" << endl;
			char choice;
			cin >> choice;
			if (choice == 'N')
				break;
			else
			{
				max = max + 5;
				int* temp = new int[max];
				for (int i = 0; i < n; i++) {
					temp[i] = a[i];
				}

				delete[] a;
				a = temp;
			}
		}
	
		}
	for (int i = 0; i<n; i++) {
		cout << a[i] << endl;
	}
	int choice;
	cin >> choice;
	/*int size = 5;
	int *arr = new int[size];
	for (int i = 0;;i++)
	{
		cin >> arr[i];
		if (i == size)
		{
			cout << "Do you want add more elements...?? (Y/N)" << endl;
			char choice;
			cin >> choice;
			if (choice == 'Y') {
				size = size + 5;
				int *temp = new int[size];
				for (int j = 0;j < i;j++)
				{
					temp[j] = arr[i];
				}
				delete[] arr;
				arr = temp;
			}
			else
			{

			
				for (int i = 0;i < size;i++)
				{
					cout << arr[i] << endl;
				}
				
			}

		}
	}*/
//X:
//	
	return 0;
}

