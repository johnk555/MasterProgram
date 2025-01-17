#include <iostream>
using namespace std;

class polypleyro {
public:
    polypleyro(int plithos_pleyrwn=0);
    ~polypleyro();
    void set_plithos_pleyrwn(int in_plithos_pleyrwn);
    void set_pleura(int in_pleura, double timi_pleuras);
    double get_perimetros() const;

private:
    int plithos_pleyrwn;
    double* pleura;
};
int main() {

    polypleyro pl;
    int plithos_pleyrwn;
    double pleura;

    cout << "Poses pleures theleis na exei to polypleuro? ";
    cin >> plithos_pleyrwn;
    pl.set_plithos_pleyrwn(plithos_pleyrwn);

    for (int i=0 ; i<plithos_pleyrwn ; i++) {
        cout << "Dwse to mikos tis pleuras "<< i+1 <<" : ";
        cin >> pleura;
        pl.set_pleura(i,pleura);
    }

    cout << "H perimetros tou polypleurou einai : " << pl.get_perimetros() << endl;

    return 0;
}
polypleyro::polypleyro(int plithos_pleyrwn) {
    this->plithos_pleyrwn = plithos_pleyrwn;
    pleura = new double[plithos_pleyrwn];
}
polypleyro::~polypleyro() {
    delete[] pleura;
}
void polypleyro::set_plithos_pleyrwn(int in_plithos_pleyrwn) {
    plithos_pleyrwn = in_plithos_pleyrwn;
    delete[] pleura;
    pleura = new double[plithos_pleyrwn];
}
void polypleyro::set_pleura(int in_pleura, double timi_pleuras) {
    pleura[in_pleura] = timi_pleuras;
}

double polypleyro::get_perimetros() const {
    double perimetros = 0;
    for (int i = 0; i < plithos_pleyrwn; i++)
        perimetros += pleura[i];
    return perimetros;
}

