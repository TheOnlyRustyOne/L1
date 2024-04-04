#include<iostream>
#include<string>
#include<stdlib.h>
#include<conio.h>

using namespace std;


int main(){
	int opc =0;
	string cad1,cad2,cad3;
	do{
		cout<<"\t---MENU---"<<endl;
		cout<<"1.inserte una cadena, para calcular su longitud"<<endl;
		cout<<"2.inserte tres cadenas, para contatenerlas y calcular la longitud de las tres"<<endl;
		cout<<"3.inserte una cadena"<<endl;
		cout<<"4.inserte una cadena"<<endl;
		cout<<"5.inserte una cadena"<<endl;
	    cout<<"6.salir"<<endl;
	    cin>>opc;
        system("cls");
        
        switch(opc){
	  	case 1: cout<<"inserte cadena: ";cin>>cad1;
	  		    cout<<"la longitud de la cadena es: "<<cad1.length(); 
	  		    system("pause");break;	    
	  	case 2: 
	  		
	  	case 3: 
	  		
	  	case 4: 
	  		
	  	case 5: 		
	  		
	   	case 6: break;
	   		
	   	default:cout<<"error"; break;	
	}
	    getch();
	    system("cls");
	}while(opc != 6);
	
	cout<<"gracias por (no) vernos";
	
	return 0;
}
