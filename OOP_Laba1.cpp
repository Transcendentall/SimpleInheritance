#include <iostream>

using namespace std;







class Human
{
private:
        std::string name;
        std::string dateofbirth;

public:

        Human()
        {
            this->name        = "Default Name";
            this->dateofbirth = "Default Date Of Birth";
        }


void say()
        {
            cout << this->name << " say: Default Phrase" << endl;
        }

virtual void saySpecPhrase(Human *Human)
        {
            Human->say();
        }

void whatisyourname()
        {
            cout << "My name is " << this->name << "." << endl;
        }

        void whatisyourdateofbirth()
        {
            
            cout << "Date of birth of " << this->name << " is " << this->dateofbirth << "." << endl;
        }

protected:

void setName(std::string name1)
{
    this->name = name1;
}

std::string getName()
{
    return this->name;
}

void setdateofbirth(std::string dateofbirth1)
{
    this->dateofbirth = dateofbirth1;
}

std::string getdateofbirth()
{
    return this->dateofbirth;
}

};



class Employee : public Human
{
private:
        std::string nameofwork;

public:



        void say()
        {
            cout << this->getName() << " say: '...'" << endl;
        }

    void whatisyourwork()
        {
            cout << "Work of employee " << this->getName() << " is " << this->nameofwork << "." << endl;
        }

protected:

void setnameofwork(std::string nameofwork1)
{
    this->nameofwork = nameofwork1;
}

std::string getnameofwork()
{
    return this->nameofwork;
}

};

class Student : public Human
{
private:
        std::string nameofunivestity;

public:

        void say()
        {
            cout << this->getName() << " say: '...study, study, study...'" << endl;
        }


    void whatisyouruniversity()
        {
            cout << "Name of university of student " << this->getName() << " is " << this->nameofunivestity << "." << endl;
        }

protected:

void setnameofunivestity(std::string nameofunivestity1)
{
    this->nameofunivestity = nameofunivestity1;
}

std::string getnameofunivestity()
{
    return this->nameofunivestity;
}

};

class Engineer : public Employee
{
private:
        unsigned short int SrokRabotyInzheneromInYears;

public:

        Engineer(std::string name1, std::string dateofbirth1, std::string nameofwork1, unsigned short int SrokRabotyInzheneromInYears1)
        {
            this->setName(name1);
            this->setdateofbirth(dateofbirth1);
            this->setnameofwork(nameofwork1);
            this->setSrokRabotyInzheneromInYears(SrokRabotyInzheneromInYears1);
        };

        void say()
        {
            cout << this->getName() << " say: 'Again work?..'" << endl;
        }

        void whatsrokraboty()
        {
            cout << "Srok Raboty of engineer " << this->getName() << " is " << this->SrokRabotyInzheneromInYears << " years." << endl;
        }

protected:

void setSrokRabotyInzheneromInYears(unsigned short int SrokRabotyInzheneromInYears1)
{
    this->SrokRabotyInzheneromInYears = SrokRabotyInzheneromInYears1;
}

unsigned short int getSrokRabotyInzheneromInYears()
{
    return this->SrokRabotyInzheneromInYears;
}

};


class Calculator
{
private:

public:

void summint(int a, int b)
{
    cout << "Summ of " << a << " + " << b << " = " << a+b << "." << endl;
}

protected:



};


class MathFacStudent : public Student, public Calculator
{
private:

public:
        bool isOtlichnoForMathematicalAnalysis;
        MathFacStudent(std::string name1, std::string dateofbirth1, std::string nameofunivestity1, bool isOtlichnoForMathematicalAnalysis1)
        {
            this->setName(name1);
            this->setdateofbirth(dateofbirth1);
            this->setnameofunivestity(nameofunivestity1);
            this->setisOtlichnoForMathematicalAnalysis(isOtlichnoForMathematicalAnalysis1);
        };



        void say()
        {
            cout << this->getName() << " say: '...matan, matan, matan...'" << endl;
        }
        void OtlichnoForMathematicalAnalysisOrNot()
        {
            if (this->isOtlichnoForMathematicalAnalysis == true)
            {
                cout << "Student " << this->getName() << " have 'Otlichno' for MathAnalysis." << endl;
            }
            else
            {
                cout << "Student " << this->getName() << " no have 'Otlichno' for MathAnalysis." << endl;

            }
        }

protected:

void setisOtlichnoForMathematicalAnalysis(bool isOtlichnoForMathematicalAnalysis)
{
    this->isOtlichnoForMathematicalAnalysis = isOtlichnoForMathematicalAnalysis;
}

bool getisOtlichnoForMathematicalAnalysis()
{
    return this->isOtlichnoForMathematicalAnalysis;
}

};

int main()
{
    Human* DefaultMan1 = new Human();
    Human* DefaultMan2 = new Human();

    DefaultMan1->whatisyourname();
    DefaultMan1->whatisyourdateofbirth();
    cout << endl;
    DefaultMan2->whatisyourname();
    DefaultMan2->whatisyourdateofbirth();
    cout << endl;


    Engineer* Ivan = new Engineer("Ivan", "12.01.2000", "Program Engineer", 5);
    MathFacStudent* Petya = new MathFacStudent("Petya", "6.06.2003", "MSU", false);
    MathFacStudent* Sidor = new MathFacStudent("Sidor", "19.09.2004", "DVFU", true);

    Ivan->whatisyourname();
    Ivan->whatisyourdateofbirth();
    Ivan->say();
    Ivan->whatisyourwork();
    Ivan->whatsrokraboty();
    cout << endl;

    Petya->whatisyourname();
    Petya->whatisyourdateofbirth();
    Petya->say();
    Petya->whatisyouruniversity();
    Petya->OtlichnoForMathematicalAnalysisOrNot();
    Petya->summint(3,2);
    cout << endl;

    Sidor->whatisyourname();
    Sidor->whatisyourdateofbirth();
    Sidor->say();
    Sidor->whatisyouruniversity();
    Sidor->OtlichnoForMathematicalAnalysisOrNot();
    Sidor->summint(142,13);
    cout << endl;

    return 0;
}
