#include <iostream>
#include <string>
using namespace std;
 //definition de fonction;
void extraire(string s ){
	cout<<s.substr(0,2)<<"/";
	cout<<s.substr(2,2)<<"/";
	cout<<s.substr(4,4)<<":";
	cout<<s.substr(8,2)<<"h";
	cout<<s.substr(10,2)<<"m";
	
	
} 
 
 int main(){
 	string c="051020010415";
 	//l'appel de la fonction ;
 	extraire(c);
 	
 }

