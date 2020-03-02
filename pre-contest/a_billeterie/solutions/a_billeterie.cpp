#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int prix2nde, prix1ere, nbBillets2nde, nbBillets1ere;
	cin >> prix2nde >> prix1ere >> nbBillets2nde >>nbBillets1ere;
	int chiffreAffaire = (prix2nde * nbBillets2nde) + (prix1ere * nbBillets1ere);
	cout << chiffreAffaire << endl;
	return EXIT_SUCCESS;
}
