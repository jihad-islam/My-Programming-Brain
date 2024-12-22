#include <iostream>
#include <vector>
using namespace std;

class Process
{
public:
    int id;
    int arrivalTime;
    int burstTime;
    int waitingTime;
    int turnAroundTime;

    // Constructor
    Process(int id, int arrivalTime, int burstTime)
        : id(id), arrivalTime(arrivalTime), burstTime(burstTime), waitingTime(0), turnAroundTime(0) {}

    // Method to calculate waiting time based on the previous process
    void calculateWaitingTime(const Process &prevProcess)
    {
        waitingTime = prevProcess.burstTime + prevProcess.arrivalTime + prevProcess.waitingTime - arrivalTime;
        if (waitingTime < 0)
            waitingTime = 0; // Waiting time cannot be negative
    }
};

int main()
{
    vector<Process> v = {
        Process(1, 0, 4),
        Process(2, 1, 3),
        Process(3, 2, 1)};

    // right for loop
    for (int i = 1; i < v.size(); ++i)
    {
        v[i].calculateWaitingTime(v[i - 1]);
    }

    // wrong for loop
    // for (int i = 0; i < v.size(); i++)
    // {
    //     v[i].calculateWaitingTime(v[i]);
    // }

    for (const auto &x : v)
    {
        cout << "Process ID: " << x.id
             << ", Waiting Time: " << x.waitingTime << endl;
    }

    return 0;
}
