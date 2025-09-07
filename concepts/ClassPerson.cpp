#include <iostream>
#include <iomanip>

using namespace std;

class clsPerson{

private:

int _Id;
string _FirstName;
string _LastName;
string _Email;
string _Phone;

public :


clsPerson(int Id,string FirstName,string LastName, string Email, string Phone){
_Id=Id;
_FirstName=FirstName;
_LastName=LastName;
_Email=Email;
_Phone=Phone;
}

string GetFullName(){
return _FirstName +" "+_LastName;
}


int GetId(){
return _Id;

}


void SetFirstName(string FirstName){
 _FirstName=FirstName;
}

string GetFirstName(){
return _FirstName;

}


void SetLastName(string LastName){
 
    _LastName=LastName;
}

string GetLastName(){
return _LastName;

}


void SetEmail(string Email){
 _Email=Email;
}

string GetEmail(){
return _Email;

}


void SetPhone(string Phone){
 
    _Phone=Phone;
}

string GetPhone(){
return _Phone;

}


void SendEmail(string Subject ,string Body){
cout<<"The Follwing Massage Sent Successfully To Email "<<_Email<<'\n';
cout<<"Subject: "<<Subject<<'\n';
cout<<"Body: "<<Body<<'\n';
}
void SendSMS(string SMS){
cout<<"The Follwing SMS Sent Successfully To Phone "<<_Phone<<'\n';
cout<<"SMS : "<<SMS<<'\n';
}

void Print(){


cout<<"======================================\n";
cout<<left<<setw(19)<<"Id :"<<setw(19)<<_Id<<endl;
cout<<left<<setw(19)<<"FirstName : "<<setw(19)<<_FirstName<<endl;
cout<<left<<setw(19)<<"Last Name : "<<setw(19)<<_LastName<<endl;
cout<<left<<setw(19)<<"Full Name : "<<setw(19)<<GetFullName()<<endl;
cout<<left<<setw(19)<<"Email : "<<setw(19)<<_Email<<endl;
cout<<left<<setw(19)<<"Phone : "<<setw(19)<<_Phone<<endl;
cout<<"======================================\n";
}


};

int main (){

clsPerson Person1(10,"Akram","Bahy" , "akrambahy0@gmail.com","01212524827");

Person1.Print();

Person1.SendEmail("Hi","How Are You");

}
