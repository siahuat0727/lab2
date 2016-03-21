#include "BMI.h"

BMI::BMI(int h, int m) {
	height = h;
	mass = m;
}

float BMI::getBMI(int height,int mass) {
	BMI_value = mass * 10000.0f / height / height;
	return BMI_value;
}

string BMI::getResult() {
	if     (BMI_value < 15)   result = "Very severely underweight";
	else if(BMI_value < 16)   result = "Severely underweight";
	else if(BMI_value < 18.5) result = "Underweight";
	else if(BMI_value < 25)   result = "Normal";
	else if(BMI_value < 30)   result = "Overweight";
	else if(BMI_value < 35)   result = "Obese Class I(Moderately obese)";
	else if(BMI_value < 40)   result = "Obese Class II(Severely obese)";
	else                      result = "Obese Class III(Very severely obese)";
	
	return result;
}
