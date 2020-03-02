#include <iostream>

using namespace std;

int main(int argc, char* argv[]){

    int n, h, c;
    cin >> n;
    cin >> h;
    cin >> c;

	// --- uncomment below for debug ---
    // cerr << "N : " << n << ", H : " << h << ", C : " << c << endl;

    int currH = 0, currC = 0;
    char car;

    // get out of the loop as soon as there are too many requests for the same type of seat
    for (int i = 0; (i < n) && (currC <= c) && (currH <= h); ++i){
        cin >> car;
		// --- uncomment below for debug ---
        // cerr << "Car lu : " << car << endl;
        if (car == 'C'){
            ++currC;
        }else if (car == 'H'){
            ++currH;
        }
    }

    if (currC > c || currH > h){
        cout << "NON" << endl;
    }else{
        cout << "OUI" << endl;
    }

    return 0;
}
