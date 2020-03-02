// SolutionC3Forum.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int L, C;
	cin >> L >> C;
	int* maxIntimidation = new int[C];
	for (int i = 0; i < C; i++) {
		maxIntimidation[i] = 0;
	}
	for (int i = 0; i < L; i++) {
		for (int j = 0; j < C; j++) {
			int localIntimidation;
			cin >> localIntimidation;
			if (localIntimidation > maxIntimidation[j]) {
				maxIntimidation[j] = localIntimidation;
			}
		}
	}
	vector< int > columnMaxes;
	for (int i = 0; i < C; i++) {
		columnMaxes.push_back(maxIntimidation[i]);
	}
	delete[] maxIntimidation;
	sort(columnMaxes.begin(), columnMaxes.end());
	vector<int> potentials;
	int H;
	cin >> H;
	for (int i = 0; i < H; i++) {
		int i_h;
		cin >> i_h;
		potentials.push_back(i_h);
	}
	if (H < C) {
		cout << "NON" << endl;
	}
	else {
		sort(potentials.begin(), potentials.end());
		bool success = true;
		for (int i = 0; i < C; i++) {
			if (potentials[i + (H - C)] < columnMaxes[i]) {
				success = false;
				break;
			}
		}
		if (success) {
			cout << "OUI" << endl;
		}
		else {
			cout << "NON" << endl;
		}
	}
	return EXIT_SUCCESS;
}
