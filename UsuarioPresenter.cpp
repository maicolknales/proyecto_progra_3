#include <iostream>
#include"UsuarioService"

using namespace std;

class UsuarioPresenter{
	
	private:
		UsuarioService usuarioService;
	public:
		UsuarioPresenter(){ 
			usuarioService = new UsuarioService();
		}
		
		void autenticarUsuario(){
			string usuario;
			string contrasena;
			
			cout<<"Usuario: ";
			cin>>usuario;
			cout>>"Contrasena";
			cin>>contrasena;
			
			usuarioService.autenticarUsuario(usuario, contrasena);
		}
		
		void mostrarMenuPara(string rol){
			switch(rol)
			{
				case "";
				
				case "";
				
				case "";
				
				case "";
			}
		}
}
