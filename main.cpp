
#include <iostream>
#include <string>


using namespace std;

class Mascota
{
public:
  Mascota(string nombre, int patas, int Accion);
  virtual string hablar() = 0;
  virtual string Sentar() = 0;

private:
  string nombre;
  int patas;
  int Accion;
};

Mascota::Mascota(string nombre, int patas, int Accion):nombre(nombre),patas(patas),Accion(Accion)
{
  cout << "Tu mascota se llama: "<<nombre<<"\n con "<<patas<<" patas \n y esta realizando su accion: " <<endl;
}

class Perro : public  Mascota
{
public:
  Perro(string nombre, int patas, int Accion);
  	string hablar();
  	string Sentar();
  
  
};

Perro::Perro(string nombre, int patas, int Accion):Mascota(nombre, patas,Accion)
{
}

string Perro::hablar()
{
  return "GUAU";
}

string Perro::Sentar()
{
  return "Se sienta";
}

class Gato : public  Mascota
{
public:
  Gato(string nombre, int patas, int Accion);
  string hablar();
  string Sentar();
};

Gato::Gato(string nombre, int patas, int Accion):Mascota(nombre, patas,Accion)
{
}

string Gato::hablar()
{
  return "MIAU";
}

string Gato::Sentar()
{
  return "Se sienta";
}

int main()
{
	int DesMascota;
	std::string NomMasc;
	int patas;
	int DesAccion;
	cout << "ingrese el tipo de mascota 1 (Perro) - 2 (Gato): ";
	cin >> DesMascota;
    Mascota *p, *g;
	cout << std::uppercase;
	cout << "\n Ingrese el nombre de su mascota: ";
	cin >> NomMasc;
	cout << "\n Ingrese las cantidad de patas de su mascota: ";
	cin >> patas;
	cout << "\n Ingrese la accion que realizara su mascota Hablar(1) - Sentado(2): ";
	cin >> DesAccion;
		if(DesMascota == 1){	
			p=new Perro(NomMasc,patas,DesAccion);
			if(DesAccion == 1){
				cout << p->hablar() << endl;
			}else{
				cout << p->Sentar() << endl;	
			}	
		}else{
			g=new Gato(NomMasc,patas,DesAccion);
			if(DesAccion == 1){
				cout << g->hablar() << endl;
			}else{
				cout << g->Sentar() << endl;	
			}	
		}
		system("PAUSE");
     return 0;
}

