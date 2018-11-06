/**********************
 * Flite Text to Speach Program
 * *******************/

#include <iostream>

using namespace std;

//{flite_text_to_speech(const char *text, cst_voice *voice, const char *outtype);}

void sayVersion();
void fliteVersion();

int main(){
    //sayVersion();
    fliteVersion();
    return 0;
}  

void fliteVersion(){
    char c;
    cout << "Input a character.... \n t: Current Time\n n: Group Names \n q: Quit  \n";
    
    while(1){
        cin >> c;
        if(c == 't'){
            system("date | say\n");
        }
        if(c == 'n'){
            system("say Mitchell Stride, Jordan Mayo, Ian Correa.\n");
        }
        if(c == 'q'){
            cout << "Exit\n";
            system("say Exiting Program\n");
            return;
        }
    }
}

void sayVersion(){
    char c;
    cout << "Input a character.... \n t: Current Time\n n: Group Names \n q: Quit  \n";
    
    while(1){
        cin >> c;
        if(c == 't'){
            system("date | say\n");
        }
        if(c == 'n'){
            system("say Mitchell Stride, Jordan Mayo, Ian Correa.\n");
        }
        if(c == 'q'){
            cout << "Exit\n";
            system("say Exiting Program\n");
            return;
        }
    }
}