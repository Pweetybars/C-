#include<iostream>
using namespace std;

class AbstractEmployee {
    virtual void AskForPromotion () = 0;
};

class Employee : AbstractEmployee {
private : 
    string Company; 
    int Age; 
    string Role; 
protected : 
    string Name; 
public : 
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setRole(string role){
        Role = role;
    }
    string getRole(){
        return Role;
    }
    void setAge(int age){
        Age = age;
    }
    int getAge(){
        return Age;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }

    void IntroduceYourself(){
        cout << "Name - "<< Name << endl;
        cout << "Age - " << Age <<endl;
        cout << "Company - "<< Company << endl;
        cout << "Role - "<< Role <<endl; 
    }
    Employee (string name, string company, int age, string role){
        Name = name;
        Age = age;
        Company = company;
        Role = role; 
    }
    void AskForPromotion(){
        if (Age >= 30)
        cout << Name << " You got Promoted"<<endl;
        else 
        cout << Name << " Good luck"<<endl;
    }
    virtual void Work(){
        cout << Name << "is checking Email, task BackLog, performing task"<<endl;
    }
};

class Developer : public Employee {
    public : 
    string FavoriteProgrammingLanguage; 
    Developer (string name, string company, int age, string favoriteProgrammingLanguage, string role)
        : Employee(name, company, age, role)
    {
        FavoriteProgrammingLanguage = favoriteProgrammingLanguage;
    }
    void fixbug(){
        cout << Name << " fixing a bug using"<<FavoriteProgrammingLanguage;
    }
    void Work(){
        cout << Name << " is writing Code "<< FavoriteProgrammingLanguage<<endl;
    }
};

class Teacher  : public Employee{
    public : 
        string Subject;
        Teacher (string name, string company, int age, string subject, string role)
            : Employee (name, company, age, role)
        {
            Subject = subject;
        }
        void PrepareLesson(){
            cout << Name << " is preparing " <<Subject << "lesson."<<endl;
        }
        void Work(){
            cout << Name << " is teaching "<< Subject<<endl;
        }
};

class staff : public Employee{
    public : 
        string Department;
        staff (string name, string company, int age, string department, string role)
            : Employee (name, company, age, role)
        {
            Department = department;
        }
        void completingtask(){
            cout<< Name << " is completing task for "<< Department<<endl;  
        }
        void Work(){
            cout<< Name << "is working in "<<Department<<endl; 
        }
}; 

int main(){

    Developer d = Developer ("Khiev Vivadh", "Amazon", 20, "Python", "Senior");
    Developer z = Developer ("You Hok", "Zinghu", 17, "NodeJS", "Junior");
    Teacher t = Teacher ("Thea Rung", "NUBB", 32, "Math", "Head Teacher");
    Teacher j = Teacher ("nara","MSI ",34,"Biology","Head Teacher");
    Developer Dom = Developer("Bunodom", "Meta", 35, "JavaScript", "Senior");
    staff Jin = staff("Jin","Econ",19,"database", "Team leader");

    Employee *e1 = &d;
    Employee *e2 = &t;
    Employee *e3 = &z;
    Employee *e4 = &j;
    Employee *e5 = &Dom; 
    Employee *e6 = &Jin;

    e6->IntroduceYourself();

}