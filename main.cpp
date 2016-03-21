#include <iostream>
#include <string>
#include <fstream>
#include "BMI.h"
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
	string result;
	int h, m;
	
	ifstream inFile("file.in", ios::in);
	if(!inFile) {
		cerr << "Failed opening" << endl;
		exit(1);
	}
	
	ofstream outFile("file.out", ios::out);
	if(!outFile) {
		cerr << "Failed opening" << endl;
		exit(1);
	}

	while(inFile >> h >> m){
		BMI CalculateBMI(h, m);
		if(h == 0 && m == 0) break;
		outFile << fixed << setprecision(2) 
 			     <<CalculateBMI.getBMI(h, m) << "\t" 
			     << CalculateBMI.getResult() << endl;
	}

	return 0;
}


		
