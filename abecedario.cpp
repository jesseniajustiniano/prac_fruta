#include <iostream>
using namespace std;
char caracter[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}
string letras="abcdefghijklmnopqrstuvwxyz";
int numero[26];
char c[26];
//UTILIZAR FUNCIONES
char generarCaracter()
{	
	return caracter[rand()%26]; //COMENTARIO GENERARA UN CARACTER DE FORMA ALEATORIA
}
int generarNumero()
{
	return rand()%51
}
void imprimir()
{
	cout<<"CAR\tNUM"<<endl;
	for(int i=0;i<10;i++)
		cout<<c[i]<<"\t"<<numero[i]<<endl;
}
void generarDatos()
{
	for(int i=0;i<10;i++)
	{
		numero[i]=generarNumero();
		c[i]=generarCaracter()
	}
}
int main(){
	//REALIZAR UNA FUNCION PARA GENERAR LOS DATOS
	for(int i=0;i<10;i++)
	{
		numero[i]=generarNumero();
		c[i]=generarCaracter();
	}
	imprimir();
	
	return 0;
}
