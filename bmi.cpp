#include <iostream>
using namespace std;

int main ()
{
class Bad_bmi{};

double cm, ideal,kgs,bmi;


	try{
		std::cout << "Please enter your weight in kgs: ";
		std::cin >> kgs;
		std::cout << "Please enter your Height in m: ";
		std::cin >> cm;
		if(cm<=0 || kgs<=0)
			throw 0;
		bmi=kgs/(cm*cm);
		if(bmi<18.5)
			cout << "bmi. = " << bmi << " Elleipovaris.\n"; 
		if(bmi>=18.5 && bmi<25)
			cout << "bmi. = " << bmi << " Normal.\n";
		if(bmi>=25 && bmi<30)
			cout << "bmi. = " << bmi << " Ypervaros.\n";
		if(bmi>=30)
			cout << "bmi. = " << bmi << " Paxysarkos.\n";	
		ideal=22*cm*cm;
		std::cout << "Your ideal weight for your height is: " << ideal << "\n"; 
	}catch(int e){
		std::cout << "Lathos orismata!";
	}
	
	

return 0;
  
}
