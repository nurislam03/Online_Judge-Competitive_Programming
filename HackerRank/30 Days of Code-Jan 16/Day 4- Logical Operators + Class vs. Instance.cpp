using namespace std;
#include <iostream>

int a;
class Person{
public:
   int age ;
   Person(int initial_Age);
   void amIOld();
   void yearPasses();
};
Person::Person(int initial_Age){
  // Add some more code to run some checks on initial_Age
   // initial_Age = age;
   age = initial_Age;
    if(initial_Age<0){
            age = 0;
        cout<<"This person is not valid, setting age to 0."<<endl;
    }

}
void Person::amIOld(){
    // Do some computations in here and print out the correct statement to the console
    a=age;
    cout<<a<<endl;
    if(a<13 && a>=0){
    cout<<"You are young."<<endl;
    }
    else if(a>=13 && a<18){
        cout<<"You are a teenager."<<endl;
    }
    else
        cout<<"You are old."<<endl;
}


void Person::yearPasses(){
  // Increment the age of the person in here
    a++;

}


int main(){
    int T,age;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>age;
        Person p(age);
        p.amIOld();
        for(int j=0;j<3;j++)
        {
            p.yearPasses();

        }
        p.amIOld();
        cout<<"\n";
    }
    return 0;
}
