class Procedure {
private:
    string type;
    float price;
    Dentist dentist;
    Date *date;
public:
    void setType (string _type) {
        type = _type;
    };
    
    string getType () {
        return type;
    };

    void setPrice (float _price) {
        price = _price;
    };
    
    float getPrice () {
        return price;
    };

    void setDentist (Dentist _dentist) {
        dentist = _dentist;
    };
    
    Dentist getDentist () {
        return dentist;
    };

    void setDate (Date* _date) {
        date = _date;
    };
    
    Date* getDate () {
        return date;
    };

};