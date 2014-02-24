#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;
int main(){
int w;

double h,BMI,man,woman;

	cout<<"輸入身高體重知BMI想體重的程式 \n";

	cout<<"身高(cm)為:";

	cin>>h;

	cout<<"體重(kg)為:";
	
	cin>>w;

	BMI=w/pow(h/100,2);

	man=(h-80)*0.7;

	woman=(h-70)*0.6;

	cout<<"BMI值為:"<<BMI<<"\n";

		if(BMI<20) cout<<"太瘦了!!\n";

		if(BMI>=20 && BMI<=25) cout<<"正常\n";

		if(BMI>25 && BMI<=28) cout<<"過重\n";

		if(BMI>28) cout<<"肥胖\n";

return 0;

}
