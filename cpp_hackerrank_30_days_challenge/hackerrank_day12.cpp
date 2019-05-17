#include <iostream>
#include <vector>

using namespace std;


class Person{
protected:
    string firstName;
    string lastName;
    int id;
public:
    Person(string firstName, string lastName, int identification){
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson(){
        cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
    }
    
};

class Student :  public Person{
private:
    string firstName_;
    string lastName_;
    int id_;
    vector<int> testScores_;
public:
    /*
     *   Class Constructor
     *
     *   Parameters:
     *   firstName - A string denoting the Person's first name.
     *   lastName - A string denoting the Person's last name.
     *   id - An integer denoting the Person's ID number.
     *   scores - An array of integers denoting the Person's test scores.
     */
    Student(string firstname, string lastname, int id, vector<int> scores) : Person(firstname, lastname, id)
    {
        this->firstName_ = firstName;
        this->lastName_ = lastName;
        this->id_ = id;
        this->testScores_ = scores;
        //  : firstName_(firstname), lastName_(lastname), id_(id),
        //  testScores_(scores)
    }
    
    /*
     *   Function Name: calculate
     *   Return: A character denoting the grade.
     */
    char calculate()
    {
        int sum = 0;
        double average = 0;
        for (int i=0; i < testScores_.size(); ++i)
            sum += testScores_[i];
        average = sum / testScores_.size();
        if ((average <= 100) && (average >= 90))
            return 'O';
        else if ((average < 90) && (average >= 80))
            return 'E';
        else if ((average < 80) && (average >= 70))
            return 'A';
        else if ((average < 70) && (average >= 55))
            return 'P';
        else if ((average < 55) && (average >= 40))
            return 'D';
        else if (average < 40)
            return 'T';
        else
            return 0;
    }
};

int main() {
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for(int i = 0; i < numScores; i++){
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student* s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}
