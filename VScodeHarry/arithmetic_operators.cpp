# include <iostream>
using namespace std;
string op;
int firstvalue, secondvalue;
void print(){
    cout<<"\n\nWhich operator do you wonna use\n\t (+, -, *, /, %)"<<endl;
    cin>>op;
    if (op != "+" && op != "-" && op != "*" && op != "/" && op != "%"){
        cout<< "Wrong Input";
        exit(0);
        }
    cout<<"\n\nEnter First Value: ";
    cin>>firstvalue;
    cout<<"\nEnter Second Value: ";
    cin>>secondvalue;
}

void sum(){
    if(op == "+")
    cout<<firstvalue<< " + "<< secondvalue<< " = "<< firstvalue + secondvalue;

    else if(op == "-")
    cout<<firstvalue<< " - "<< secondvalue<< " = "<< firstvalue - secondvalue;

    else if(op == "*")
    cout<<firstvalue<< " X "<< secondvalue<< " = "<< firstvalue * secondvalue;

    else if(op == "/"){
        if (secondvalue==0)
        {
            cout<<"\nDivision by zero is not allowed\n";
        }
        
        else
        {cout<<firstvalue<< " / "<< secondvalue<< " = "<< firstvalue / secondvalue;}
    }
    else if(op == "%"){
        if (secondvalue==0)
        cout<<"\nDivision by zero is not allowed";
    
        else
        cout<<firstvalue<< " % "<< secondvalue<< " = "<< firstvalue % secondvalue;
    }

}
int main(){
    int a = 10;
    cout<<endl<<"Value of a++ : "<< a++; //10 then 11
    cout<<endl<<"Value of ++a : "<< ++a; //12
    cout<<endl<<"Value of a-- : "<< a--; //12
    cout<<endl<<"Value of --a : "<< --a; //10
    print();
    sum();
}
