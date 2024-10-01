#include <iostream> 
using namespace std;

int main()
{
    double tr = 500, tb = 15, q = 0.15, d = 0.1, g = 9.8;

    for (d; d <= 0.3; d += 0.025) {
        double Nu;
        long double Gr = ((g * pow(d, 3)) / (pow(q, 2))) * ((tr - tb) / (tb + 273));
        Gr = Gr * pow(10, 9);

        if (Gr < pow(10, 9)) {
            Nu = 0.76 * pow(Gr, 0.22);
        }
        else {
            Nu = 0.15 * pow(Gr, 0.35);
        }

        cout << Gr << "\t" << Nu << endl;
    }

    return 0;
}
