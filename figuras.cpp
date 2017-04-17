// Pre directiva 
#include <iostream>

using namespace std;

class Figura{
protected:
   double altura_;
   double ancho_;

public:
// Constructor 
   Figura(double altura, double ancho){
      altura_ = altura;
      ancho_ = ancho;
   }

// Destructor, luego hablamos de eso, no le pongas cuidado por ahora (dejarlo)
   virtual ~Figura(){}

  // Tarea: Crear metodos que me devuelvan los valores de altura y ancho

   double mi_altura(){
      return altura_;
   }

   double mi_ancho(){
      return ancho_;
   }

};

class Rectangulo : public Figura{
public:
   Rectangulo(double altura, double ancho) : Figura (altura, ancho){
      altura_ = altura;
      ancho_ = ancho;
   }

// Metodos:

   double area(){
      return (altura_ * ancho_);
   }

   double perimetro(){
      return (2 * altura_) + (2 * ancho_);
   }
};

class Triangulo : public Figura{
public:
   Triangulo(double altura, double ancho) : Figura (altura, ancho){
      altura_ = altura;
      ancho_ = ancho;
   }

// Metodos:

   double area(){
      return (altura_ * ancho_) / 2;
   }
};
int main(){

   Rectangulo rectangulo_grande(4.5,5.5);
   Triangulo triangulo_rectangulo(4.5,5.5);

   cout << "El alto del triangulo rectangulo es de: " << triangulo_rectangulo.mi_altura() << endl;
   cout << "El area del triangulo rectagulo es de: " << triangulo_rectangulo.area() << endl;
   cout << "El area del rectangulo grande es de: " << rectangulo_grande.area() << endl;
   cout << "El perimetro del rectangulo grande es de: " << rectangulo_grande.perimetro() << endl;
   cout << "El area del rectangulo grande es mayor al area del triangulo rectangulo ? " << (rectangulo_grande.area() > triangulo_rectangulo.area()) << endl;

   return 0;

}
