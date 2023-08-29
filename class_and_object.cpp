#include<bits/stdc++.h>
using namespace std;
class HumanBeing{
    private:
        string n;
    public:
    int age;
    string name;
    HumanBeing(){
        cout<<"Constructor called"<<endl;
    }
    ~HumanBeing(){
        cout<<"Destructor called";
    }
    HumanBeing(HumanBeing &kiran){
        name=kiran.name;
        age=kiran.age;
    }
   void intro();
   void display(){
        cout<<name<<" "<<age<<endl;

   }
    
};
void HumanBeing:: intro(){
    cout<<"Hi i am "<<HumanBeing::name<<endl;
}
int main(){
    HumanBeing obj;
    obj.name = "Kiran_Chaitu";
    obj.age =18;
    obj.display();
    obj.intro();
}