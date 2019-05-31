#include<iostream> 
#include"UsuarioRepository.cpp"

#ifndef CHURRO_CPP
#define CHURRO_CPP

using namespace std;

class UsuarioService {
    private:
		UsuarioRepository usuarioRepository;
	public:
		UsuariosService() { 
			usuarioRepository = new UsuarioRepository();
		}
			
		void autenticarUsuario(string usuario, string contrasena){
			Usuario usuario = usuarioRepository.obtenerUsuarioPor(usuario, contrasena);
			if (usuario == null){
				//TODO: Tirar error
			}
			else{
				//TODO: Regresar datos de usuario para iniciar sesion
			}
		}      
};
#endif

