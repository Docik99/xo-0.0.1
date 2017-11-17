#include <iostream>

using namespace std;

void vivod(char pos1, char pos2, char pos3, char pos4, char pos5, char pos6, char pos7, char pos8, char pos9)
{
    cout << "    1   2   3" << endl;
    cout << "  +---+---+---+" << endl;
    cout << "a | " << pos1 << " | " << pos2 << " | " << pos3 << " |" << endl;
    cout << "  +---+---+---+" << endl;
    cout << "b | " << pos4 << " | " << pos5 << " | " << pos6 << " |" << endl;
    cout << "  +---+---+---+" << endl;
    cout << "c | " << pos7 << " | " << pos8 << " | " << pos9 << " |" << endl;
    cout << "  +---+---+---+" << endl;
}
void check(char & pos1, char & pos2, char & pos3, char & pos4, char & pos5, char & pos6, char & pos7, char & pos8, char & pos9)
{
    if (pos1 == pos2 && pos2 == pos3 && pos1 == 'x')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9);
        cout << "X win";
        exit(9);
    }

    if (pos4 == pos5 && pos5 == pos6 && pos4 == 'x')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9);
        cout << "X win";
        exit(9);
    }

    if (pos7 == pos8 && pos8 == pos9 && pos7 == 'x')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9);
        cout << "X win";
        exit(9);
    }

    if (pos1 == pos4 && pos4 == pos7 && pos1 == 'x')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9);
        cout << "X win";
        exit(9);
    }

    if (pos2 == pos5 && pos5 == pos8 && pos2 == 'x')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9);
        cout << "X win";
        exit(9);
    }

    if (pos3 == pos6 && pos6 == pos9 && pos3 == 'x')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9);
        cout << "X win";
        exit(9);
    }

    if (pos1 == pos5 && pos5 == pos9 && pos1 == 'x')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9);
        cout << "X win";
        exit(9);
    }

    if (pos3 == pos5 && pos5 == pos7 && pos3 == 'x')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9);
        cout << "X win";
        exit(9);
    }

    if (pos1 == pos2 && pos2 == pos3 && pos1 == 'o')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9);
        cout << "O win";
        exit(9);
    }

    if (pos4 == pos5 && pos5 == pos6 && pos4 == 'o')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9);
        cout << "O win";
        exit(9);
    }

    if (pos7 == pos8 && pos8 == pos9 && pos7 == 'o')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9);
        cout << "O win";
        exit(9);
    }

    if (pos1 == pos4 && pos4 == pos7 && pos1 == 'o')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9);
        cout << "O win";
        exit(9);
    }

    if (pos2 == pos5 && pos5 == pos8 && pos2 == 'o')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9);
        cout << "O win";
        exit(9);
    }

    if (pos3 == pos6 && pos6 == pos9 && pos3 == 'o')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9);
        cout << "O win";
        exit(9);
    }

    if (pos1 == pos5 && pos5 == pos9 && pos1 == 'o')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9);
        cout << "O win";
        exit(9);
    }

    if (pos3 == pos5 && pos5 == pos7 && pos3 == 'o')
    {
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9);
        cout << "O win";
        exit(9);
    }
}
void change(char & pos1, char & pos2, char & pos3, char & pos4, char & pos5, char & pos6, char & pos7, char & pos8, char & pos9,int cell,int & s)
{
    if (cell == 1 && s % 2 == 0 && pos1 != 'o') {pos1 = 'x';s++;}
    if (cell == 1 && s % 2 != 0 && pos1 != 'x') {pos1 = 'o';s++;}

    if (cell == 2 && s % 2 == 0 && pos2 != 'o') {pos2 = 'x';s++;}
    if (cell == 2 && s % 2 != 0 && pos2 != 'x') {pos2 = 'o';s++;}

    if (cell == 3 && s % 2 == 0 && pos3 != 'o') {pos3 = 'x';s++;}
    if (cell == 3 && s % 2 != 0 && pos3 != 'x') {pos3 = 'o';s++;}

    if (cell == 4 && s % 2 == 0 && pos4 != 'o') {pos4 = 'x';s++;}
    if (cell == 4 && s % 2 != 0 && pos4 != 'x') {pos4 = 'o';s++;}

    if (cell == 5 && s % 2 == 0 && pos5 != 'o') {pos5 = 'x';s++;}
    if (cell == 5 && s % 2 != 0 && pos5 != 'x') {pos5 = 'o';s++;}

    if (cell == 6 && s % 2 == 0 && pos6 != 'o') {pos6 = 'x';s++;}
    if (cell == 6 && s % 2 != 0 && pos6 != 'x') {pos6 = 'o';s++;}

    if (cell == 7 && s % 2 == 0 && pos7 != 'o') {pos7 = 'x';s++;}
    if (cell == 7 && s % 2 != 0 && pos7 != 'x') {pos7 = 'o';s++;}

    if (cell == 8 && s % 2 == 0 && pos8 != 'o') {pos8 = 'x';s++;}
    if (cell == 8 && s % 2 != 0 && pos8 != 'x') {pos8 = 'o';s++;}

    if (cell == 9 && s % 2 == 0 && pos9 != 'o') {pos9 = 'x';s++;}
    if (cell == 9 && s % 2 != 0 && pos9 != 'x') {pos9 = 'o';s++;}

    if (cell == 10) exit(6);
}
int main()
{
    char pos1 = ' ', pos2 = ' ', pos3 = ' ', pos4 = ' ', pos5 = ' ', pos6 = ' ', pos7 = ' ', pos8 = ' ', pos9 = ' ';
    int s = 0, cell, i, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10 ;

    while (pos1 == ' ' || pos2 == ' ' || pos3 == ' ' || pos4 == ' ' || pos5 == ' ' || pos6 == ' ' || pos7 == ' ' || pos8 == ' ' || pos9 == ' ')
    {
        check(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9);
        vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9);

        if (s % 2 == 0)
        {
            if (pos1 == ' '){cout << i << ". mark cell a1 as X\n"; p1 = i; i++;}
            if (pos2 == ' '){cout << i << ". mark cell a2 as X\n"; p2 = i; i++;}
            if (pos3 == ' '){cout << i << ". mark cell a3 as X\n"; p3 = i; i++;}
            if (pos4 == ' '){cout << i << ". mark cell b1 as X\n"; p4 = i; i++;}
            if (pos5 == ' '){cout << i << ". mark cell b2 as X\n"; p5 = i; i++;}
            if (pos6 == ' '){cout << i << ". mark cell b3 as X\n"; p6 = i; i++;}
            if (pos7 == ' '){cout << i << ". mark cell c1 as X\n"; p7 = i; i++;}
            if (pos8 == ' '){cout << i << ". mark cell c2 as X\n"; p8 = i; i++;}
            if (pos9 == ' '){cout << i << ". mark cell c3 as X\n"; p9 = i; i++;}
            cout << i << ". quit\n"; p10 = i;
            i = 1;
        }
        else
        {
            if (pos1 == ' '){cout << i << ". mark cell a1 as O\n"; p1 = i; i++;}
            if (pos2 == ' '){cout << i << ". mark cell a2 as O\n"; p2 = i; i++;}
            if (pos3 == ' '){cout << i << ". mark cell a3 as O\n"; p3 = i; i++;}
            if (pos4 == ' '){cout << i << ". mark cell b1 as O\n"; p4 = i; i++;}
            if (pos5 == ' '){cout << i << ". mark cell b2 as O\n"; p5 = i; i++;}
            if (pos6 == ' '){cout << i << ". mark cell b3 as O\n"; p6 = i; i++;}
            if (pos7 == ' '){cout << i << ". mark cell c1 as O\n"; p7 = i; i++;}
            if (pos8 == ' '){cout << i << ". mark cell c2 as O\n"; p8 = i; i++;}
            if (pos9 == ' '){cout << i << ". mark cell c3 as O\n"; p9 = i; i++;}
            cout << i << ". quit\n"; p10 = i;
            i = 1;
        }
        cin >> cell;

        if (cell == p1) {cell = 1; p1 = 0; p2 = 0; p3 = 0; p4 = 0; p5 = 0; p6 = 0; p7 = 0; p8 = 0; p9 = 0; p10 = 0;}
        if (cell == p2) {cell = 2; p2 = 0; p3 = 0; p4 = 0; p5 = 0; p6 = 0; p7 = 0; p8 = 0; p9 = 0; p10 = 0;}
        if (cell == p3) {cell = 3; p3 = 0; p4 = 0; p5 = 0; p6 = 0; p7 = 0; p8 = 0; p9 = 0; p10 = 0;}
        if (cell == p4) {cell = 4; p4 = 0; p5 = 0; p6 = 0; p7 = 0; p8 = 0; p9 = 0; p10 = 0;}
        if (cell == p5) {cell = 5; p5 = 0; p6 = 0; p7 = 0; p8 = 0; p9 = 0; p10 = 0;}
        if (cell == p6) {cell = 6; p6 = 0; p7 = 0; p8 = 0; p9 = 0; p10 = 0;}
        if (cell == p7) {cell = 7; p7 = 0; p8 = 0; p9 = 0; p10 = 0;}
        if (cell == p8) {cell = 8; p8 = 0; p9 = 0; p10 = 0;}
        if (cell == p9) {cell = 9; p9 = 0; p10 = 0;}
        if (cell == p10) {cell = 10;}

        change(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, cell, s);
    }
    vivod(pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9);
}