class Patient : public Person {
private:
    string allergies;
    string medicines;
    vector<string> type;
public:
    void setType (vector<string> _type) {
        type = _type;
    }
    vector<string> getType () {
        return type;
    }
    void setAllergies (string _allergies) {
        allergies = _allergies;
    };
    string getAllergies () {
        return allergies;
    };
    void setMedicines (string _medicines) {
        medicines = _medicines;
    };
    string getMedicines () {
        return medicines;
    };
    string getInstance() {
        return "Patient";
    };
};