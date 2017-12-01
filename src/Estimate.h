class Estimate {
private:
    Patient patient;
    vector<Procedure> procedure;
    Date paymentDate;
    bool isPaid;
public:
    void setPatient (Patient _patient) {
        patient = _patient;
    };

    Patient getPatient () {
        return patient;
    };

    void setProcedure (vector<Procedure> _procedure) {
        procedure = _procedure;
    };

    vector<Procedure> getProcedure () {
        return procedure;
    };

    void setPaymentDate (Date _paymentDate) {
        paymentDate = _paymentDate;
    };

    Date getPaymentDate () {
        if (getIsPaid()) {
            return paymentDate;
        } else {
            throw SmileDentistryException::notPaidYet();
        }
    };

    void setIsPaid (bool _isPaid) {
        isPaid = _isPaid;
    };

    bool getIsPaid () {
        return isPaid;
    };
};