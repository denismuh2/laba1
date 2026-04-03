#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double dlina;
    double shirina;
    
    cout << "Vvedite dlinu: ";
    cin >> dlina;
    cout << "Vvedite shirinu: ";
    cin >> shirina;
    
    if (dlina <= 0 || shirina <= 0) {
        cout << "Error: such rectangle does not exist" << endl;
        return 0;
    }
    
    double diagonal = sqrt((dlina * dlina) + (shirina * shirina));
    double P = 2 * (dlina + shirina);
    double S = dlina * shirina;
    
    cout << "Diagonal: " << diagonal << endl;
    cout << "Perimetr: " << P << endl;
    cout << "Ploshad: " << S << endl;
    
    return 0;
}
