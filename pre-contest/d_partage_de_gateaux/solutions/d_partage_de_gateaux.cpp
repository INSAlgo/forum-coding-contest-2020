#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

vector<vector<int>> Amis;
vector<int> nbPartsAmi;
vector<int> partsRestanteAmi;
int G,A,P;
int partsRestanteTotal;

bool backtrack(int indexAmi, int nbAmisTotal)
{
	if(indexAmi == nbAmisTotal){
		return true;
	}
	
	bool res = false;
	for(vector<int>::const_iterator numGateau = Amis[indexAmi].cbegin();
		numGateau != Amis[indexAmi].cend() && !res;++numGateau)
	{
		partsRestanteAmi[*numGateau] -= nbPartsAmi[indexAmi];
		partsRestanteTotal -= nbPartsAmi[indexAmi];
		if(partsRestanteAmi[*numGateau] >= 0 && partsRestanteTotal >= (nbAmisTotal - indexAmi -1) ){
			res = backtrack(indexAmi+1,nbAmisTotal);
		}
		partsRestanteAmi[*numGateau] += nbPartsAmi[indexAmi];
		partsRestanteTotal += nbPartsAmi[indexAmi];
	}
	return res;
}

int main(int argc, char* argv[])
{
	cin >> G >> A >> P;
	
	Amis = vector<vector<int>>(A);
	nbPartsAmi = vector<int>(A);
	int Gi,Pi,numGateau;
	for(int i=0;i<A;++i)
	{
		cin >> Gi >> Pi;
		nbPartsAmi[i] = Gi;
		Amis[i] = vector<int>(Pi);
		for(int j=0;j<Pi;++j)
		{
			cin >> numGateau;
			Amis[i][j] = numGateau-1;
		}
	}
	
	partsRestanteAmi = vector<int>(G,P);
	partsRestanteTotal = G*P;
	if(backtrack(0,A))
	{
		cout << "OUI" << endl;
	}
	else
	{
		cout << "NON" << endl;
	}
	
	return 0;
}
