#include<iostream>
//#include <iomanip> //para el metodo setw 
//#include "Ingrediente.cpp"
//#include "Churro.cpp"
using namespace std;

//variables de control globales
/*
const int Max = 100;
Churro ** lista_churros = new Churro * [Max];//arreglo de 100 churros
int cantidad_churros=0;//controla la cantidad de churros almacenados
*/
//metodos para el mantenimiento del sistema
/*
void nuevoChurro();
void listarChurros();
void listarChurrosDieta();
int buscarChurro(string);
void modificarChurro();
void eliminarChurro();
*/

void autenticarUsuario(string, string);
//void mostrarMenuSegun(string);


int main(){ 
    string usuario;
    string contrasena;
    
    cout<<"Usuario: ";
    cin>>usuario;
	
	cout<<"Contraseña: ";
    cin>>contrasena;
	
	autenticarUsuario(usuario, contrasena);
	
	
	return 0;    
}

void autenticarUsuario(string usuario, string contrasena){
	cout<<"hola";
}


	
	/*
	do{
        system("cls"); 
        cout<<endl<<"...:::MENU:::...\n"
        "a- Salir\n"
        "b- Agregar Nuevo Churro al Arreglo\n"
        "c- Listar Churros\n"
        "d- Modificar Churro\n"
        "e- Eliminar Churro\n";
        cout<<endl<<"opcion:";
        cin>>opcion;        
        
        //evaluar opciones
        switch(opcion){            
        case 'b': 
             system("cls");                    
             nuevoChurro();
             system("pause");
             break;
        case 'c':  
            int subopcion;
            do{
                system("cls"); 
                cout<<endl<<"...:::SUB-MENU:::...\n"
                "1- Listar los churros existentes en el arreglo\n"
                "2- Listar los churros de dieta contenidos en el arreglo\n"
                "3- Regresar al menu principal\n";
                cout<<endl<<"opcion:";
                cin>>subopcion; 
                switch(subopcion){            
                case 1: 
                     system("cls");                    
                     listarChurros();
                     system("pause");
                     break;
                case 2: 
                     system("cls");                    
                     listarChurrosDieta();
                     system("pause");
                     break;
                case 3:
                     cout<<endl; 
                     break;           
                default: system("cls");
                         cout<<"Esta opcion no existe..."<<endl; 
                         system("pause");
                         break;
                }     
                                 
             }while(subopcion != 3);                       
             break;
        case 'd': 
             system("cls");                    
             modificarChurro();
             system("pause");
             break;
        case 'e': 
             system("cls");                    
             eliminarChurro();
             system("pause");
             break;
        case 'a':
             cout<<endl; 
             break;           
        default: system("cls");
                 cout<<"Esta opcion no existe..."<<endl; 
                 system("pause");
                 break;
    }            
        
    }while(opcion != 'a');
	*/
/*
void nuevoChurro(){
     if(cantidad_churros<100){
         string n,in,id;
         double p;
         int t,ic;         
         
         system("cls");
         cout<<"...::::Ingresar nuevo Churro::::..."<<endl<<endl;  
         cout<<"Nombre churro:";
         cin>>n;
         cout<<"Precio:";
         cin>>p;
         cout<<"Tamanio:";
         cin>>t;
         cout<<"...::::Ingresar los datos del Primer ingrediente::::..."<<endl<<endl; 
         cout<<"Nombre Ingrediente 1:";
         cin>>in;
         cout<<"Descripcion:";
         cin>>id;
         cout<<"Calorias:";
         cin>>ic;
         Ingrediente ig1(in,id,ic);
         cout<<"...::::Ingresar los datos del Segundo ingrediente::::..."<<endl<<endl; 
         cout<<"Nombre Ingrediente 2:";
         cin>>in;
         cout<<"Descripcion:";
         cin>>id;
         cout<<"Calorias:";
         cin>>ic;
         Ingrediente ig2(in,id,ic);
                  
         //agregarlo a la lista
         lista_churros [cantidad_churros] =
                            new Churro(n,p,t,ig1,ig2);
         cantidad_churros++;         
         cout<<endl<<"El churro fue ingresado exitosamente.."<<endl;         
     }
     else{
          system("cls");
          cout<<"Ya no hay espacio disponible en el arreglo para guardar el Churro"<<endl; 
        }
}


void listarChurros(){
     if(cantidad_churros==0){
          system("cls");
          cout<<"No se ha registrado ningun churro todavia"<<endl; 
     }else{
           cout<<"...::::Lista de Churros::::..."<<endl<<endl;           
           
           //imprime todas las churros almacendas en el arreglo de churros
           for(int i=0;i<cantidad_churros;i++){
               lista_churros [i]->print();     
           }
           cout<<endl<<"******FIN LISTA*******"<<endl<<endl;
     }    
}

void listarChurrosDieta(){
     if(cantidad_churros==0){
          system("cls");
          cout<<"No se ha registrado ningun churro todavia"<<endl; 
     }else{
           cout<<"...::::DIETA Lista de Churros DIETA::::..."<<endl<<endl;           
           
           for(int i=0;i<cantidad_churros;i++){
               if(lista_churros [i]->soyDieta()){  
                  lista_churros [i]->print();  
               }                    
           }
           cout<<endl<<"******FIN LISTA*******"<<endl<<endl;
     }    
}

int buscarChurro(string p_nombre){//a partir del nombre devuelve la posicion en el arreglo
     for(int i=0;i<cantidad_churros;i++){
             if(lista_churros [i]->getNombre()==p_nombre){
                return i; //posicion donde esta ubicada lel churro
             }                   
     }
     return -1;//no esta en el arreglo
}

void modificarChurro(){
     if(cantidad_churros==0){
          system("cls");
          cout<<"No se ha registrado ningun churro todavia"<<endl; 
     }else{
           cout<<"...::::Modificar  Churros::::..."<<endl<<endl; 
           string nombre_churro;
           cout<<"nombre a Modificar:";
           cin>>nombre_churro;
           int ubicacion=buscarChurro(nombre_churro);
           if(ubicacion==-1){
              cout<<"Lo sentimos ese nombre no existe"<<endl;
           }else{
               cout<<"Datos del codigo encontrado:"<<endl<<endl; 
               lista_churros [ubicacion]->print();
               cout<<endl<<endl;
               cout<<"...::::Ingresar nuevos datos del churro::::..."<<endl<<endl;  
                string n,in,id;
                 double p;
                 int t,ic;         
                 
                 cout<<"Nombre churro:";
                 cin>>n;
                 cout<<"Precio:";
                 cin>>p;
                 cout<<"Tamanio:";
                 cin>>t;
                 cout<<"...::::Ingresar los datos del Primer ingrediente::::..."<<endl<<endl; 
                 cout<<"Nombre Ingrediente 1:";
                 cin>>in;
                 cout<<"Descripcion:";
                 cin>>id;
                 cout<<"Calorias:";
                 cin>>ic;
                 Ingrediente ig1(in,id,ic);
                 cout<<"...::::Ingresar los datos del Segundo ingrediente::::..."<<endl<<endl; 
                 cout<<"Nombre Ingrediente 2:";
                 cin>>in;
                 cout<<"Descripcion:";
                 cin>>id;
                 cout<<"Calorias:";
                 cin>>ic;
                 Ingrediente ig2(in,id,ic);
                          
               lista_churros [ubicacion]->setNombre(n);
               lista_churros [ubicacion]->setPrecio(p);
               lista_churros [ubicacion]->setTamanio(t);
               lista_churros [ubicacion]->setIng1(ig1);
               lista_churros [ubicacion]->setIng2(ig2);
               cout<<endl<<"El churro fue modificado exitosamente.."<<endl;                
           }           
     }       
}


void eliminarChurro(){
     if(cantidad_churros==0){
          system("cls");
          cout<<"No se ha registrado ningun churro todavia"<<endl; 
     }else{
           cout<<"...::::Eliminar  Churros::::..."<<endl<<endl; 
           string nombre_churro;
           cout<<"nombre a Eliminar:";
           cin>>nombre_churro;
           int ubicacion=buscarChurro(nombre_churro);
           if(ubicacion==-1){
              cout<<"Lo sentimos ese nombre no existe"<<endl;
           }else{
               cout<<"Datos del nombre encontrado:"<<endl<<endl;                
               lista_churros [ubicacion]->print();
               cout<<endl<<endl;
               cout<<"Presione ENTER para eliminar el churro"<<endl<<endl;  
               system("Pause");
               
               //proceder a eliminar, usando copia de arreglos
               Churro ** temp_lista_churros = new Churro * [Max];
               int temp_cantidad_churros=0;
                              
                  //copio un array en otro array, excepto el churro que quiero eliminar
                  for(int i=0;i<cantidad_churros;i++){
                       if(i != ubicacion){                            
                            temp_lista_churros[temp_cantidad_churros] =
                                          new Churro(lista_churros[i]->getNombre(),
                                                      lista_churros[i]->getPrecio(),
                                                      lista_churros[i]->getTamanio(),
                                                      lista_churros[i]->getIng1(),
                                                      lista_churros[i]->getIng2() );                                          
                            temp_cantidad_churros++;              
                       }
                   }
               
                   //limpio la memoria usada por el array principal de churros
                   for(int i=0;i<cantidad_churros;i++){
                      lista_churros[i]->~Churro();
                   }
               
                   //copiar el arreglo temporal al principal
                   cantidad_churros=0;
                   for(int i=0;i<temp_cantidad_churros;i++){                                                 
                            lista_churros[cantidad_churros] =
                                          new Churro( temp_lista_churros[i]->getNombre(),
                                                      temp_lista_churros[i]->getPrecio(),
                                                      temp_lista_churros[i]->getTamanio(),
                                                      temp_lista_churros[i]->getIng1(),
                                                      temp_lista_churros[i]->getIng2() ); 
                                          
                            cantidad_churros++;
                   }                          
               cout<<endl<<"El Churro fue eliminado exitosamente.."<<endl;                
           }
           
     }       
}
*/
