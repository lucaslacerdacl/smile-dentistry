class Patient : public Person {
private:
    vector<string> type;
public:
    void setType (vector<string> _type) {
        type = _type;
    };
    vector<string> getType () {
        return type;
    };
};