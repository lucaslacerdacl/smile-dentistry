class Employee : public Person{
private:
    string type;
    string employmentRelantionship;
public:
    void setType (string _type) {
        type = _type;
    };
    string getType () {
        return type;
    };
    void setEmploymentRelantionship (string _employmentRelantionship) {
        employmentRelantionship = _employmentRelantionship;
    };
    string getEmploymentRelantionship () {
        return employmentRelantionship;
    };
};