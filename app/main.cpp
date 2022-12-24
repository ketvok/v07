/*Implementirajte klasu money koriste�i TDD:

u solution dodajte projekt za unit testove ("Native Unit Test Project")
u unit test projekt dodajte /app/money.h i /app/money.cpp
u UnitTest1.cpp (mo�ete ga preimenovati) dodajte #include "money.h"
napi�ite �to vi�e testova i provjera (Assert-ova) koji pokrivaju barem
funkcionalnost potrebnu za ve� napisani program (u main.cpp)
implementirajte public metode i potrebne operatore klase money
Testovima pokrijte �to vi�e rubnih slu�ajeva (overflow, underflow,
ispis sa 0 kn, ispis sa 0 lp i sli�no).

O�ekivani unos u program je ne�to poput (negativna svota je storno):

+ 6 80
+ 7 20
+ 12 40
- 5 50
+ 10 15

za o�ekivani ispis:

31 kn, 05 lp*/

#include <iostream>
#include "money.h"

using vsite::oop::v7::money;

int main() {
	money total(0);
	char c; money m;
	while (std::cin >> c >> m) {
		if (c == '-')
			total -= m;
		else
			total += m;
	}
	std::cout << total << '\n';
}
