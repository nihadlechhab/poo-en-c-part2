#include <iostream>
#include <math.h>
using namespace std;

// definition de la class
 class complexe{
  	
  	int *rel;
    int *img;
  	public:
  	complexe(int,int);// constructeur 
  	complexe();// constructeur par default 
  	complexe(const complexe&);// constructeur recopie
  	friend istream& operator>>(istream& ,complexe&);
  	friend ostream& operator<<(ostream& , const complexe &);
  	complexe& operator +(const complexe &);
  	complexe& operator -(const complexe &);
  	int operator ==(const complexe &);
  	complexe& operator *(const complexe &);
  	complexe& operator /(const complexe &);
  };
// definition du constructeur
  complexe::complexe(int a ,int b)
 {
 	
 	 rel=new int;
	   img=new int;   
	   *rel=a;
	   *img=b;
	   
 }
 // definition du constructeur par default
 complexe::complexe()
 {
 	rel=new int ;
 	img=new int;
 }
 // definition du constructeur recopie
 complexe::complexe(const complexe &x)
 {
 
         rel=new int;
	   img=new int;  
	   *rel=*(x.rel);
	   *img=*(x.img);
 }

 /********************************************operateur*********************/
 //definition l'opérateur '>>' :
istream& operator>>(istream& i ,complexe& c){
     int a;
     int b;
	cout<< "donnez la valeur de la partie reel : ";
	i>> a;
	cout<< "donnez la valeur de la partie imaginaire  : ";
	i>> b;
	 *(c.rel)=a;
     *(c.img)=b;
	return i ;
	
	
	
}
//definition l'opérateur '<<' :
 ostream& operator<<(ostream& o, const complexe& c){
     	o<<*(c.rel)<<" + i"<<*(c.img);
 	return o;
 }
 //definition l'opérateur '+' pour effectuer l'addition :
complexe& complexe:: operator +(const complexe & c){
		*rel+= *(c.rel);
		*img+=  *(c.img);
		return *this;
	}
//definition l'opérateur '-' pour effectuer la sustraction	
complexe& complexe:: operator -(const complexe & c){
		*rel-= *(c.rel);
		*img-=  *(c.img);
		return *this;
	}
//definition l'opérateur '==' pour tester l'égalité	
 int complexe::operator ==(const complexe & c){
 	
 	if (rel==c.rel && img==c.img)
 	return 1;
 	return 0;
 }
 //definition l'opérateur '*' pour effectuer la multiplication
 complexe& complexe:: operator *(const complexe & c){
   
	 *rel = (*rel) *   *(c.rel )- (*img)*   *(c.img);
	 *img = (*rel)*  *(c.img) + *(c.rel ) * (*img);
	
   	return *this;
 }
 //definition l'opérateur '/' pour effectuer la division
complexe& complexe:: operator /(const complexe & c){
	
		 *rel = (*rel) *   *(c.rel ) + (*img) *  *(c.img) / pow(*(c.rel ),2) +  pow(*(c.img ),2) ;
	     *img= *(c.rel ) * (*img)  - (*rel)*  *(c.img)  / pow(*(c.rel ),2) +  pow(*(c.img ),2);
	     return *this;
}
int main() {

    int choix;
    // definition les trois objets
	complexe c1,c2,c3;
	cout<<"entrer le premier nombre complexe :"<<endl;
	cin>>c1;
    cout<<c1;
    cout<<endl;
    cout<<"entrer le deuxième nombre complexe :"<<endl;
	cin>>c2;
    cout<<c2;
    cout<<endl;
     

	while(choix<0 || choix>6 || choix==6)
	{
		cout<<"(1):pour effectuer une addition "<<endl;
		cout<<"(2):pour effectuer une soustraction "<<endl;
		cout<<"(3):pour effectuer une multiplication "<<endl;
		cout<<"(4):pour effectuer une division "<<endl;
		cout<<"(5):pour effectuer l'egalite  "<<endl;
		cout<<"(6):pour quitter "<<endl;
		cout<<"quel operation voulez-vous effectuer? "<<endl;
		cin>>choix;
    
		switch(choix)
		{

				case (1):

				   cout<<"resultat d'addition est :"<<c1+c2;
					
					break;

				case (2):

                   cout<<"resultat de la sustraction est :"<<c1-c2;
					
					break;

				case (3):
                     cout<<"resultat de la multiplication est :"<<c1-c2;
				
					break;

				case (4):

				 cout<<"resultat de la division est :"<<c1/c2;
					break;
					
					case (5):

				 cout<<"resultat de l'égalité est :"<<endl;
				   if ((c1==c2)==1)
				    cout<<"c1=c2";
				    else 
				    cout<<"c1 !=c2";
					break;	
				case (6):
				 
				  exit(-1)	   ;
					
					
			}
		}
		
return 0;		
		
}

    
     


