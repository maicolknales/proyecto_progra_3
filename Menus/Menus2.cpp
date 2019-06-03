#include<iostream>
using namespace std;

int main(){
	//Menu Gerente
	char opcion,subopcion;
    do{
    	system("cls"); 
    	cout<<"|=============================================|"<<endl;
        cout<<"|         MENU ADMINISTRADOR DE RRHH          |"<<endl;
        cout<<"|=============================================|"<<endl;
        cout<<"| A- Salir                                    |"<<endl;
        cout<<"| B- Reclutamiento y Contratacion de Personal |"<<endl;
        cout<<"| C- Enviar Correo                            |"<<endl;
        cout<<"| D- Pagar Planilla                           |"<<endl;
        cout<<"| E- Generar Constancia de Trabajo            |"<<endl;
        cout<<"| F- Generar Boleta de Pago                   |"<<endl;
        cout<<"| G- Administrar Personal                     |"<<endl;
        cout<<"|=============================================|"<<endl;
        cout<<endl<<"Opcion:";
        cin>>opcion;         
        
        //evaluar opciones
        switch(opcion){            
        case 'b': 
        	//char subopcion;
            do{
                system("cls"); 
    			cout<<"|==========================================|"<<endl;
        		cout<<"| RECLUTAMIENTO Y CONTRATACION DE PERSONAL |"<<endl;
        		cout<<"|==========================================|"<<endl;
        		cout<<"| A- Salir                                 |"<<endl;
        		cout<<"| B- Reclutamiento 						  |"<<endl;
        		cout<<"| C- Contratacion                          |"<<endl;
        		cout<<"|==========================================|"<<endl;
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
        case 'c':  
            system("cls");  
			cout<<"Enviar Correos"<<endl;                  
            system("pause");
            break;
        case 'd': 
            system("cls");  
			cout<<"Pagar Planilla"<<endl;                  
            system("pause");
            break;
        case 'e': 
            system("cls");  
			cout<<"Generar Constancia de Trabajo"<<endl;                  
            system("pause");
            break;
        case 'f': 
            system("cls");
			cout<<"Generar Boleta de Pago"<<endl;                    
            system("pause");
            break;  
		case 'g':
			 do{
                system("cls"); 
    			cout<<"|=============================================|"<<endl;
        		cout<<"|          ADMINISTRAR PERSONAL               |"<<endl;
        		cout<<"|=============================================|"<<endl;
        		cout<<"| A- Salir                                    |"<<endl;
        		cout<<"| B- Aprobar/Denegar Vacaciones de Empleados  |"<<endl;
        		cout<<"| C- Aprobar/Denegar Permisos de Empleados    |"<<endl;
        		cout<<"| D- Aprobar/Denegar Asistencias de Empleados |"<<endl;
        		cout<<"| E- Monitoreo de LLegadas Tarde de Empleados |"<<endl;
        		cout<<"| F- Solicitudes Previamente Autorizadas por  |\n|    los Jefes y Gerentes Correspondientes    |"<<endl;
        		cout<<"| G- Sortear Premios Entre Empleados          |"<<endl;
        		cout<<"|=============================================|"<<endl;
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
					case 'e': 
                    	system("cls");                    
                    	system("pause");
                    	break;
                    case 'f': 
                    	system("cls");                    
                    	system("pause");
                    	break;
                    case 'g': 
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

