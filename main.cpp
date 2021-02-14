#include <iostream>

using namespace std;

int main(){
    unsigned minutos;

    cout<<"Ingrese la cant de minutos: ";
    cin>>minutos;
    
    if(minutos < 60){
    	cout<<minutos<<" minutos."<<endl;
	}else{
		unsigned parte_entera = minutos/60;
    	unsigned minutos_restantes = minutos - parte_entera * 60;
		if(minutos < 120){
			if(minutos_restantes == 0){
				cout<<parte_entera<<" hora"<<endl;
			}else
			cout<<parte_entera<<" hora y "<<minutos_restantes<<" minutos."<<endl;
		}else{
			if(minutos_restantes == 0){
				cout<<parte_entera<<" horas"<<endl;
			}else
			cout<<parte_entera<<" horas y "<<minutos_restantes<<" minutos."<<endl;
		}
	} 

    return 0;
}
