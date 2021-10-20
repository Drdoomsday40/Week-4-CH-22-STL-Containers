#include <iostream>
#include <queue>
#include <string>
using namespace std;

class Patient {
public:
	Patient(const string& name, int priority) {
		this->name = name;
		this->priority = priority;

	}
	bool operator<(const Patient& secondPatient) const {
		return this->priority < secondPatient.priority;
	}
	bool operator>(const Patient& secondPatient) const {
		return this->priority > secondPatient.priority;
	}
	string getName() { return name; }
	int getPriority() { return priority; }
private:
	string name;
	int priority;
};

int main() {
	priority_queue<Patient> patientQueue;
	patientQueue.push(Patient("John", 2));
	patientQueue.push(Patient("Jim", 1));
	patientQueue.push(Patient("Tim", 5));
	patientQueue.push(Patient("Cindy", 7));

	while (patientQueue.size() > 0) {
		Patient element = patientQueue.top();
		patientQueue.pop();
		cout << element.getName() << " (priority: " << element.getPriority() << ") " << endl;
	}
	system("pause");
	return 0;
}