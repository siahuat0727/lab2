#include <string> 
using namespace std;

class BMI {
public:
	BMI(int h, int m);
	float getBMI(int height,int mass);
	string getResult();
	
private:
	int height, mass;
	float BMI_value;
	string result;
};
