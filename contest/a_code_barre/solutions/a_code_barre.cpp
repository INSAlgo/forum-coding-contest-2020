
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    string in;
    cin >> in;
    int r=0;
    int l = in.length();
    for (int i=0; i<l;i++){
        if (in[i]=='-'){
            r++;
        }else if(r>0){
            cout << r << endl;
            r=0;
        }
    }
    cout << r << endl;
}

