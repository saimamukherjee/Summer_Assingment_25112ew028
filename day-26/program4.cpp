#include <iostream>
#include <string>
using namespace std;
struct Question{
    string text;
    string options[4];
    int correctOption;
};
int main(){
    const int TOTAL_QUESTIONS = 3;
    Question quiz[TOTAL_QUESTIONS] = {
        {
            "what is the capital of France?",
            {"1. berlin", "2. madrid", "3.paris", "4.rome"},
            3
        },
        {
            "which programming language is this?",
            {"1.python", "2.c++", "3.java", "4.c#"},
            2
        },
        {
            "what is 3 + 8?",
            {"1.10", "2.11", "3.22", "4.13"},
            2
        }
    };
    int score = 0;
    int userchoice;
    cout << "welcome to the quiz application";
    for(int i = 0; i < TOTAL_QUESTIONS; i++){
        cout << "\nQ" << (i+1) << " : " << quiz[i].text << endl;
        for(int j = 0; j < 4; j++){
            cout<< quiz[i].options[j] << endl;
        }
        cout << "enter your choice (1-4):";
        cin >> userchoice;
        if(userchoice < 1 || userchoice > 4){
            cout << "invalid choice! marking as incorrect." << endl;
            continue;
        }
        if(userchoice == quiz[i].correctOption){
            cout << "correct!" << endl;
            score++;
        }
        else{
            cout << "wrong!the correct answer was option " << quiz[i].correctOption << "." << endl;
        }
    }
    cout << "\n-- quiz over --" << endl;
    cout << "your final score:" << score << "/" << TOTAL_QUESTIONS << endl;
    return 0;
}


