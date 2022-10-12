#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

/*
Autor: Minecraft Lets Play
Datum: 17.09.2022
Name: Password Generator
*/

using namespace std;

int main()
{
    int i=1;
    char Close;
    char Choice;
    char yesno;

       cout << "\t" << endl;

    cout << "\t\t\t\t\t Password Generator   V 1.3" << endl;
   cout << "\t\t\t\t\t --------------------------" << endl;
   cout << "\t" << endl;
   cout << "\t" << endl;
   cout << "\t" << endl;
    cout << endl << "Choose Password building Pools:";
       cout << "\t" << endl;
       cout << "\t" << endl;
       cout << "1=Letters only 2=Numbers only 3=Letters and Numbers 4=Letters Numbers and some Characters";
       cout << "\t" << endl;
       cout << "\t" << endl;
       cout << "\t" << endl;
       cout << "\t" << endl;
       cout << "Note: 1 and 2 are weak password building pools! --> Only a password with a great length is good!";
       cout << "\t" << endl;
       cout << "\t" << endl;
       cout << "\t" << endl;
       cout << "\t" << endl;
    cout << "Coice (Number):";
    cin >> Choice;

    cout << "\t" << endl;
    cout << "\t" << endl;
    cout << "\t" << endl;
    system("cls");

    switch(Choice)
    {

   case '1':
       {
     char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
   string password;
   int length, rNum;

   ofstream out_file;

   out_file.open("Password.txt"); //Erstellt die Zieldatei inder das generierte Passwort gespeichert wird

   cout << "\t" << endl;

   cout << "\t\t\t\t\t Password Generator   V 1.3" << endl;
   cout << "\t\t\t\t\t --------------------------" << endl;
   cout << "\t" << endl;
   cout << "\t" << endl;
   cout << "\t\t\t\t\t     1: Letters only" << endl;
   cout << "\t" << endl;
   cout << "\t" << endl;
   cout << "\t" << endl;

   cout << "Enter the number of digits for your password:"; //Legt die gr��e des passwortes fest
   cin >> length;

   srand(time(NULL));

   for (int i = 1; i <= length; i++)
   {
      rNum = rand() % 51 + 1; //H�ngt die Oben definierten Buchstaben und Zahlen zuf�llig aneinander

      out_file << characters[rNum]; //Speichert das generierte Passwort
   }
      cout << "\t" << endl;
      cout << "\t" << endl;

   cout << "Password generation completed!\n";
   out_file.close();
    fstream myFile;
    myFile.open("Password.txt", ios::in);
    if (myFile.is_open()) {
            string line;
    while (getline(myFile, line)) {
            cout << "\t" << endl;
            cout << "\t" << endl;
            cout << "The generated password is: " << line << endl;
            cout << "\t" << endl;
    }
    myFile.close();
    break;
    }


    }

   case '2':
       {
     char characters[] = "0123456789";
   string password;
   int length, rNum;

   ofstream out_file;

   out_file.open("Password.txt"); //Erstellt die Zieldatei inder das generierte Passwort gespeichert wird

   cout << "\t" << endl;

   cout << "\t\t\t\t\t Password Generator   V 1.3" << endl;
   cout << "\t\t\t\t\t --------------------------" << endl;
   cout << "\t" << endl;
   cout << "\t" << endl;
   cout << "\t\t\t\t\t     2: Numbers only" << endl;
   cout << "\t" << endl;
   cout << "\t" << endl;
   cout << "\t" << endl;

   cout << "Enter the number of digits for your password:"; //Legt die gr��e des passwortes fest
   cin >> length;

   srand(time(NULL));

   for (int i = 1; i <= length; i++)
   {
      rNum = rand() % 9 + 1; //H�ngt die Oben definierten Buchstaben und Zahlen zuf�llig aneinander

      out_file << characters[rNum]; //Speichert das generierte Passwort
   }
      cout << "\t" << endl;
      cout << "\t" << endl;

   cout << "Password generation completed!\n";
   out_file.close();
    fstream myFile;
    myFile.open("Password.txt", ios::in);
    if (myFile.is_open()) {
            string line;
    while (getline(myFile, line)) {
            cout << "\t" << endl;
            cout << "\t" << endl;
            cout << "The generated password is: " << line << endl;
            cout << "\t" << endl;
    }
    myFile.close();
    break;
       }

        }
   case '3':
       {
     char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
   string password;
   int length, rNum;

   ofstream out_file;

   out_file.open("Password.txt"); //Erstellt die Zieldatei inder das generierte Passwort gespeichert wird

   cout << "\t" << endl;

   cout << "\t\t\t\t\t Password Generator   V 1.3" << endl;
   cout << "\t\t\t\t\t --------------------------" << endl;
   cout << "\t" << endl;
   cout << "\t" << endl;
   cout << "\t\t\t\t\t  3: Letters and Numbers" << endl;
   cout << "\t" << endl;
   cout << "\t" << endl;
   cout << "\t" << endl;

   cout << "Enter the number of digits for your password:"; //Legt die gr��e des passwortes fest
   cin >> length;

   srand(time(NULL));

   for (int i = 1; i <= length; i++)
   {
      rNum = rand() % 61 + 1; //H�ngt die Oben definierten Buchstaben und Zahlen zuf�llig aneinander

      out_file << characters[rNum]; //Speichert das generierte Passwort
   }
      cout << "\t" << endl;
      cout << "\t" << endl;

   cout << "Password generation completed!\n";
    out_file.close();
    fstream myFile;
    myFile.open("Password.txt", ios::in);
    if (myFile.is_open()) {
            string line;
    while (getline(myFile, line)) {
            cout << "\t" << endl;
            cout << "\t" << endl;
            cout << "The generated password is: " << line << endl;
            cout << "\t" << endl;
    }
    myFile.close();
    break;
       }

        }
   case '4':
    {
     char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789+-/*=#.:!?\$%&_<>";
   string password;
   int length, rNum;

   ofstream out_file;

   out_file.open("Password.txt"); //Erstellt die Zieldatei inder das generierte Passwort gespeichert wird

   cout << "\t" << endl;

   cout << "\t\t\t\t\t Password Generator   V 1.3" << endl;
   cout << "\t\t\t\t\t --------------------------" << endl;
   cout << "\t" << endl;
   cout << "\t" << endl;
   cout << "\t\t\t\t     4:Letters, Numbers and Characters" << endl;
   cout << "\t" << endl;
   cout << "\t" << endl;
   cout << "\t" << endl;

   cout << "Enter the number of digits for your password:"; //Legt die gr��e des passwortes fest
   cin >> length;

   srand(time(NULL));

   for (int i = 1; i <= length; i++)
   {
      rNum = rand() % 79 + 1; //H�ngt die Oben definierten Buchstaben und Zahlen zuf�llig aneinander

      out_file << characters[rNum]; //Speichert das generierte Passwort
   }
      cout << "\t" << endl;
      cout << "\t" << endl;

   cout << "Password generation completed!\n";
 out_file.close();
    fstream myFile;
    myFile.open("Password.txt", ios::in);
    if (myFile.is_open()) {
            string line;
    while (getline(myFile, line)) {
            cout << "\t" << endl;
            cout << "\t" << endl;
            cout << "The generated password is: " << line << endl;
            cout << "\t" << endl;
    }
    myFile.close();
    break;
       }

        }
    }


}
