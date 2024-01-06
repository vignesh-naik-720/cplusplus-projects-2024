#include <iostream>
#include <string>
using namespace std;
static int pcount = 1;
class PERSON
{
    protected:
        string name;
        int citizen_id;
    public:
        PERSON()
        {
            citizen_id = pcount++;
            cout << "Enter Your Name : ";
            cin >> name;
        }
};
class DOCTOR: public PERSON
{
    protected:
        string hospital_name;
        string degree;
    public:
        DOCTOR()
        {
            cin.ignore();
            cout << "I see you are a doctor \nwhere do you work? ";
            getline(cin, hospital_name);
            cout << "And what degree got you in " << hospital_name << " ";
            getline(cin, degree);
        }
        void display()
        {
            cout << name << " is a doctor at " << hospital_name << " hospital. He/she possesses " << degree << " degree " << endl;
        }
};
class ENGINEER: public PERSON
{
    protected:
        string firm;
        int experience;
    public:
        ENGINEER()
        {
            cin.ignore();
            cout << "I see you are an engineer \nwhere do you work? ";
            getline(cin, firm);
            cout << "How many years of experience do you possess? ";
            cin >> experience;
        }
        void display()
        {
            cout << name << " is an engineer working at " << firm << ". He/she has experience of about " << experience << " years" << endl;
        }
};
class ARTIST: public PERSON
{
    protected:
        string art_form;
        string exhibition;
    public:
        ARTIST()
        {
            cin.ignore();
            cout << "Oh you are an artist I see\nwhat art do you practice? ";
            getline(cin, art_form);
            cout << "Where was your last exhibition held? ";
            getline(cin, exhibition);
        }
        void display()
        {
            cout << name << " is an artist who practices " << art_form << ". He/she recently held an exhibition at " << exhibition << " " << endl;
        }
};
class SPECIALIST_DOCTOR: public DOCTOR
{
    protected:
        string specialty;
    public:
        SPECIALIST_DOCTOR()
        {
            cin.ignore();
            cout << "What is Your specialty? ";
            getline(cin, specialty);
        }
        void display()
        {
            cout << name << " is a doctor at " << hospital_name << " hospital. He/she possesses " << degree << " degree with specialty in " << specialty << endl;
        }
};
int main()
{
    DOCTOR d;
    d.display();
    cout << "\n\n";
    ENGINEER e;
    e.display();
    cout << "\n\n";
    ARTIST a;
    a.display();
    cout << "\n\n";
    SPECIALIST_DOCTOR sd;
    sd.display();
    cout << "\n\n";
}
