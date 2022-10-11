#include <iostream>
#include <iomanip>
using namespace std;


// ******************************
// Your code here

void getInput(int &n1, int &n2, int &n3);
int findMin(int n1, int n2, int n3); 
void printResult(int n1, int n2, int n3, int min);

// ******************************

// ******************************
// this function will help you pass the test. When you print the result with this function, you will get the same output format

int main () {

	int n1, n2, n3, min;
	getInput(n1, n2, n3);
	min = findMin(n1, n2, n3);
	printResult(n1, n2, n3, min);
}


void printResult(int n1, int n2, int n3, int min)
{
	cout << n1 << " " << n2 << " " << n3 << " " << min << " " << endl;
}

void getInput(int &n1, int &n2, int &n3) {
	cout << "Provide 3 integer values" << endl;
	cin >> n1 >> n2 >> n3;
}
