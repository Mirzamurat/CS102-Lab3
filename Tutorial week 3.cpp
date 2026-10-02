/*
 Part II
A)
1. OK
2. No, since it starts with digit
3. OK
4. C++ keyword
5. Contains space
6. OK
7. "-" isn't allowed
8. OK
9.Ok
10. C++ property

B)
1) int | int students = 24
2) double | double gpa = 3.45
3) char | char SurnameInitial = B
4) bool | bool libriryOpen = trye
5) double | double temperature = 22.5
6) int | int secondInYear = 31536000
7) const double | const double PI = 3.141592
8) long long | long long population = 8100000000LL

C)
1) 3
2) 2
3) 17
4) 3.4
5)-3
6) -2
7) 13
8) -2
9) 3
10) 0
11) 2
12) 7 7 14

D)
1) a = 10, b = 3
2) a = 10, b = 7
3) a = 3, b = 7
4) a = 3, b = 14
5) a = 5, b = 14
6) a = 5, b = -2
&) It swaped, becase of the commands of the line


E)
1)Syntax error:
cout << "Result: " << 42 << endl;
2)
Logic error:
double avg = (a + b + c) / 3.0;
3)Syntax error:
char grade = 'A';
4)Syntax error:
cin >> age;


F)
1) True
2)False
Total and total are different variables because C++ is case-sensitive.
3( False
7 / 2 = 3 because both operands are integers.
4) True
5) False
cin >> name reads only one word, not a whole line with spaces.
6) False
'5' is a char, while 5 is an int.
7) True

G)
1) a
2) c
3) c
4) b
5) b
6) b
7) d


H)
#include <iostream>
#include <string>
using namespace std;

int main() {

 string name;
 int age;
 float height;
 string group;
 bool fullTime;

 cout << "Enter your name, age, height, group, and full-time status: ";
 cin >> name >> age >> height >> group >> fullTime;

 cout <<" --- Student Card ---" << endl;
 cout << "Name: " << name << endl;
 cout << "Age: " << age << endl;
 cout << "Height: " << height << "m" << endl;
 cout << "Group: " << group << endl;
 cout << "Full Time: " << fullTime << endl;
 cout << "Age in months: " << age * 12 << endl;

 return 0;
}


I)
#include <iostream>
using namespace std;

int main() {
 int a, b;

 cout << "Enter two numbers: ";
 cin >> a >> b;

 cout << "Sum: " << a + b << endl;
 cout << "Difference: " << a - b << endl;
 cout << "Product: " << a * b << endl;
 cout << "Quotient: " << a / b << endl;
 cout << "Remainder: " << a % b << endl;
 cout << "Exact; " << 1.0 * a / b << endl;

 return 0;
}


J)
#include <iostream>
using namespace std;

int main() {

    int totalSeconds;
    int days;
    int hours;
    int minutes;
    int seconds;
    int remainingSeconds;

    cout << "Enter seconds: ";
    cin >> totalSeconds;

    days = totalSeconds / 86400;

    remainingSeconds = totalSeconds % 86400;

    hours = remainingSeconds / 3600;

    remainingSeconds = remainingSeconds % 3600;

    minutes = remainingSeconds / 60;

    seconds = remainingSeconds % 60;

    cout << totalSeconds << " s = ";
    cout << days << " d ";
    cout << hours << " h ";
    cout << minutes << " min ";
    cout << seconds << " s" << endl;

    return 0;
}

K)
#include <iostream>
using namespace std;

int main() {

    const int NOTEBOOK = 8000;
    const int PEN = 2500;
    const int CALC = 95000;
    const int VAT_PERCENT = 12;

    int notebookQty;
    int penQty;
    int calcQty;

    int notebookTotal;
    int penTotal;
    int calcTotal;

    int subtotal;
    int vat;
    int total;

    int paid;
    int change;

    cout << "Enter notebook quantity: ";
    cin >> notebookQty;

    cout << "Enter pen quantity: ";
    cin >> penQty;

    cout << "Enter calculator quantity: ";
    cin >> calcQty;

    notebookTotal = notebookQty * NOTEBOOK;
    penTotal = penQty * PEN;
    calcTotal = calcQty * CALC;

    subtotal = notebookTotal + penTotal + calcTotal;

    vat = subtotal * VAT_PERCENT / 100;

    total = subtotal + vat;

    cout << "Notebook x " << notebookQty << " = " << notebookTotal << endl;
    cout << "Pen x " << penQty << " = " << penTotal << endl;
    cout << "Calculator x " << calcQty << " = " << calcTotal << endl;

    cout << "Subtotal: " << subtotal << " so'm" << endl;
    cout << "VAT 12%: " << vat << " so'm" << endl;
    cout << "TOTAL: " << total << " so'm" << endl;

    cout << "Enter amount paid: ";
    cin >> paid;

    change = paid - total;

    cout << "Paid: " << paid << endl;
    cout << "Change: " << change << " so'm" << endl;

    return 0;
}

*/




