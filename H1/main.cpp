#include <iostream>
#include <iomanip>

using namespace std;

//lisäsin (calcsum), (calcdiv) ja (main) tulostuksiin, jotta näkee terminaalissa selkeästi mistä tulostus tulee

void calcsum (int num1, int num2){
    int result = num1 + num2;
    cout << "Summa on: " << result << " (calcsum)" << endl;
}

void calcdiv (int num1, int num2){
    if (num2 == 0){
        cout << "Error: ei voi jakaa 0:lla" << endl;
    }else {
        float result = num1 / num2;
        cout << "Osamäärä on: "<< fixed << setprecision(2) << result << " (calcdiv)" << endl;
    }
}

int retsum (int num1, int num2){
    int result = num1 + num2;
    return result;
}

float retdiv (int num1, int num2){
    if (num2 == 0){
        cout << "Error: ei voi jakaa 0:lla" << endl;
        return 0.0f;
    }else {
        float result = static_cast<float>(num1) / num2;
        return result;
    }
}

int main()
{
    int a;
    int b;

    cout << "Syötä ensimmäinen numero" << endl;
    cin >> a;
    cout << "Syötä toinen numero" << endl;
    cin >> b;

    calcsum(a,b);
    calcdiv(a,b);

    int sum = retsum(a,b);
    float div = retdiv(a,b);

    cout << "Summa on: " << sum << " (main)" << endl;
    if (div != 0.0){
        cout << "Osamäärä on: "<< fixed << setprecision(2) << div << " (main)" << endl;
    }

    // Lisäsin nämä, jotta ehtii nähdä vastaukset ennen kuin terminaali sulkeutuu, jos ei avaa exeä terminaalin kautta
    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();

    return 0;
}
