#include <iostream>

using namespace std;

class Productos{
protected:
   string Plaza_;
   int Precio_;
   string Lineas_;
   int Unidades_;
   int Referencia_;

public:
   Productos(string Plaza, int Precio, string Lineas, int Unidades, int Referencia){
      Plaza_ = Plaza;
      Precio_ = Precio;
      Lineas_ = Lineas;
      Unidades_ = Unidades;
      Referencia_ = Referencia;
   }

// Metodos:

   string mi_Plaza(){
      return Plaza_;
   }

   int mi_Precio(){
      return Precio_;
   }

   string mi_Lineas(){
      return Lineas_;
   }

   int mis_Unidades(){
      return Unidades_;
   }

   int mi_Referencia(){
      return Referencia_;
   }
};

class Calzado : public Productos{
private:
   string Estilo_;
   string Categoria_;

public: 
   Calzado(string Estilo, string Categoria, string Plaza, int Precio, string Lineas, int Unidades, int Referencia) : Productos (Plaza, Precio, Lineas, Unidades, Referencia){
      Estilo_ = Estilo;
      Categoria_ = Categoria;
   }

// Metodos:

   string mi_Estilo(){
      return Estilo_;
   }

   string mi_Categoria(){
      return Categoria_;
   }

};

class Camiseta : public Productos{
private:
   string Silueta_;
   string Cuello_;

public: 
   Camiseta(string Silueta, string Cuello, string Plaza, int Precio, string Lineas, int Unidades, int Referencia) : Productos (Plaza, Precio, Lineas, Unidades, Referencia){
      
      Silueta_ = Silueta;
      Cuello_ = Cuello;
   }

// Metodos:

   string mi_Silueta(){
      return Silueta_;
   }

   string mi_Cuello(){
      return Cuello_;
   }
};

class Pantalones : public Productos {
private:
   int Silueta_;
   string Categoria_;

public:
   Pantalones(int Silueta, string Categoria, string Plaza, int Precio, string Lineas, int Unidades, int Referencia) : Productos (Plaza, Precio, Lineas, Unidades, Referencia){
   
      Silueta_ = Silueta;
      Categoria_ = Categoria;
   }

// Metodos:

   int mi_Silueta(){
      return Silueta_;
   }

   string mi_Categoria(){
      return Categoria_;
   }
};

int main(){

   Calzado Calzado_formal("amarrar", "formal", "Santa fe", 89900, "Calzado", 65, 5310);
   Calzado Calzado_casual("bota", "casual", "Santa fe", 69900, "Calzado", 90, 5015);
   Camiseta Polo("basica", "cuello v", "Fontanar", 51900, "Camsita Polo", 200, 3839);
   Camiseta tshirt("estampada", "slim fit", "Fontanar", 45000, "Camiseta tshirt", 150, 3815);
   Pantalones Jeans(801, "sport", "Galerias", 99000, "Jeans", 180, 1056);
   Pantalones Formal(701, "formal", "Galerias", 112900, "Pantalon",120, 1045);

   cout << "El tipo de Calzado que se vendio hoy fue: " << Calzado_formal.mi_Categoria() << endl;
   cout << "El cuello de la Polo que se vendio es tipo: " << Polo.mi_Cuello() << endl;
   cout << "Donde se vendio el Calzado casual: " << Calzado_casual.mi_Plaza() << endl;
   cout << "Cual es el precio del pantalon Formal? " << Formal.mi_Precio() << endl;
   cout << "La referencia de la camiseta tshirt es: " << tshirt.mi_Referencia() << endl;

   return 0;

}
