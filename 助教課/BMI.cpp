#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;
int main(){
int w;

double h,BMI,man,woman;

	cout<<"��J�����魫��BMI�Q�魫���{�� \n";

	cout<<"����(cm)��:";

	cin>>h;

	cout<<"�魫(kg)��:";
	
	cin>>w;

	BMI=w/pow(h/100,2);

	man=(h-80)*0.7;

	woman=(h-70)*0.6;

	cout<<"BMI�Ȭ�:"<<BMI<<"\n";

		if(BMI<20) cout<<"�ӽG�F!!\n";

		if(BMI>=20 && BMI<=25) cout<<"���`\n";

		if(BMI>25 && BMI<=28) cout<<"�L��\n";

		if(BMI>28) cout<<"�έD\n";

return 0;

}
