// Author: Chris Kau
// CECS 325-02
// Sorting Contest (Bubble Sort - Prog 3)
// Due 03/12/2024
// I certify that this program is my own original work. I did not copy any part of this program from any other source. I further certify that I typed each and every line of code in this program.
#include <iostream>
#include <fstream>
#include <array>
using namespace std;
void bubble(int A[], int size)
{
	for(int i = 0; i < size; i++)
	{
		for(int j = i + 1; j < size; j++ )
		{
			if (A[i] > A[j])
			{
				swap(A[i], A[j]);
			}
		}
	}
}

int main(int argc, char*argv[])
{
	int numbers[1000000];
	ifstream file;
	file.open(argv[1]);
	string temp;
	int idx = 0;
	while (getline(file, temp))
	{
		numbers[idx] = stoi(temp);
		idx++;
	}
	file.close();
	bubble(numbers, idx); 
	ofstream fout(argv[2]);
	for(int i = 0; i < idx; i++)
	{
		fout  << numbers[i] << endl;
	}
	return 0;
}
