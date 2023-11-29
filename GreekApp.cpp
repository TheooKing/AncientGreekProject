#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string MakingThema(string,int);
string CheckSpace(string);
string MakingKataliksi(string,int);
bool UnderstandingKataliksi(string);
void AddingKataliksi(string,int);
void AddingKataliksiTon(string,int);

int StartUpQuestion1()
{
    string UserInputGend;

    //Saying to the user what he can choose
    cout << "Σε ποιο φύλλο είναι το ουσιαστικό;\n";
    cout << "Αρσ. = Αρσενικό\n";
    cout << "Θυλ. = Θυλικό\n";
    cout << "Ουδ. = Ουδέτερο\n";
    
    //getting input
    getline(cin, UserInputGend);
    
    //checking input
    //and sending him on what he said
    if(UserInputGend == "Αρσ.")
    {
        return 1;
    }
    
    if(UserInputGend == "Θυλ.")
    {
        return 2;
    }
    
    if(UserInputGend == "Ουδ.")
    {
        return 3;
    }
    else
    {
        //if the input doesn't match these...'
        cout << "***PLease try again, incorrect input***\n";
        return 0;
    }
}

string StartUpQuestion2()
{
    string UserInput;
    
    cout << "Ποιά είναι η λέξη που θέλεις να κλήσω;";
    
    getline(cin, UserInput);
    string InputWord = UserInput;
    return InputWord;
}

string CheckSpace(string Cleaner)
{
    Cleaner.erase(remove(Cleaner.begin(), Cleaner.end(), ' '), Cleaner.end());
    return Cleaner;
}

string MakingThema(string Word,int Tense)
{
    if(Tense == 1)
    {
        //calculating "thema"
        int WordLen = Word.size();
        int LetNumbStart = WordLen  - 4;
        int LetNumbEnd = WordLen - 1;
    
        //making "thema"
        Word.erase(LetNumbStart,LetNumbEnd);
        return Word;
    }
    if(Tense > 1)
    {
        //calculating "thema"
        int WordLen = Word.size();
        int LetNumbStart = WordLen  - 2;
        int LetNumbEnd = WordLen - 1;
    
        //making "thema"
        Word.erase(LetNumbStart,LetNumbEnd);
        return Word;
    }
    
}

string MakingKataliksi(string Katal, int Tense)
{
    if(Tense == 1)
    {
        //calculating "thema"
        int WordLen = Katal.size();
        int LetNumbStart = 0;
        int LetNumbEnd = WordLen - 4;
    
        //making "thema"
        Katal.erase(LetNumbStart,LetNumbEnd);
        return Katal;
    }
    if(Tense > 1)
    {
        //calculating "thema"
        int WordLen = Katal.size();
        int LetNumbStart = 0;
        int LetNumbEnd = WordLen - 2;
    
        //making "thema"
        Katal.erase(LetNumbStart,LetNumbEnd);
        return Katal;
    }
}

bool UnderstandingKataliksi(string UnKatal)
{
    if(UnKatal.find("ό") < UnKatal.size())
    {
        return true;
    }
    if(UnKatal.find("ή") < UnKatal.size())
    {
        return true;
    }
    if(UnKatal.find("ί") < UnKatal.size())
    {
        return true;
    }
    if(UnKatal.find("έ") < UnKatal.size())
    {
        return true;
    }
    if(UnKatal.find("ά") < UnKatal.size())
    {
        return true;
    }
    else
    {
        return false;
    }
}

void AddingKataliksi(string MainWord, int Tense2)
{
    if(Tense2 = 1)
    {
        //adding "kataliksi"
        cout << "ο " << MainWord << "-ος\n"; 
        cout << "του "<< MainWord << "-ου\n"; 
        cout << "τον "<< MainWord << "-ο\n\n"; 
        
        cout << "οι " << MainWord << "-οι\n"; 
        cout << "τους " << MainWord << "-ους\n"; 
        cout << "των " << MainWord << "-ων\n"; 
        cout << MainWord << "-οι\n"; 
        return;
    }   
    if(Tense2 = 2)
    {
        //adding "kataliksi"
        cout << "η " << MainWord << "-α\n"; 
        cout << "της "<< MainWord << "-ας\n"; 
        cout << "την "<< MainWord << "-α\n\n"; 
        
        cout << "οι " << MainWord << "-ες\n"; 
        cout << "των " << MainWord << "-ων\n"; 
        cout << "τις " << MainWord << "-ες\n";
        cout << MainWord << "-ες\n";
        return;
    }
    if(Tense2 = 3)
    {
        //adding "kataliksi"
        cout << "το " << MainWord << "-ο\n"; 
        cout << "του "<< MainWord << "-ου\n"; 
        cout << "τον "<< MainWord << "-ον\n\n"; 
        
        cout << "τα " << MainWord << "-α\n"; 
        cout << "των " << MainWord << "-ων\n"; 
        cout << "τα " << MainWord << "-α\n";
        cout << MainWord << "-α\n";
        return;
    }
}

void AddingKataliksiTon(string MainWord1, int Tense1)
{
    if(Tense1 = 1)
    {
        //adding "kataliksi"
        cout << "ο " << MainWord1 << "-ός\n"; 
        cout << "του "<< MainWord1 << "-ού\n"; 
        cout << "τον "<< MainWord1 << "-ο\n\n"; 
        
        cout << "οι " << MainWord1 << "-οί\n"; 
        cout << "τους " << MainWord1 << "-ούς\n"; 
        cout << "των " << MainWord1 << "-ών\n"; 
        cout << MainWord1 << "-οί\n";
        return;
    }   
    if(Tense1 = 2)
    {
        //adding "kataliksi"
        cout << "η " << MainWord1 << "-ά\n"; 
        cout << "της "<< MainWord1 << "-άς\n"; 
        cout << "την "<< MainWord1 << "-ά\n\n"; 
        
        cout << "οι " << MainWord1 << "-ές\n"; 
        cout << "των " << MainWord1 << "-ών\n"; 
        cout << "τις " << MainWord1 << "-ές\n";
        cout << MainWord1 << "-ές\n";
        return;
    }
    if(Tense1 = 3)
    {
        //adding "kataliksi"
        cout << "το " << MainWord1 << "-ό\n"; 
        cout << "του "<< MainWord1 << "-ού\n"; 
        cout << "τον "<< MainWord1 << "-όν\n\n"; 
        
        cout << "τα " << MainWord1 << "-ά\n"; 
        cout << "των " << MainWord1 << "-ών\n"; 
        cout << "τα " << MainWord1 << "-ά\n";
        cout << MainWord1 << "-ά\n";
        return;
    }
}

int main()
{
    //first question, asking for the tense
    int Que1 = StartUpQuestion1();
    if(Que1 == 0)
    {return 0;}
    //second questin, asking for word
    string Que2 = StartUpQuestion2();
    //checking if the word has spaces and deleting them
    string CleanWord = CheckSpace(Que2);
    //taking the word and making the "thema"
    string Thema = MakingThema(CleanWord, Que1);
    //separating "kataliksi"
    string Kataliksi = MakingKataliksi(CleanWord, Que1); 
    //understanding ktaliksi
    bool bUnKatal = UnderstandingKataliksi(Kataliksi);
    //adding kataliksi
    if(bUnKatal == true)
    {
        AddingKataliksiTon(Thema,Que1);
    }
    else
    {
        AddingKataliksi(Thema,Que1);
    }
    
//  cout << Que1;                                               // <----- debug line
//  cout << Que2;                                               // <----- debug line
//  cout << CleanWord;                                          // <----- debug line
//  cout << Thema;                                              // <----- debug line 
//  cout << Kataliksi;                                          // <----- debug line 
//  if(bUnKatal == true){cout << "balls";}else{cout << "meat";} // <----- debug line
    
    return 0;
}
