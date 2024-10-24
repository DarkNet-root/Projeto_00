
#include <iostream>

//Celsius para Fahrenheit
double celsFahr (double C){
  double F= (C * 9/5) +32; 
  return F;
}
//Celsius para Kelvin
double celsKelv (double C){
    double K = (C + 273.15);//Formula
    return K;
}

//Fahrenheit para Celsius
double FahrCels (double F){
  double C = (F - 32) /1.8;//Formula 
  return C;
}

//Fahrenheit para Kelvin
double Fahrkelv(double F){
   double K = (F + 459.67) / 1.8;//Formula
   return K;
}

//Kelvin para celcius
double KelvCel (double K){
    double C = K - 273.15;//Formula
    return C;
}

//Kelvin para Fahrenheit
double KelvFahr (double K){
    double F = K * 1.8 - 459.67;
    return F;
}

//Mostrar_MENU de Opcao 
int mostrarMenu() {
    int op;
    std::cout<<"\nOPCOES DE CONVERSOES DE TEMPERATURA."<<std::endl;
    std::cout << "1. Converter Grau Celsius para Fahrenheit" << std::endl;
    std::cout << "2. Converter Grau Celsius para Kelvin" << std::endl;
    std::cout << "3. Converter Grau Fahrenheit para Celsius" << std::endl;
    std::cout << "4. Converter Grau Fahrenheit para Kelvin" << std::endl;
    std::cout << "5. Converter Grau Kelvin para Celsius" << std::endl;
    std::cout << "6. Converter Grau Kelvin para Fahrenheit" << std::endl;
    std::cout << "7. Sair\n"<< std::endl;
    std::cout << "Escolha uma opcao: ";
    std::cin >> op;
    return op;
}

int main(){
  
  //Defindo Variaveis
  double fah;
  double cel;
  double kev;
  int opcao;
  
  std::cout<<" TEMPERATURAS 'Fahrenheit','Celsius' e 'Kelvin'\n"<<std::endl;
  
  do{
        opcao = mostrarMenu();
        switch (opcao) {
            case 1:
                std::cout << "\nDigite o valor em Celsius: ";
                std::cin >> cel;
                std::cout << "A conversao do valor Celsius para Fahrenheit e: " << celsFahr(cel) << "  F\n\n";
                break;
            case 2:
                std::cout << "\nDigite o valor em Celsius: \n";
                std::cin >> cel;
                std::cout << "A conversso do valor Celsius para Kelven e: " << celsKelv(cel)<< " K\n\n";
                break;
            case 3:
                std::cout << "\nDigite o valor em Fahrenheit: ";
                std::cin >> fah;
                std::cout << "A conversao do valor Fahrenheit para Celsius e: " << FahrCels(fah) << " C\n\n";
                break;
            case 4:
                std::cout << "\nDigite o valor em Fahrenheit: ";
                std::cin >> fah;
                std::cout << "A conversao do valor Fahrenheit para Kelvin e: " << Fahrkelv(fah) << " k\n\n";
                break;
            case 5:
                std::cout << "\nDigite o valor em Kelvin: ";
                std::cin >> kev;
                std::cout << "A conversao do Kelvin para Celsius e: " << KelvCel(kev) << " C\n\n";
                break;
            case 6:
                std::cout << "\nDigite o valor em Kelvin: ";
                std::cin >> kev;
                std::cout << "A conversao do valor Kelvin para Fahrenheit e: " << KelvFahr(kev) << " F\n\n";
                break;
            case 7:
                 std::cout << "Saindo do programa..." << std::endl;
                break;
            default:
                std::cout << "Opsss!!! \n   Opcao invalida, Tente novamente." << std::endl;
                break;
        }
    } while (opcao != 7);

    return 0;
}