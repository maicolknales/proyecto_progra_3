#include<iostream>
using namespace std;

int main(){
	//Menu Jefe
	char opcion,subopcion;
    do{
    	system("cls"); 
    	cout<<"|===============================================================|"<<endl;
        cout<<"|                         MENU JEFE                             |"<<endl;
        cout<<"|===============================================================|"<<endl;
        cout<<"| A- Salir                                                      |"<<endl;
        cout<<"| B- Marcae Entradas/Salidas de Empleados                       |"<<endl;
        cout<<"| C- Creas/Diseñar Organigrama                                  |"<<endl;
        cout<<"| D- Solicitud a Gerente                                       |"<<endl;
        cout<<"| E- Autorizar Permisos, Vacaciones, Inasistencias de           |    \n|    Empleados Previmiamente Autorizadas por Jefes de Area      |"<<endl;
        cout<<"| F- Generar Reportes de Entradas, Salidas, Inasistencias       | \n|    Permisos Vacaciones de Todo su Personal a Cargo en su Area |"<<endl;
        cout<<"| G- Generar Reporte de Boleta de Pago                          |"<<endl;
        cout<<"|===============================================================|"<<endl;
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
    			cout<<"|=====================================|"<<endl;
        		cout<<"|         SOLICITUD A GERENTE         |"<<endl;
        		cout<<"|=====================================|"<<endl;
        		cout<<"| A- Salir                            |"<<endl;
        		cout<<"| B- Solicitar Permiso a Gerente      |"<<endl;
        		cout<<"| C- Solicitar Inasistencia a Gerente |"<<endl;
        		cout<<"| D- Solicitar Vacaciones a Gerente   |"<<endl;
        		cout<<"|=====================================|"<<endl;
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

