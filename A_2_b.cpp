#include<iostream>
using namespace std;
int main()
{
	int i[4] = { 4, 6, 7 ,8 };
	for (int* cp = i; (*cp) != '\0'; cp++) {
		cout << (void*)cp << " : " << (*cp) << endl;
	}
	return 0;
}

