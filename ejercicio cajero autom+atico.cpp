#include<iostream>
using namespace std;
int n;

int main(){
	int menu;
	int saldo=10000;
	int dineroin=0;
	int dineroret=0;
	
	do{
 	
    cout<<"CALCULADORA"<<endl;
    cout<<"==========================="<<endl;
    cout<<"MENU DE OPCIONES\n";
    cout<<"1. Ingresar dinero\n";
    cout<<"2. Retirar dinero\n";
    cout<<"3. Salir\n";
    cin>>menu;
    
  switch(menu){
  	
  	
  	case 1:
	  cout<<"Selecciono ingresar dinero\n"; 
	  cout<<"Digite el dinero a ingresar\n"; 
	  cin>>dineroin;
	  cout<<"Saldo todal es: "<<dineroin + saldo<<" $ "<<endl<<endl;
	  break;
	  
	  
	case 2:
	  cout<<"Selecciono retirar dinero\n"; 
	  cout<<"Digite el dinero a retirar\n"; 
	  
	  if(dineroret > 10000 ){
	  	break;
	  }
	  cin>>dineroret;
	  cout<<"Saldo todal es: "<<saldo - dineroret<<"$"<<endl<<endl;
	  break;
	  
	  
	case 3:
	  break;
	  
  }

	}while (menu < 3);
}

  	
  	
  	
  	
  

