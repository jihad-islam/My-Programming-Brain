#include <iostream>
#include <vector>
using namespace std;

class FirstComeFirstServe
{
public:
    int id;
    int arrivalTime;
    int burstTime;
    int waitingTime;
    int turnAroundTime;

    FirstComeFirstServe(int id, int arrivalTime, int burstTime)
        : id(id), arrivalTime(arrivalTime), burstTime(burstTime), waitingTime(0), turnAroundTime(0) {}

    void calculateWaitingTime(FirstComeFirstServe &prevProcess)
    {
        waitingTime = prevProcess.waitingTime + prevProcess.burstTime;
    }

    void calculateTurnAroundTime()
    {
        turnAroundTime = waitingTime + burstTime;
    }

    void display() const
    {
        cout << "   " << id << "\t\t" << burstTime << "\t    "
             << waitingTime << "\t\t  " << turnAroundTime << endl;
    }
};

void findAverageTime(vector<FirstComeFirstServe> &v)
{
    int totalWaitingTime = 0, totalTurnAroundTime = 0;

    // Calculate waiting time and turnaround time for each process
    for (int i = 1; i < v.size(); ++i)
    {
        v[i].calculateWaitingTime(v[i - 1]);
    }

    for (auto &x : v)
    {
        x.calculateTurnAroundTime();
    }

    cout << "Processes  Burst time  Waiting time  Turnaround time\n";

    // Calculate total waiting time and total turnaround time
    for (const auto &x : v)
    {
        totalWaitingTime += x.waitingTime;
        totalTurnAroundTime += x.turnAroundTime;
        x.display();
    }

    cout << "Average waiting time = " << (float)totalWaitingTime / v.size() << endl;
    cout << "Average turnaround time = " << (float)totalTurnAroundTime / v.size() << endl;
}

int main()
{
    vector<FirstComeFirstServe> v = {
        FirstComeFirstServe(1, 3, 1),
        FirstComeFirstServe(2, 4, 5),
        FirstComeFirstServe(3, 0, 2),
        FirstComeFirstServe(4, 3, 7),
        FirstComeFirstServe(5, 5, 5)};

    findAverageTime(v);

    return 0;
}
