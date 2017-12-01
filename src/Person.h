class Person {
private:
    string name;
    string document;
    string email;
    string phone;
    Date birthday;
public:
    void setName (string _name) {
        name = _name;
    };

    string getName () {
        return name;
    };

    void setDocument (string _document) {
        document = _document;
    };

    string getDocument () {
        return document;
    };

    void setEmail (string _email) {
        email = _email;
    };

    string getEmail () {
        return email;
    };

    void setPhone (string _phone) {
        phone = _phone;
    };

    string getPhone () {
        return phone;
    };

    void setBirthday (Date _birthday) {
        birthday = _birthday;
    };

    Date getBirthday () {
        return birthday;
    };

};