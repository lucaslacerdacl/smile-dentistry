char input[50];
float priceInput;
string format = "dd/mm/aaaa";
Clinic clinic;
void setDentist() {
    Dentist *newDentist = new Dentist;

    cout << "- Novo Dentista\n";

    cout << "Informe o nome\n";
    scanf("%s", input);
    newDentist->setName(input);

    cout << "Informe o documento\n";
    scanf("%s", input);
    newDentist->setDocument(input);

    cout << "Informe o e-mail\n";
    scanf("%s", input);
    newDentist->setEmail(input);

    cout << "Informe o telefone\n";
    scanf("%s", input);
    newDentist->setPhone(input);

    cout << "Informe a data de nascimento (dd/mm/aaaa)\n";
    scanf("%s", input);
    Date *birthday = new Date(format, input);
    newDentist->setBirthday(birthday);

    cout << "Informe o cargo\n";
    scanf("%s", input);
    newDentist->setRole(input);

    cout << "Informe o regime de trabalho\n";
    scanf("%s", input);
    newDentist->setEmploymentRelantionship(input);

    cout << "Informe o CRO\n";
    scanf("%s", input);
    newDentist->setCRO(input);

    clinic.setPerson(newDentist);
}

void getDentist() {
    for (vector<Person *>::iterator it = clinic.getPerson().begin(); it != clinic.getPerson().end(); it++)
    {
        cout << "Nome: " << (*it)->getName()  << endl;
    }
}

void runExamples () {

    try {
        char start;
        cout << "Digite o número da operação\n1 - Cadastrar Dentista\n2 - Listar Dentistas\n3 - Notificar promoção\n4 - Encerrar o programa\n";
        scanf("%c", &start);

        if (start == '1') {
            setDentist();
        } else if (start == '2') {
            getDentist();
        } else if (start == '3') {
            clinic.notifyPromotion();
        } else {
            exit(0);
        }
    } catch (SmileDentistryException &e) {
        cout << e.what() << endl;
    } catch(exception& e) {
        cout << "Ocorreu o erro: " << e.what() << "\nFavor inserir os dados corretamente" << endl;
    }

}