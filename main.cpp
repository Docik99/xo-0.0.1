#include <iostream>

using namespace std;

void vivod(char sym1, char sym2, char sym3, char sym4, char sym5, char sym6, char sym7, char sym8, char sym9) {
    cout << "    1   2   3" << endl;
    cout << "  +---+---+---+" << endl;
    cout << "a | " << sym1 << " | " << sym2 << " | " << sym3 << " |" << endl;
    cout << "  +---+---+---+" << endl;
    cout << "b | " << sym4 << " | " << sym5 << " | " << sym6 << " |" << endl;
    cout << "  +---+---+---+" << endl;
    cout << "c | " << sym7 << " | " << sym8 << " | " << sym9 << " |" << endl;
    cout << "  +---+---+---+" << endl;
}
void check(char & sym1, char & sym2, char & sym3, char & sym4, char & sym5, char & sym6, char & sym7, char & sym8, char & sym9) {
    if (sym1 == sym2 && sym2 == sym3 && sym1 == 'x') {
        vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
        cout << "x win";
        cin.get(); cin.get();
        exit(0);
    }
    if (sym4 == sym5 && sym5 == sym6 && sym4 == 'x') {
        vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
        cout << "x win";
        cin.get(); cin.get();
        exit(0);
    }
    if (sym7 == sym8 && sym8 == sym9 && sym7 == 'x') {
        vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
        cout << "x win";
        cin.get(); cin.get();
        exit(0);
    }
    if (sym1 == sym4 && sym4 == sym7 && sym1 == 'x') {
        vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
        cout << "x win";
        cin.get(); cin.get();
        exit(0);
    }
    if (sym2 == sym5 && sym5 == sym8 && sym2 == 'x') {
        vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
        cout << "x win";
        cin.get(); cin.get();
        exit(0);
    }
    if (sym3 == sym6 && sym6 == sym9 && sym3 == 'x') {
        vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
        cout << "x win";
        cin.get(); cin.get();
        exit(0);
    }
    if (sym1 == sym5 && sym5 == sym9 && sym1 == 'x') {
        vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
        cout << "x win";
        cin.get(); cin.get();
        exit(0);
    }
    if (sym3 == sym5 && sym5 == sym7 && sym3 == 'x') {
        vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
        cout << "x win";
        cin.get(); cin.get();
        exit(0);
    }
    if (sym1 == sym2 && sym2 == sym3 && sym1 == 'o') {
        vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
        cout << "o win";
        cin.get(); cin.get();
        exit(0);
    }
    if (sym4 == sym5 && sym5 == sym6 && sym4 == 'o') {
        vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
        cout << "o win";
        cin.get(); cin.get();
        exit(0);
    }
    if (sym7 == sym8 && sym8 == sym9 && sym7 == 'o') {
        vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
        cout << "o win";
        cin.get(); cin.get();
        exit(0);
    }
    if (sym1 == sym4 && sym4 == sym7 && sym1 == 'o') {
        vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
        cout << "o win";
        cin.get(); cin.get();
        exit(0);
    }
    if (sym2 == sym5 && sym5 == sym8 && sym2 == 'o') {
        vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
        cout << "o win";
        cin.get(); cin.get();
        exit(0);
    }
    if (sym3 == sym6 && sym6 == sym9 && sym3 == 'o') {
        vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
        cout << "o win";
        cin.get(); cin.get();
        exit(0);
    }
    if (sym1 == sym5 && sym5 == sym9 && sym1 == 'o') {
        vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
        cout << "o win";
        cin.get(); cin.get();
        exit(0);
    }
    if (sym3 == sym5 && sym5 == sym7 && sym3 == 'o') {
        vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
        cout << "o win";
        cin.get(); cin.get();
        exit(0);
    }
}
void change(char & sym1, char & sym2, char & sym3, char & sym4, char & sym5, char & sym6, char & sym7, char & sym8, char & sym9,char cell,int & s) {
    if (cell == 1 && s % 2 == 0 && sym1 != 'o') {sym1 = 'x';s++;}  if (cell == 1 && s % 2 != 0 && sym1 != 'x') {sym1 = 'o';s++;}
    if (cell == 2 && s % 2 == 0 && sym2 != 'o') {sym2 = 'x';s++;}  if (cell == 2 && s % 2 != 0 && sym2 != 'x') {sym2 = 'o';s++;}
    if (cell == 3 && s % 2 == 0 && sym3 != 'o') {sym3 = 'x';s++;}  if (cell == 3 && s % 2 != 0 && sym3 != 'x') {sym3 = 'o';s++;}
    if (cell == 4 && s % 2 == 0 && sym4 != 'o') {sym4 = 'x';s++;}  if (cell == 4 && s % 2 != 0 && sym4 != 'x') {sym4 = 'o';s++;}
    if (cell == 5 && s % 2 == 0 && sym5 != 'o') {sym5 = 'x';s++;}  if (cell == 5 && s % 2 != 0 && sym5 != 'x') {sym5 = 'o';s++;}
    if (cell == 6 && s % 2 == 0 && sym6 != 'o') {sym6 = 'x';s++;}  if (cell == 6 && s % 2 != 0 && sym6 != 'x') {sym6 = 'o';s++;}
    if (cell == 7 && s % 2 == 0 && sym7 != 'o') {sym7 = 'x';s++;}  if (cell == 7 && s % 2 != 0 && sym7 != 'x') {sym7 = 'o';s++;}
    if (cell == 8 && s % 2 == 0 && sym8 != 'o') {sym8 = 'x';s++;}  if (cell == 8 && s % 2 != 0 && sym8 != 'x') {sym8 = 'o';s++;}
    if (cell == 9 && s % 2 == 0 && sym9 != 'o') {sym9 = 'x';s++;}  if (cell == 9 && s % 2 != 0 && sym9 != 'x') {sym9 = 'o';s++;}
    if (cell == 10) exit(0);
}
int main() {
    char sym1 = ' '; char sym2 = ' '; char sym3 = ' '; char sym4 = ' '; char sym5 = ' ';
    char sym6 = ' '; char sym7 = ' '; char sym8 = ' '; char sym9 = ' '; int s = 0; int cell; int i = 1;
    while (sym1 == ' ' || sym2 == ' ' || sym3 == ' ' || sym4 == ' ' || sym5 == ' ' || sym6 == ' ' || sym7 == ' ' || sym8 == ' ' || sym9 == ' ') {
        check(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
        vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);

        if (s % 2 == 0){
            if (sym1 == ' '){cout << i << ". mark cell a1 as X\n"; i++;}
            if (sym2 == ' '){cout << i << ". mark cell a2 as X\n"; i++;}
            if (sym3 == ' '){cout << i << ". mark cell a3 as X\n"; i++;}
            if (sym4 == ' '){cout << i << ". mark cell b1 as X\n"; i++;}
            if (sym5 == ' '){cout << i << ". mark cell b2 as X\n"; i++;}
            if (sym6 == ' '){cout << i << ". mark cell b3 as X\n"; i++;}
            if (sym7 == ' '){cout << i << ". mark cell c1 as X\n"; i++;}
            if (sym8 == ' '){cout << i << ". mark cell c2 as X\n"; i++;}
            if (sym9 == ' '){cout << i << ". mark cell c3 as X\n"; i++;}
            cout << i << ". quit\n";
            i = 1;
        }
        else {
            if (sym1 == ' '){cout << i << ". mark cell a1 as O\n"; i++;}
            if (sym2 == ' '){cout << i << ". mark cell a2 as O\n"; i++;}
            if (sym3 == ' '){cout << i << ". mark cell a3 as O\n"; i++;}
            if (sym4 == ' '){cout << i << ". mark cell b1 as O\n"; i++;}
            if (sym5 == ' '){cout << i << ". mark cell b2 as O\n"; i++;}
            if (sym6 == ' '){cout << i << ". mark cell b3 as O\n"; i++;}
            if (sym7 == ' '){cout << i << ". mark cell c1 as O\n"; i++;}
            if (sym8 == ' '){cout << i << ". mark cell c2 as O\n"; i++;}
            if (sym9 == ' '){cout << i << ". mark cell c3 as O\n"; i++;}
            cout << i << ". quit\n";
            i = 1;
        }

        cin >> cell;
        change(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9, cell, s);
    }
    vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
    cin.get(); cin.get();
}