	#include<iostream>
	using namespace std;
	int main()
	{
		double i[4] = { 4, 6, 7 ,8 };
		for (double* cp = i; (*cp) != '\0'; cp+=2) {
			cout << (void*)cp << " : " << (*cp) << endl;
		}
		return 0;
	}

