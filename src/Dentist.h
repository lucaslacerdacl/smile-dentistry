class Dentist : public Employee {
private:
    string CRO;
public:
    void setCRO (string _CRO) {
        CRO = _CRO;
    };
    string getCRO () {
        return CRO;
    };
};