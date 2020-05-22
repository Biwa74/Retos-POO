#include <iostream>
using namespace std;

class Librocalificaciones{
    public:
        void setnombrecurso(string nombre){
            nombrecurso=nombre;
        }
        void mostrarMensaje(){
            cout<<"Bienvenido a el libro de calificaciones de "<< nombrecurso<<endl;
        }
    private:
        string nombrecurso;

};

int main(){
    string nombre;
    cout<< "Teclea el nombre de la materia: ";
    getline(cin, nombre);
    Librocalificaciones miLibro;
    miLibro.setnombrecurso(nombre);
    miLibro.mostrarMensaje();
}