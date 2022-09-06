#include <iostream>

int main(){
    int N, horas, minutos, segundos;

    std::cin >> N;
    horas = N / 3600;
    N = N - (horas * 3600);
    minutos = N / 60;
    N = N - (minutos * 60);
    segundos = N;

    std:: cout << horas << ":" << minutos << ":" << segundos << std::endl;

}