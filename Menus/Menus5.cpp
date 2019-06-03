#include<iostream>
using namespace std;

int main(){
	//Menu Analista
	char opcion,subopcion;
    do{
    	system("cls"); 
    	cout<<"|=========================================|"<<endl;
        cout<<"|              MENU ANALISTA              |"<<endl;
        cout<<"|=========================================|"<<endl;
        cout<<"| A- Salir                                |"<<endl;
        cout<<"| B- Marcar Entradas/Salidas de Empleados |"<<endl;
        cout<<"| C- Ver Diagrama de Autorizaciones       |"<<endl;
        cout<<"| D- Solicitud a Jefe                     |"<<endl;
        cout<<"| G- Generar Reporte de Boleta de Pago    |"<<endl;
        cout<<"|=========================================|"<<endl;
        cout<<endl<<"Opcion:";
        cin>>opcion;         
        
        //evaluar opciones
        switch(opcion){            
        case 'b': 
        	system("cls");                    
            system("pause");
            break;
        case 'c':  
            system("cls");                    
            system("pause");
            break;
        case 'd': 
            do{
                system("cls"); 
    			cout<<"|==================================|"<<endl;
        		cout<<"|          SOLICITUD A JEFE        |"<<endl;
        		cout<<"|==================================|"<<endl;
        		cout<<"| A- Salir                         |"<<endl;
        		cout<<"| B- Solicitar Permiso a Jefe      |"<<endl;
        		cout<<"| C- Solicitar Inasistencia a Jefe |"<<endl;
        		cout<<"| D- Solicitar Vacaciones a Jefe   |"<<endl;
        		cout<<"|==================================|"<<endl;
        		cout<<endl<<"Opcion:";
                cin>>subopcion; 
                switch(subopcion){            
                	case 'b': 
                    	system("cls");                    
                    	system("pause");
                    	break;
                	case 'c': 
                    	system("cls");                    
                    	system("pause");
                    	break;
                	case 'd':
                    	system("cls");                    
                    	system("pause");
                    	break;
					case 'a':
            			cout<<endl; 
            			break;		           
                	default: system("cls");
                        cout<<"Esta opcion no existe.../n Elija de nuevo una opcion valida"<<endl; 
                        system("pause");
                        break;
                }                         
        	}while(subopcion != 'a');                  
             break;
        case 'e': 
            system("cls");                    
            system("pause");
            break;
        case 'f': 
            system("cls");                   
            system("pause");
            break;    
        case 'a':
            cout<<endl; 
            break;           
        default: system("cls");
                cout<<"Esta opcion no existe.../n Elija de nuevo una opcion valida"<<endl;  
                system("pause");
                break;
    }            
        
    }while(opcion != 'a');
    
	return 0;
}
