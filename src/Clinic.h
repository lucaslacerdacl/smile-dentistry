class Clinic {
private:
    vector<Person*> person;
public:
    void setPerson(Person* _person) {
        person.push_back(_person);
    };
    vector<Person*> getPerson () {
        return person;
    };
    void notifyPromotion () {
        for (vector<Person*>::iterator it = person.begin(); it != person.end(); it++) {
            if((*it)->getInstance() == "Patient") {
                cout << "O Sr(a). "
                << (*it)->getName()
                << " foi notificado no e-mail: "
                << (*it)->getEmail()
                << " e no telefone: "
                << (*it)->getPhone()
                << endl;
            }
        }
    };
    ~Clinic () {
        for (vector<Person*>::iterator it = person.begin(); it != person.end(); it++) {
            delete *it;
        }
        person.clear();
    };
};