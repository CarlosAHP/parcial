#include <iostream>

class Carro{
    private:
        int llave;
        int numeroSerie;
        bool acceso;
        int velocidad;;

    public:
        //Constructor
        Carro(int _llave, int _numeroSerie);
        //Metodos
        void encender(int _llave);
        void acelerar();
        void frenar();
        std::string marca;
        std::string modelo;
    

};
//Constructor
Carro::Carro(int _llave, int _numeroSerie){
    llave = _llave;
    numeroSerie = _numeroSerie;
    acceso = false;
    velocidad = 0;
}

void Carro::encender(int _llave){
    if(_llave == llave){
        acceso = true;
        std::cout << "El carro se ha encendido" << std::endl;
    }else
        std::cout << "La llave no es correcta" << std::endl;
}

void Carro::acelerar(){
    if (acceso==true){
        velocidad= velocidad+10;
        std::cout << "El carro se ha acelerado" << std::endl;
    }
}





int main(int argc, char const *argv[])
{
    system ("pause");
    return 0;
}


