#include <iostream>
#include <string>
using namespace std;

class libro{
	private:
		string titulo;
		string autor;
		int anioPubli;
		
	public:
		// Construtor
		libro(string t, string a, int anio) : titulo(t), autor(a), anioPubli(anio) {}
		
		void info(string t, string a, int anio){
			titulo = t;
			autor = a;
			anioPubli = anio;
		}
		
		void mostrarInfo(){
			cout << "Libro: " << titulo << endl;
			cout << "Autor: " << autor << endl;
			cout << "Anio de publicacion: " << anioPubli << endl;
		}
};

int main(){
	libro libro1("Huye sin mirar atras", "Luis Leante", 2016);
	libro1.mostrarInfo();
	
	return 0;
}