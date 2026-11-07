#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double BMI_CONVERSION_FACTOR = 703.0;
    const double UNDERWEIGHT_LIMIT = 18.5;
    const double OPTIMAL_WEIGHT_LIMIT = 25.0;

    double weight_pounds;
    double height_inches;
    double bmi;

    cout << "Enter weight in pounds: ";
    cin >> weight_pounds;

    cout << "Enter height in inches: ";
    cin >> height_inches;

    if (weight_pounds <= 0.0 || height_inches <= 0.0) {
        cout << "Error: weight and height must be positive." << endl;
        return 1;
    }

    bmi = weight_pounds * BMI_CONVERSION_FACTOR /
          (height_inches * height_inches);

    cout << fixed << setprecision(2);
    cout << "BMI: " << bmi << endl;

    if (bmi < UNDERWEIGHT_LIMIT) {
        cout << "Classification: Underweight" << endl;
    } else if (bmi <= OPTIMAL_WEIGHT_LIMIT) {
        cout << "Classification: Optimal weight" << endl;
    } else {
        cout << "Classification: Overweight" << endl;
    }

    return 0;
}
