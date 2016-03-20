#include <string> 
using namespace std;

class BMI {
public:
	BMI(int h, int m);
	float getBMI(int height,int mass);
	string getResult(float BMI_value);
	
private:
	int height, mass;
	float BMI_value;
	string result;
};
