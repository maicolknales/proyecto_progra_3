#include "Usuario.cpp"

using namespace std;

class UsuarioRepository{
	private:
		
	public:
		Usuario obtenerUsuarioPor(string usuario, string contrasena){
			fstream Leer;	
			string s;
			string delimiter = ",";
    		Leer.open("./usuarios.csv"); 
    		
			if (Leer.is_open()){
      			while(!Leer.eof()){
      				getline(Leer, s);
      				
					string nombreUsuario = s.substr(0, s.find(delimiter));
					s.erase(0, s.find(delimiter) + delimiter.length());
					
					string correo = s.substr(0, s.find(delimiter));
					s.erase(0, s.find(delimiter) + delimiter.length());
					
					string clave = s;
					
					if (nombreUsuario == usuario && clave == contrasena){
						Leer.close();
						return new Usuario(usuario, correo, clave);
					}
					
    			}
    			Leer.close();
    			return null;
			}
    		else{
				cout<<"El archivo no se pudo abrir!";
				return null;
    		}
		}	
};
