class SmileDentistryException : public exception {
private:
	string msg;
public:
    SmileDentistryException(string _msg) : msg(_msg) {};
	~SmileDentistryException() throw() {};

    static const SmileDentistryException notPaidYet() {
      return SmileDentistryException("Não é possível obter a data pois ainda não foi pago!");
	};
    
    const char *what() const throw() { 
      return msg.c_str(); 
    };
};