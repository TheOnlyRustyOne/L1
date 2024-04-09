#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

string concat(string a, string b){
	string res = a + b;
	return res;
}

string generarSubcadena(string a,int inicio,int fin){
	string res;
	
	for(int i=inicio;i<fin;i++){
		res += a[i];
	}
	return res;
}

int main(){
	int opc,pos,inicio,longitud;
	string cad1,cad2,cad3,conCad;
	char busCar;
	do{
		cout<<"\t---MENU---"<<endl;
		cout<<"1.insertar una cadena para calcular su longitud"<<endl;
		cout<<"2.insertar tres cadenas para contatenerlas y calcular la longitud de las tres"<<endl;
		cout<<"3.insertar una cadena para buscar un caracter en la misma"<<endl;
		cout<<"4.insertar una cadena para generar una subcadena de la misma"<<endl;
		cout<<"5.insertar una cadena para agregarle otra cadena desde una posicion"<<endl;
	    cout<<"6.salir"<<endl;
	    cout<<endl<<"- ";cin>>opc;
	    if(cin.good()){
		
        system("cls");
        fflush(stdin);	
        
        switch(opc){
	  	case 1: 
		        cout<<"inserte cadena: ";getline(cin,cad1);
	  		    cout<<"la longitud de la cadena es: "<<cad1.length()<<endl; 
	  		    system("pause");break;	  
				    
	  	case 2: 
	  		    cout<<"inserte la primera cadena: ";getline(cin,cad1);
	  	        cout<<"inserte la segunda cadena: ";getline(cin,cad2);
	  	        cout<<"inserte la tercera cadena: ";getline(cin,cad3);
	  	        conCad = cad1 + cad2 + cad3;
	  	        cout<<"la concatenacion de las 3 cadenas es: "<<conCad<<endl;
	  	        cout<<"la logitud es: "<<conCad.length()<<endl;
	  	        system("pause");break;
				
	  	case 3: 
	  	        cout<<"inserte cadena: ";getline(cin,cad1);
	  		cout<<endl<<"inserte caracter a buscar en la cadena: ";cin>>busCar;
	  		    
	  		    for(int i=0;i<cad1.length();i++){
	  		    	cad1[i] = tolower(cad1[i]);
				  }
	  		    busCar = tolower(busCar);
	  		    
	  		    for(int i=0;i<cad1.length();i++){
	  		    	if(cad1[i] == busCar){
	  		    		cout<<"el caracter SI existe, en la posicion: "<<i+1;
	  		    		break;
	  		    	  }
	  		    	else if( i == cad1.length()-1){
	  		    		cout<<"el caracter No existe en la cadena";
					  }	
					}			
				  cout<<endl;system("pause");break;
				  
	  	case 4: 
	  		     cout << "Ingrese una cadena: ";
                getline(cin,cad1);
                cout << "Ingrese la posición inicial: ";
                cin >> inicio;
                if(!cin.good()){
	  		    	cout<<"inserte un valor numerico, regresando al menu"<<endl;
                  	cin.clear();
                	cin.ignore();
                	system("pause");
                	break;
				  }
                inicio--;
                cout << "Ingrese la longitud de la subcadena: ";
                cin >> longitud;
                if(!cin.good()){
	  		    	cout<<"inserte un valor numerico, regresando al menu"<<endl;
                  	cin.clear();
                	cin.ignore();
                	system("pause");
                	break;
				  }
				if(inicio > longitud || inicio<0||longitud>cad1.length()){
	  		    	cout<<"error, siga indicaciones e inserte valores validos"<<endl;
					system("pause");break;
				}
				else{
                cout << "La subcadena es: " << generarSubcadena(cad1, inicio, longitud) << endl;
                system("pause");break;
			    }
	  	case 5: 		
	  		    cout<<"inserte cadena: ";getline(cin,cad1);
	  		    cout<<"inserte posicion a agregar nueva cadena: ";cin>>pos;
	  		    if(!cin.good()){
	  		    	cout<<"inserte un valor numerico, regresando al menu"<<endl;
                  	cin.clear();
                	cin.ignore();
                	system("pause");
                	break;
				  }
	  		    fflush(stdin);	
	  		    cout<<"inserte cadena a añadir: ";getline(cin,cad2);
	  		    if(pos>cad1.length()||pos<0){
	  		    	cout<<"error, siga indicaciones e inserte valores validos"<<endl;
					system("pause");break;
				  }
				else{
				  cad3 = generarSubcadena(cad1,0,pos);
				  cad3 = concat(cad3,cad2);
				  cout<<"cadena original: "<<cad1;
				  cout<<endl<<"nueva cadena: "<<cad3<<endl;	
				  system("pause");break;
				}  
	  		    
	   	case 6: break;
	   		
	   	default:cout<<"error"; break;	
	}
}
else{
	cout<<"inserte un valor numerico"<<endl;
	cin.clear();
	cin.ignore();
	system("pause");
}
	    system("cls");
	}while(opc != 6);	
	return 0;
}
