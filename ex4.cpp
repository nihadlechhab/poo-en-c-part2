 #include<iostream>
#include<list>
#include<utility>
using namespace std;
int main(){
    char c;
    int i=1;
    string nom;
    string prenom;
    int age;
    list<pair<string,pair<int,string>>>info;
    list<pair<string,pair<int,string>>>::iterator it;
    do{
        cout<<"donner l'age "<<i<<" : ";
        cin>>age;
        cout<<"donner le nom "<<i<<" : ";
        cin>>nom;
        cout<<"donner le prénom "<<i<<" : ";
        cin>>prenom;
        info.push_back({nom,{age,prenom}});
        i++;
        cout<<"ajoutez? y/n: ";
        cin>>c;
    }while(c!='n');
    info.sort();
    for(auto info : info){
        cout<<"nom : "<<info.first<<" -- "<<"age : "<<info.second.first<<" -- "<<"prenom : "<<info.second.second<<endl;
    }
    return 0;
}

