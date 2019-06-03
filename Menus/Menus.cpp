#include<iostream>
using namespace std;

int main(){
	//Menu Administrador del Sistema
	char opcion,subopcion;
    do{
    	system("cls"); 
    	cout<<"|==============================================================|"<<endl;
        cout<<"|               MENU ADMINISTRADOR DEL SISTEMA                 |"<<endl;
        cout<<"|==============================================================|"<<endl;
        cout<<"| A- Salir                                                     |"<<endl;
        cout<<"| B- Administrar Usuarios del Sistema                          |"<<endl;
        cout<<"| C- Administrar Informacion General de la Empresa             |"<<endl;
        cout<<"| D- Administrar Gerencias, Departamentos, Areas de la Empresa |"<<endl;
        cout<<"| E- Administrar Puestos de la Empresa                         |"<<endl;
        cout<<"| F- Administrar Bitacora del Sistema                          |"<<endl;
        cout<<"|==============================================================|"<<endl;
        cout<<endl<<"Opcion:";
        cin>>opcion;         
        
        //evaluar opciones
        switch(opcion){            
        case 'b': 
        	//char subopcion;
            do{
                system("cls"); 
    			cout<<"|==================================|"<<endl;
        		cout<<"| ADMINISTRAR USUARIOS DEL SISTEMA |"<<endl;
        		cout<<"|==================================|"<<endl;
        		cout<<"| A- Salir                         |"<<endl;
        		cout<<"| B- Agregar Usuario al Sistemas   |"<<endl;
        		cout<<"| C- Listar Usuarios del Sistema   |"<<endl;
        		cout<<"| D- Modificar Usuario del Sistema |"<<endl;
        		cout<<"| E- Eliminar Usuario del Sistema  |"<<endl;
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
					case 'e': 
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
            system("pause");
            break;
        case 'd': 
            do{
                system("cls"); 
    			cout<<"|===========================================================|"<<endl;
        		cout<<"| Administrar Gerencias, Departamentos, Areas de la Empresa |"<<endl;
        		cout<<"|===========================================================|"<<endl;
        		cout<<"| A- Salir                                                  |"<<endl;
        		cout<<"| B- Administrar Gerencias                                  |"<<endl;
        		cout<<"| C- Administrar Departamentos                              |"<<endl;
        		cout<<"| D- Administrar Areas                                      |"<<endl;
        		cout<<"|===========================================================|"<<endl;
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
            do{
                system("cls"); 
    			cout<<"|===================================|"<<endl;
        		cout<<"| Administrar Puestos de la Empresa |"<<endl;
        		cout<<"|===================================|"<<endl;
        		cout<<"| A- Salir                          |"<<endl;
        		cout<<"| B- xxx                            |"<<endl;
        		cout<<"| C- xxx                            |"<<endl;
        		cout<<"| D- xxx                            |"<<endl;
        		cout<<"|===================================|"<<endl;
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
        case 'f': 
            system("cls");
			cout<<"Bitacora de del Sistema Vacia"<<endl;                    
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


