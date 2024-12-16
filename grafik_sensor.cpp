#include <iostream>
#include <vector>
using namespace std;

void displayStarGraph(const vector<int>& data) {
    cout << "\nGrafik Data Sensor:\n";
    for (size_t i = 0; i < data.size(); i++) {
        cout << "Jari " << i + 1 << ": ";
        for (int j = 0; j < data[i] / 5; ++j) {
            cout << "*";
        }
        cout << " (" << data[i] << ")\n";
    }
}

int main() {
    vector<int> sensorData = {50, 75, 100, 25, 60};
    displayStarGraph(sensorData);

    return 0;
}
