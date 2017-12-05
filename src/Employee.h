class Employee : public Person{
private:
    string role;
    string employmentRelantionship;
public:
    void setRole (string _role) {
        role = _role;
    };
    string getRole () {
        return role;
    };
    void setEmploymentRelantionship (string _employmentRelantionship) {
        employmentRelantionship = _employmentRelantionship;
    };
    string getEmploymentRelantionship () {
        return employmentRelantionship;
    };
    string getInstance() {
        return "Employee";
    };
};