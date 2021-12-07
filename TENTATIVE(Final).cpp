

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    string oldAcc;
    int daysExpect;
    string oldAcc1 = "Kierzen_Booc";
    string oldAcc2 = "Jeff_Sarra";
    string oldAcc3 = "Diowelsin_Albarida";
    int dayReserve;
    string resPick;
    char carmodel;
    string firstName;
    string lastName;
    string address;
    int persoContact;
    int age;
    string licenseType;
    int licenseNum;
    string firstnameEmergency;
    string lastnameEmergency;
    string relationshipEmergency;
    int emergencyContact;
    string addressEmergency;
    string payMethod;
    string reservePickup;
    int miniMany = 10;
    int regualrMany = 10;
    int vanMany = 5;
    int daysUsed;
    string validate;
    string monthReserve;
    char loop = 'Y';

    while (loop == 'y' || loop == 'Y')
    {
        cout << "\n\t\t                               Car Rental                   " << endl;
        cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
        cout << "\t\t\t|\tNew or Old Customer: ";
        cin >> validate;

        if (validate == "New")
        {
            cout << "\t\t\t|\tPlease Enter your First Name: "; // taking data from the user
            cin >> firstName;
            cout << "\t\t\t|\tPlease Enter your Last Name: "; // taking data from the user
            cin >> lastName;
            cout << "\t\t\t|\tPlease Enter your Age: "; // taking data from the user
            cin >> age;
            cout << "\t\t\t|\tAdress: "; // taking data from the user
            cin >> address;
            cout << "\t\t\t|\tLicense Number:  "; // taking data from the user
            cin >> licenseNum;
            cout << "\t\t\t|\tSelect 1 if Professional | Select 2 if Non-Professional"<<endl;
            cout << "\t\t\t|\tType of License:  "; // taking data from the user
            cin >> licenseType;
            cout << "\t\t\t|\tContact in case of emergency: " << endl; // taking data from the user
            cout << "\t\t\t|\tEmergency Contact First Name: ";
            cin >> firstnameEmergency;
            cout << "\t\t\t|\tEmergency Contact Last Name: ";
            cin >> lastnameEmergency;
            cout << "\t\t\t|\tAddress:";
            cin >> addressEmergency;
            cout << "\t\t\t|\tContact Number:";
            cin >> emergencyContact;
            cout << "\t\t\t|\tRelationship to the person:";
            cin >> relationshipEmergency;
            cout << endl;
        }
        else if (validate == "Old")
        {
            cout << "\t\t\t|\tChoose an Old Account: ";
            cout << oldAcc1 <<", ";
            cout << oldAcc2 <<", ";
            cout << oldAcc3 <<endl;
            cout << "\t\t\t|\tEnter the account: ";
            cin >> oldAcc;
        }
        else
        {
        }
        cout << "\t\t\t|\tReserve or Pick-up: ";
        cin >> resPick;
        cout << "\t\t\t|\tOn what month? ";
        cin >> monthReserve;

        if (resPick == "Reserve" && validate == "Old")
        {
            cout << "\t\t\t|\tSelec 1 for Professional | Select 2 for Non-Professinal"<<endl;
            cout << "\t\t\t|\tThe license of " << oldAcc << ": ";
            cin >> licenseType;
            cout << "\t\t\t|\tDays Available for " << monthReserve << endl;
            cout << "\t\t\t|\t5, 10, 15, 20, 25" << endl;
            cout << "\t\t\t|\tChoose a date: ";
            cin >> dayReserve;
        }
        else if (resPick == "Pick-up" && validate == "Old")
        {
            cout << "\t\t\t|\tSelec 1 for Professional | Select 2 for Non-Professinal" << endl;
            cout << "\t\t\t|\tThe license of " << oldAcc << ": ";
            cin >> licenseType;
            cout << "\t\t\t|\tChoose a car" << endl;
        }
        else
        {
        }

        if (resPick == "Reserve" && validate == "New")
        {
            cout << "\t\t\t|\tDays Available for " << monthReserve << endl;
            cout << "\t\t\t|\t5, 10, 15, 20, 25" << endl;
            cout << "\t\t\t|\tChoose a date: ";
            cin >> dayReserve;
        }
        else if (resPick == "Pick-up" && validate == "New")
        {
            cout << "\t\t\t|\tChoose a car" << endl;
        }
        else
        {
        }
        cout << "\t\t\t--------------------------------------------------------------------------" << endl;
        if (licenseType == "1" && validate == "Old" && resPick == "Reserve")
        {

            cout << "\t\t\t|\tThese are the cars available for your license: "<<endl;
            cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
            cout << "\t\t\t\tEnter 'A' for Mini(Good for 3 to 4 persons)." << endl;
            cout << "\t\t\t\tEnter 'B' for Regular(Good for 5 persons)." << endl;
            cout << "\t\t\t\tEnter 'C' for Van(Good for 9-13 perosons)." << endl;
            cout << endl;
            cout << "\t\t\t\tChoose a Car from the above options: ";
            cin >> carmodel;
            cout << endl;
            cout << "\t\t\t--------------------------------------------------------------------------" << endl;

            if (carmodel == 'A' && miniMany != 0)
            {
                cout << "\t\t\t|\tYou have choose the Mini Car" << endl;
                cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                miniMany--;
            }
            else if (carmodel == 'B' && regualrMany != 0)
            {
                cout << "\t\t\t|\tYou have choose the Regular Car" << endl;
                cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                regualrMany--;
            }
            else if (carmodel == 'C' && vanMany != 0)
            {
                cout << "\t\t\t|\tYou have choose the Van" << endl;
                cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                vanMany--;
            }
            else
            {
            }
        }
        else if (licenseType == "2" && validate == "Old" && resPick == "Reserve")
        {
            cout << "\t\t\t|\tThese are the cars available for your license: "<<endl;
            cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
            cout << "\t\t\t\tEnter 'A' for Mini(Good for 3 to 4 persons)." << endl;
            cout << "\t\t\t\tEnter 'B' for Regular(Good for 5 persons)." << endl;
            cout << endl;
            cout << "\t\t\t\tChoose a Car from the above options: ";
            cin >> carmodel;
            cout << endl;
            cout << "\t\t\t--------------------------------------------------------------------------" << endl;

            if (carmodel == 'A' && miniMany != 0)
            {
                cout << "\t\t\t|\tYou have choose the Mini Car" << endl;
                cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                miniMany--;
            }
            else if (carmodel == 'B' && regualrMany != 0)
            {
                cout << "\t\t\t|\tYou have choose the Regular Car" << endl;
                cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                regualrMany--;
            }
            else
            {
            }
        }
        else
        {
        }
        if (licenseType == "1" && validate == "New" && resPick == "Reserve")
        {

            cout << "\t\t\t|\tThese are the cars available for your license: "<<endl;
            cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
            cout << "\t\t\t\tEnter 'A' for Mini(Good for 3 to 4 persons)." << endl;
            cout << "\t\t\t\tEnter 'B' for Regular(Good for 5 persons)." << endl;
            cout << "\t\t\t\tEnter 'C' for Van(Good for 9-13 perosons)." << endl;
            cout << endl;
            cout << "\t\t\t\tChoose a Car from the above options: ";
            cin >> carmodel;
            cout << endl;
            cout << "\t\t\t--------------------------------------------------------------------------" << endl;

            if (carmodel == 'A' && miniMany != 0)
            {
                cout << "\t\t\t|\tYou have choose the Mini Car" << endl;
                cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                miniMany--;
            }
            else if (carmodel == 'B' && regualrMany != 0)
            {
                cout << "\t\t\t|\tYou have choose the Regular Car" << endl;
                cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                regualrMany--;
            }
            else if (carmodel == 'C' && vanMany != 0)
            {
                cout << "\t\t\t|\tYou have choose the Van" << endl;
                cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                vanMany--;
            }
            else
            {
            }
        }
        else if (licenseType == "2" && validate == "New" && resPick == "Reserve")
        {
            cout << "\t\t\t|\tThese are the cars available for your license: "<<endl;
            cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
            cout << "\t\t\t\tEnter 'A' for Mini(Good for 3 to 4 persons)." << endl;
            cout << "\t\t\t\tEnter 'B' for Regular(Good for 5 persons)." << endl;
            cout << endl;
            cout << "\t\t\t\tChoose a Car from the above options: ";
            cin >> carmodel;
            cout << endl;
            cout << "\t\t\t\t--------------------------------------------------------------------------" << endl;

            if (carmodel == 'A' && miniMany != 0)
            {
                cout << "\t\t\t|\tYou have choose the Mini Car" << endl;
                cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                miniMany--;
            }
            else if (carmodel == 'B' && regualrMany != 0)
            {
                cout << "\t\t\t|\tYou have choose the Regular Car" << endl;
                cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                regualrMany--;
            }
            else
            {
            }
        }
        else
        {
        }
        if (licenseType == "1" && validate == "Old" && resPick == "Pick-up")
        {

            cout << "\t\t\t|\tThese are the cars available for your license: "<<endl;
            cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
            cout << "\t\t\t\tEnter 'A' for Mini(Good for 3 to 4 persons)." << endl;
            cout << "\t\t\t\tEnter 'B' for Regular(Good for 5 persons)." << endl;
            cout << "\t\t\t\tEnter 'C' for Van(Good for 9-13 perosons)." << endl;
            cout << endl;
            cout << "\t\t\t\tChoose a Car from the above options: ";
            cin >> carmodel;
            cout << endl;
            cout << "\t\t\t--------------------------------------------------------------------------" << endl;

            if (carmodel == 'A' && miniMany != 0)
            {
                cout << "\t\t\t|\tYou have choose the Mini Car" << endl;
                cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                miniMany--;
            }
            else if (carmodel == 'B' && regualrMany != 0)
            {
                cout << "\t\t\t|\tYou have choose the Regular Car" << endl;
                cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                regualrMany--;
            }
            else if (carmodel == 'C' && vanMany != 0)
            {
                cout << "\t\t\t|\tYou have choose the Van" << endl;
                cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                vanMany--;
            }
            else
            {
            }
        }
        else if (licenseType == "2" && validate == "Old" && resPick == "Pick-up")
        {
            cout << "\t\t\t|\tThese are the cars available for your license: ";
            cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
            cout << "\t\t\t\tEnter 'A' for Mini(Good for 3 to 4 persons)." << endl;
            cout << "\t\t\t\tEnter 'B' for Regular(Good for 5 persons)." << endl;
            cout << endl;
            cout << "\t\t\t\tChoose a Car from the above options: ";
            cin >> carmodel;
            cout << endl;
            cout << "\t\t\t\t--------------------------------------------------------------------------" << endl;

            if (carmodel == 'A' && miniMany != 0)
            {
                cout << "\t\t\t|\tYou have choose the Mini Car" << endl;
                cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                miniMany--;
            }
            else if (carmodel == 'B' && regualrMany != 0)
            {
                cout << "\t\t\t|\tYou have choose the Regular Car" << endl;
                cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                regualrMany--;
            }
            else
            {
            }
        }
        else
        {
        }
        if (licenseType == "1" && validate == "New" && resPick == "Pick-up")
        {

            cout << "\t\t\t|\tThese are the cars available for your license: "<<endl;
            cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
            cout << "\t\t\t\tEnter 'A' for Mini(Good for 3 to 4 persons)." << endl;
            cout << "\t\t\t\tEnter 'B' for Regular(Good for 5 persons)." << endl;
            cout << "\t\t\t\tEnter 'C' for Van(Good for 9-13 perosons)." << endl;
            cout << endl;
            cout << "\t\t\t\tChoose a Car from the above options: ";
            cin >> carmodel;
            cout << endl;
            cout << "\t\t\t--------------------------------------------------------------------------" << endl;

            if (carmodel == 'A' && miniMany != 0)
            {
                cout << "\t\t\t|\tYou have choose the Mini Car" << endl;
                cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                miniMany--;
            }
            else if (carmodel == 'B' && regualrMany != 0)
            {
                cout << "\t\t\t|\tYou have choose the Regular Car" << endl;
                cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                regualrMany--;
            }
            else if (carmodel == 'C' && vanMany != 0)
            {
                cout << "\t\t\t|\tYou have choose the Van" << endl;
                cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                vanMany--;
            }
            else
            {
            }
        }
        else if (licenseType == "2" && validate == "New" && resPick == "Pick-up")
        {
            cout << "\t\t\t|\tThese are the cars available for your license: ";
            cout << "\t\t\t\tPlease Select a Car" << endl; // giving user a choice to select among three different models
            cout << "\t\t\t\tEnter 'A' for Mini(Good for 3 to 4 persons)." << endl;
            cout << "\t\t\t\tEnter 'B' for Regular(Good for 5 persons)." << endl;
            cout << endl;
            cout << "\t\t\t\tChoose a Car from the above options: ";
            cin >> carmodel;
            cout << endl;
            cout << "\t\t\t--------------------------------------------------------------------------" << endl;

            if (carmodel == 'A' && miniMany != 0)
            {
                cout << "\t\t\t|\tYou have choose the Mini Car" << endl;
                cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days." << endl;
                miniMany--;
            }
            else if (carmodel == 'B' && regualrMany != 0)
            {
                cout << "\t\t\t|\tYou have choose the Regular Car" << endl;
                cout << "\t\t\t|\tPrice of it is 1400 + 300 for exceeding days."<<endl;
                regualrMany--;
            }
            else
            {
            }
        }
        else
        {
        }
        cout << "\t\t\t|\tHow many days will you rent the car?:  ";
        cin >> daysExpect;
        cout << "\t\t\t--------------------------------------------------------------------------" << endl;
        cout << "\t\t\t--------------------------------------------------------------------------" << endl;
        cout << "\t\t\t--------------------------------------------------------------------------" << endl;
        cout << "\t\t\t|\tInvertory: Cars Left" << endl;
        cout << "\t\t\t|\t" << miniMany << endl
             << "\t\t\t|\t" << regualrMany << endl
             << "\t\t\t|\t" << vanMany << endl;
        cout << "\t\t\t--------------------------------------------------------------------------" << endl;
        cout << "\t\t\t--------------------------------------------------------------------------" << endl;
        cout << "\t\t\t--------------------------------------------------------------------------" << endl;
        if (validate == "Old")
        {
            cout << "\t\t\t|\tBilling:" << endl;
            cout << "\t\t\t|\tName: " << oldAcc <<endl;
            cout << "\t\t\t|\tType of Car: " << carmodel<<endl;
            if (carmodel == 'A')
            {
                cout << "\t\t\t|\tYou have choose the Mini Car" << endl;
                cout << "\t\t\t|\tAmount to be paid: " << (1400 + daysExpect * 300) << endl;
            }
            else if (carmodel == 'B')
            {
                cout << "\t\t\t|\tYou have choose the Regular Car" << endl;
                cout << "\t\t\t|\tAmount to be paid: " << (2200 + daysExpect * 400) << endl;
            }
            else if (carmodel == 'C')
            {
                cout << "\t\t\t|\tYou have choose the Van" << endl;
                cout << "\t\t\t|\tAmount to be paid: " << (4500 + daysExpect * 400) << endl;
            }
            else
            {
            }
        }
        else
        {
        }
        cout << "\t\t\t|\tBILLING STATEMENT" << endl;
        cout << "\t\t\t|\tName: " << firstName << " " << lastName<<endl;
        cout << "\t\t\t|\tType of Car: " << carmodel<<endl;
        if (carmodel == 'A')
        {
            cout << "\t\t\t|\tYou have choose the Mini Car" << endl;
            cout << "\t\t\t|\tAmount to be paid: " << (1400 + daysExpect * 300) << endl;
        }
        else if (carmodel == 'B')
        {
            cout << "\t\t\t|\tYou have choose the Regular Car" << endl;
            cout << "\t\t\t|\tAmount to be paid: " << (2200 + daysExpect * 400) << endl;
        }
        else if (carmodel == 'C')
        {
            cout << "\t\t\t|\tYou have choose the Van" << endl;
            cout << "\t\t\t|\tAmount to be paid: " << (4500 + daysExpect * 400) << endl;
        }
        else
        {
        }
        cout << "\t\t\t|\tChoose type of payment:" << endl;
        cout << "\t\t\t|\tPaypal, Gcash, Cash, Bank: ";
        cin >> payMethod;

        if (payMethod == "Paypal")
        {
            cout << "\t\t\t|\tFollow this payment method using Paypal" << endl;
        }
        else if (payMethod == "Gcash")
        {
            cout << "\t\t\t|\tFollow this payment method using Gcash" << endl;
        }
        else if (payMethod == "Cash")
        {
            cout << "\t\t\t|\tFollow this payment method using Cash" << endl;
        }
        else if (payMethod == "Bank")
        {
            cout << "\t\t\t|\tFollow this payment method using Bank" << endl;
        }
        else
        {
        }
        cout << " \t\t\t|\tAnother transaction? (y/n) ";
        cin >> loop;
    }
    return 0;
}
