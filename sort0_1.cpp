// this que is on codiing ninja course
#include <iostream>
#include <algorithm>
using namespace std;

#include "solution.h"
void sortZeroesAndOne(int *input, int size)
{
    //Write your code here
     int count = 0;

    for(int i = 0; i < size; i++) {

        if(input[i] == 0) {

            count++;

        }

    }

    int j;

    for(j = 0; j < count; j++) {

        input[j] = 0;

    }

    for(int k = j; k < size; k++) {

        input[k] = 1;

    }
}

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		sortZeroesAndOne(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}
