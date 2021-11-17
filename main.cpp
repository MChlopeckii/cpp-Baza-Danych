#include <iostream>

using namespace std;

struct film
{
    char tytul[20];
    char gatunek[20];
    int dlugoscWMinutach;
    int rokWydania;
}filmy[10];


int main()
{
    int what = 0;
    int i=0;
    while(what != 4)
    {
        cout << "Witaj w bazie danych. Co chcesz teraz zrobic? (1-4)" << endl
        <<"1. Stworz film"<<endl<<"2. Wypisz rekordy"<<endl
        <<"3. Edytuj Rekord (Coming soon)"<<endl<<"4. Zakoncz program"<<endl;
        cin>>what;
        if(what == 1)
        {
            cout<<"Tworzenie rekordu nr."<<i+1<<"..."<<endl;
            cout<<"Podaj tytul: ";
            cin.getline(filmy[i].tytul, 20);
            cin.getline(filmy[i].tytul, 20);
            cout<<"Podaj gatunek: ";
            cin.getline(filmy[i].gatunek, 20);
            cout<<"Podaj dlugosc filmu w minutach: ";
            cin>>filmy[i].dlugoscWMinutach;
            cout<<"Podaj rok wydania: ";
            cin>>filmy[i].rokWydania;
            i++;
        }
        if(what == 2)
        {
            cout<<"Wyswietlanie wszystkich rekordow..."<<endl;
            for(int j=0; j<i; j++)
            {
                cout<<"Rekord nr."<<j<<endl;
                cout<<"Tytul filmu: "<<filmy[j].tytul<<endl;
                cout<<"Gatunek filmu: "<<filmy[j].gatunek<<endl;
                cout<<"Dlugosc filmu: "<<filmy[j].dlugoscWMinutach<<endl;
                cout<<"Rok wydania filmu: "<<filmy[j].rokWydania<<endl<<endl;
            }
        }
        cout<<endl<<endl;
    }
    return 0;
}
