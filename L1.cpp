#include<iostream>
#include<string>
#include<stdlib.h>
#include<conio.h>

using namespace std;
//si ven esto es que puedo escribir

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
	  	case 2: cout<<"inserte la primera cadena: ";cin>>cad1;
	  	        cout<<"inserte la segunda cadena: ";cin>>cad2;
	  	        cout<<"inserte la tercera cadena: ";cin>>cad3;
	  	        conCad = cad1 + cad2 + cad3;
	  	        cout<<"la concatenacion de las 3 cadenas es: "<<conCad<<endl;
	  	        cout<<"la logitud es: "<<conCad.length();
	  	        system("pause");break;

	  		
	  	case 3: cout<<"inserte cadena: ";cin>>cad1;
	  	        cout<<"iserte caracter por buscar: ";cin>>busCar;
	  	        
	  	        pos = -1;
                for (int i = 0; i < cad1.length(); ++i) {
                   if (cad1[i] == busCar) {
                      pos = i + 1;
                      break;
                  }
               }
	  	        
	  	        if (pos != -1) {
	  	            cout<<"su caracter fue encontrado en la posicion "<<pos<<" de la cadena";
	  	        }
	  	        else {
	  	            cout<<"su caracter no fue encontrado en la cadena";
	  	        }
	  	        system("pause");break;
	  		
	  	case 4: cout << "Ingrese una cadena: ";
                cin >> cadena1;
                cout << "Ingrese la posición inicial: ";
                cin >> inicio;
                cout << "Ingrese la longitud de la subcadena: ";
                cin >> longitud;
                cout << "La subcadena es: " << generarSubcadena(cadena1, inicio, longitud) << endl;
                break;
	  		
	  	case 5:  cout << "Ingrese una cadena: ";
                cin >> cadena1;
                string aReemplazar, reemplazo;
                cout << "Ingrese la cadena a reemplazar: ";
                cin >> aReemplazar;
                cout << "Ingrese el reemplazo: ";
                cin >> reemplazo;
                cout << "La cadena resultante es: " << reemplazarCadena(cadena1, aReemplazar, reemplazo) << endl;
                break;		
	  		
	   	case 6: break;
	   		
	   	default:cout<<"error"; break;	
	}
	    getch();
	    system("cls");
	}while(opc != 6);
	
	cout<<"gracias por (no) vernos";
	
	return 0;
}
