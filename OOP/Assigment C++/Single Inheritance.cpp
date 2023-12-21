#include <iostream>
using namespace std;

class Cricketer {
protected:
    std::string name;
    int age;

public:
    Cricketer(const std::string& playerName, int playerAge)
        : name(playerName), age(playerAge) {}

    void inputData() {
        std::cout << "Enter the cricketer's name: ";
        std::cin >> name;
        std::cout << "Enter the cricketer's age: ";
        std::cin >> age;
    }

    void displayData() {
        std::cout << "Cricketer's Name: " << name << std::endl;
        std::cout << "Cricketer's Age: " << age << std::endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    Batsman(const std::string& playerName, int playerAge)
        : Cricketer(playerName, playerAge) {
        totalRuns = 0;
        averageRuns = 0.0;
        bestPerformance = 0;
    }

    void inputData() {
        Cricketer::inputData();
        std::cout << "Enter the total runs: ";
        std::cin >> totalRuns;
        std::cout << "Enter the best performance: ";
        std::cin >> bestPerformance;
    }

    void calculateAverageRuns() {
        averageRuns = static_cast<float>(totalRuns) / 5;
    }

    void displayData() {
        Cricketer::displayData();
        std::cout << "Total Runs: " << totalRuns << std::endl;
        std::cout << "Average Runs: " << averageRuns << std::endl;
        std::cout << "Best Performance: " << bestPerformance << std::endl;
    }
};

int main() {
    Batsman batsman("John", 25);
    batsman.inputData();
    batsman.calculateAverageRuns();
    batsman.displayData();

    return 0;
}

