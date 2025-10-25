#include <iostream>

using namespace std;


class clsCalculator{

    private :

    int _Value=0;
    int _Result=0;
    string _Operation;

    public :

void Add(int Value){
    _Value=Value;
    _Operation="Adding";
    _Result+=Value;
}
void Subtact(int Value){
    _Value=Value;
    _Operation="Subtracting";
    _Result-=Value;
}

void Divide(int Value){
    if(Value==0) Value=1;
    _Value=Value;
    _Operation="Dividing";
    _Result/=Value;
}

void Multiply(int Value){
    _Value=Value;
    _Operation="Multipling";
    _Result*=Value;
}

void Clear(){
    _Value=0;
    _Operation="None";
    _Result=0;
}

void PrintResult(){
cout<<"Result After "<<_Operation<<" "<<_Value<<" Is : "<<_Result<<endl;
}

};
int main (){
clsCalculator Calculetor1;
Calculetor1.Add(10);
Calculetor1.PrintResult();

}
