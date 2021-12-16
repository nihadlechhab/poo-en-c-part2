#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main (){
	
	char q;
	//definition d'une liste
	list<int>l;
    cout<<"entrer les entiers :"<<endl;
    if(!q){
    // entre les elements du liste par l'utilisateur	
	copy(istream_iterator<int>(cin),istream_iterator<int>(),back_inserter(l));
	}	
	cout<<"la liste :"<<endl;
	//afficher les elements du liste	
	for (list<int>::iterator i=l.begin();i!=l.end();i++){
		cout<<*i<<" ";}
	cout<<endl;	
	// appele la fonction pour trier		
	l.sort();
	cout<<"la liste trier :"<<endl;
	//afficher les elements du liste après le triage 
	for (list<int>::iterator i=l.begin();i!=l.end();i++){
		cout<<*i<<" ";}

	return 0;
}
