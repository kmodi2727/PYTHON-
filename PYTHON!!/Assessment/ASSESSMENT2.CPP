#include <iostream>
#include <string>

using namespace std;

class Event {
public:
    Event(const string& name, const string& customerName, int numGuests, int duration) 
        : eventName(name), customerName(customerName), numGuests(numGuests), duration(duration) {}

    double calculateCost() {
        // Calculate cost based on logic (replace with actual calculations)
        double costPerGuest = 20.70; // Example cost per guest
        double serverCost = 30.00; // Example server cost
        int numServers = 5; // Example number of servers

        double foodCost = numGuests * costPerGuest;
        double totalCost = foodCost + (serverCost * numServers);

        return totalCost;
    }

    double calculateDeposit() {
        double totalCost = calculateCost();
        double depositPercentage = 0.25; // 25% deposit

        return totalCost * depositPercentage;
    }

    void displayEstimate() {
        cout << "Event estimate for " << customerName << ":\n";
        cout << "Number of Servers: " << 5 << "\n";
        cout << "Cost for Servers: " << 5 * 30.00 << "\n"; // 5 servers at $30 each
        cout << "Cost for Food: " << numGuests * 20.70 << "\n";
        cout << "Total cost is: " << calculateCost() << "\n";
        cout << "Please deposit a 25% deposit to reserve the event\n";
        cout << "The deposit needed is: " << calculateDeposit() << "\n";
    }

private:
    string eventName;
    string customerName;
    int numGuests;
    int duration;
};

int main() {
    string eventName, customerName;
    int numGuests, duration;

    cout << "Enter the name of the event: ";
    getline(cin, eventName);

    cout << "Enter the customer's first and last name: ";
    getline(cin, customerName);

    cout << "Enter the number of guests: ";
    cin >> numGuests;

    cout << "Enter the number of minutes in the event: ";
    cin >> duration;

    Event event(eventName, customerName, numGuests, duration);
    event.displayEstimate();

    return 0;
}
