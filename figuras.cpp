// Pre directiva 
#include <iostream>

using namespace std;

class Figura{
 protected:
  int altura_;
  int ancho_;

public:
  // Constructor 
  Figura(int altura, int ancho){
   altura_ = altura;
   ancho_ = ancho;
  }

  // Destructor, luego hablamos de eso, no le pongas cuidado por ahora
  //virtual ~Figura();

  // Tarea: Crear metodos que me devuelvan los valores de altura y ancho

  int mi_altura(){
   return altura_;
  }

  int mi_ancho(){
   return ancho_;
  }

};

class Rectangulo : protected Figura{
protected:
public:
 Rectangulo(int altura, int ancho) : Figura (altura, ancho){
  altura_ = altura;
  ancho_ = ancho;
 }

// Metodos:

 int mi_altura(){
  return altura_;
 }

 int mi_ancho(){
  return ancho_;
 }

 int area(){
  return (altura_ * ancho_);
 }

};

class Triangulo : protected Figura{
protected:
public:
 Triangulo(int altura, int ancho) : Figura (altura, ancho){
  altura_ = altura;
  ancho_ = ancho;
 }

// Metodos:

 int mi_altura(){
  return altura_;
 }

 int mi_ancho(){
  return ancho_;
 }

 int area(){
  return (altura_ * ancho_) / 2;
 }

};

int main(){

 Rectangulo rectangulo_grande(4,5);
 Triangulo triangulo_rectangulo(4,5);

 cout << "El alto del triangulo rectangulo es de:" << triangulo_rectangulo.mi_altura() << endl;
 cout << "El area del triangulo rectagulo es de:" << triangulo_rectangulo.area() << endl;
 cout << "El area del rectangulo grande es de:" << rectangulo_grande.area() << endl;
  
  
  // Tarea: La funcion main tambien debe escribir al terminal si el area de 
  // triangulo_rectangulo es mayor al area de rectangulo_grande. Y escribir
  // al terminal el valor de ambas areas.
    
  return 0;
}