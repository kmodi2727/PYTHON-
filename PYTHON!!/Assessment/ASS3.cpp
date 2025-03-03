#include <iostream>
#include <string>
#include <cmath>
#include <iomanip> // For formatting output

using namespace std;

// Event class to encapsulate event details and calculations
class Event {
private:
    string eventName;
    string firstName;
    string lastName;
    int numberOfGuests;
    int numberOfMinutes;

    const double CostPerHour = 18.50;
    const double CostPerMinute = 0.40;
    const double CostOfDinner = 20.70;

public:
    // Constructor to initialize event details
    Event() : numberOfGuests(0), numberOfMinutes(0) {}

    // Function to get event details from the user
    void getEventDetails() {
        cout << "Enter the name of the event: ";
        getline(cin, eventName); // Use getline to handle spaces in event name

        cout << "Enter your first name: ";
        getline(cin, firstName);

        cout << "Enter your last name: ";
        getline(cin, lastName);

        cout << "Enter the number of guests: ";
        cin >> numberOfGuests;

        cout << "Enter the number of minutes: ";
        cin >> numberOfMinutes;
        cin.ignore(); // Consume the newline character left in the buffer.
    }

    // Function to calculate and display event cost estimation
    void calculateAndDisplayCost() {
        // Calculate number of servers required
        int numberOfServers = ceil(static_cast<double>(numberOfGuests) / 20);

        // Calculate cost for one server
        double cost1 = (numberOfMinutes / 60.0) * CostPerHour;
        double cost2 = (numberOfMinutes % 60) * CostPerMinute;
        double costForOneServer = cost1 + cost2;

        // Calculate total food cost
        double totalFoodCost = numberOfGuests * CostOfDinner;

        // Calculate average cost per person
        double averageCost = totalFoodCost / numberOfGuests;

        // Calculate total cost
        double totalCost = totalFoodCost + (costForOneServer * numberOfServers);

        // Calculate deposit amount
        double depositAmount = totalCost * 0.25;

        // Display cost estimation
        cout << "\n--- Event Cost Estimation ---" << endl;
        cout << "Event Name: " << eventName << endl;
        cout << "Organizer: " << firstName << " " << lastName << endl;
        cout << "Number of Guests: " << numberOfGuests << endl;
        cout << "Number of Servers Required: " << numberOfServers << endl;
        cout << fixed << setprecision(2); // Set output to 2 decimal places.
        cout << "Cost for One Server: Rs" << costForOneServer << endl;
        cout << "Total Food Cost: Rs" << totalFoodCost << endl;
        cout << "Average Cost Per Person: Rs" << averageCost << endl;
        cout << "Total Cost: Rs " << totalCost << endl;
        cout << "Deposit Amount (25%): Rs" << depositAmount << endl;
    }
};

int main() {
    Event event; // Create an event object
    event.getEventDetails(); // Get event details from the user
    event.calculateAndDisplayCost(); // Calculate and display cost estimation

    return 0;
}
