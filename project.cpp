
/*

#include <iostream>
int main()
{
	int rozmiar;
	std::cout << "Podaj rozmiar kwadratu ";
	std::cin >> rozmiar; // wejsciowa wartosc podana przez klienta

	if (rozmiar <= 0) {
		std::cout << "Wartość musi być dodatnia !!!";
		return 1;
	}
	
	for (int i = 0; i < rozmiar; i++) {           //zastosowanie petli 
		for (int j = 0; j < rozmiar; j++) {       // kod do generowania "X" w kolumnie 
			std::cout << " X ";
			
		}

		std::cout << std::endl;

	}

	return 0;

	
}
*/


#include <iostream>
int main() {

	int wysokosc;

	std::cout << " Prosze podac wysokosc klepsydry ";
	std::cin >> wysokosc;
 
	if (wysokosc % 2==0 || wysokosc < 3) {

		std::cout << " Wysokosc musi byc nie parzysta i wieksza od 3";
		return 1;
	}
	
	int srodek = wysokosc / 2; 
	
	for (int i = 0; i < srodek; i++) {
		for (int j = 0; j < wysokosc; j++) {
			if (j >= i && j < wysokosc - i) {
				std::cout << "X ";
			}
			else {
				std::cout << "  ";
			}
		}
		std::cout << std::endl;
	}

	//srodkowy rzad 
	for (int i = 0; i < wysokosc; i++) {
		if (i == srodek) {
			std::cout << "X ";
		}
		else {
			std::cout << "  ";
		}
	}
		std::cout << std::endl;

		//dolna czesc
		for (int i = srodek - 1; i >= 0; i--) {
			  for (int j = 0; j < wysokosc; j++) {
					if (j >= i && j < wysokosc - i) {
						std::cout << "X ";
					}
					else {
						std::cout << "  ";
					}
			}
			std::cout << std::endl;
		}
		return 0;
}


