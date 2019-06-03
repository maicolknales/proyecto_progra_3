#include<iostream>
using namespace std;

int main(){
	//Menu Gerente
	char opcion,subopcion;
    do{
    	system("cls"); 
    	cout<<"|===================================================================|"<<endl;
        cout<<"|                        MENU GERENTE                               |"<<endl;
        cout<<"|===================================================================|"<<endl;
        cout<<"| A- Salir                                                          |"<<endl;
        cout<<"| B- Aumento de Salarios de Empleados                               |"<<endl;
        cout<<"| C- Dar Bonos a Empleados                                          |"<<endl;
        cout<<"| D- Solicitud a Director                                           |"<<endl;
        cout<<"| E- Autorizar Permisos, Vacaciones, Inasistencias de Empleados     |    \n|    Previmiamente Autorizadas por Jefes de Area                    |"<<endl;
        cout<<"| F- Generar Reportes de Entradas, Salidas, Inasistencias, Permisos | \n|    Vacaciones de Todo su Personal a Cargo en el Departamento      |"<<endl;
        cout<<"| G- Generar Reporte de Boleta de Pago                              |"<<endl;
        cout<<"|===================================================================|"<<endl;
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
    			cout<<"|======================================|"<<endl;
        		cout<<"|         SOLICITUD A DIRECTOR         |"<<endl;
        		cout<<"|======================================|"<<endl;
        		cout<<"| A- Salir                             |"<<endl;
        		cout<<"| B- Solicitar Permiso a Director      |"<<endl;
        		cout<<"| C- Solicitar Inasistencia a Director |"<<endl;
        		cout<<"| D- Solicitar Vacaciones a Director   |"<<endl;
        		cout<<"|======================================|"<<endl;
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

