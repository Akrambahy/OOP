#include <iostream>
#include <iomanip>

using namespace std;

class clsPerson
{

private:
    int _Id;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;

public:
    clsPerson(int Id, string FirstName, string LastName, string Email, string Phone)
    {
        _Id = Id;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

    string GetFullName()
    {
        return _FirstName + " " + _LastName;
    }

    int GetId()
    {
        return _Id;
    }

    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    string GetFirstName()
    {
        return _FirstName;
    }

    void SetLastName(string LastName)
    {

        _LastName = LastName;
    }

    string GetLastName()
    {
        return _LastName;
    }

    void SetEmail(string Email)
    {
        _Email = Email;
    }

    string GetEmail()
    {
        return _Email;
    }

    void SetPhone(string Phone)
    {

        _Phone = Phone;
    }

    string GetPhone()
    {
        return _Phone;
    }

    void SendEmail(string Subject, string Body)
    {
        cout << "The Follwing Massage Sent Successfully To Email " << _Email << '\n';
        cout << "Subject: " << Subject << '\n';
        cout << "Body: " << Body << '\n';
    }
    void SendSMS(string SMS)
    {
        cout << "The Follwing SMS Sent Successfully To Phone " << _Phone << '\n';
        cout << "SMS : " << SMS << '\n';
    }

    void Print()
    {
        cout << "============Person Info .=============\n";
        cout << "======================================\n";
        cout << left << setw(19) << "Id :" << setw(19) << _Id << endl;
        cout << left << setw(19) << "FirstName : " << setw(19) << _FirstName << endl;
        cout << left << setw(19) << "Last Name : " << setw(19) << _LastName << endl;
        cout << left << setw(19) << "Full Name : " << setw(19) << GetFullName() << endl;
        cout << left << setw(19) << "Email : " << setw(19) << _Email << endl;
        cout << left << setw(19) << "Phone : " << setw(19) << _Phone << endl;
        cout << "======================================\n";
    }
};

class clsEmployee : public clsPerson
{

private:
    double _Salary;
    string _Department;

public:
    clsEmployee(int Id, string FirstName, string LastName, string Email, string Phone, double Salary, string Department) : clsPerson(Id, FirstName, LastName, Email, Phone)
    {
        _Salary = Salary;
        _Department = Department;
    }
    
void Print()
    {

        cout << "============Employee Info .===========\n";
        cout << "======================================\n";
        cout << left << setw(19) << "Id :" << setw(19) << GetId() << endl;
        cout << left << setw(19) << "FirstName : " << setw(19) << GetFirstName() << endl;
        cout << left << setw(19) << "Last Name : " << setw(19) <<GetLastName() << endl;
        cout << left << setw(19) << "Full Name : " << setw(19) << GetFullName() << endl;
        cout << left << setw(19) << "Email : " << setw(19) <<GetEmail() << endl;
        cout << left << setw(19) << "Phone : " << setw(19) << GetPhone()<< endl;
        cout << left << setw(19) << "Salary : " << setw(19) << _Salary << endl;
        cout << left << setw(19) << "Department : " << setw(19) << _Department << endl;
        cout << "======================================\n";
    }

};

int main()
{

    clsEmployee Employee1(10, "Akram", "Bahy", "akrambahy0@gmail.com", "01212524827",3000,"Enginnering");

    Employee1.Print();
}
