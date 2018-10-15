#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{




struct studentType
    {
        int IDNo;
        string Name;
        int Age;
        int Gender;
        double Score;
        string Grade;



    } ;
studentType small;
studentType big;
studentType sark;
studentType shatta;
studentType advice;

int i;




(i = 1);
    cout << "Enter ID" <<endl;
    cin >> small.IDNo;

    cout << "enter Name" <<endl;
    cin >> small.Name;

    cout << "Enter Age" <<endl;
    cin >> small.Age;

     cout << "Enter Gender (M =1 or F = 2)"<<endl;
    cin >> small.Gender;

    cout << "Enter Score" <<endl;
    cin >> small. Score;

    cout << "Next\n" <<endl;

(i = 2);

    cout << "Enter ID" <<endl;
    cin >> big.IDNo;

    cout << "enter Name" <<endl;
    cin >> big.Name;

    cout << "Enter Age" <<endl;
    cin >> big.Age;

     cout << "Enter Gender (M =1 or F = 2)"<<endl;
    cin >> big.Gender;

    cout << "Enter Score" <<endl;
    cin >> big.Score;

    cout << "Next\n" <<endl;

(i = 3);
    cout << "Enter ID" <<endl;
    cin >> sark.IDNo;

    cout << "enter Name" <<endl;
    cin >> sark.Name;

    cout << "Enter Age" <<endl;
    cin >> sark.Age;

    cout << "Enter Gender (M =1 or F = 2)"<<endl;
    cin >> sark.Gender;

    cout << "Enter Score" <<endl;
    cin >> sark.Score;

    cout << "Next\n" <<endl;



(i = 4);
    cout << "Enter ID" <<endl;
    cin >> shatta.IDNo;

    cout << "enter Name" <<endl;
    cin >> shatta.Name;

    cout << "Enter Age" <<endl;
    cin >> shatta.Age;

    cout << "Enter Gender (M =1 or F = 2)"<<endl;
    cin >> shatta.Gender;

    cout << "Enter Score" <<endl;
    cin >> shatta.Score;

    cout << "Next\n" <<endl;


(i = 5);
    cout << "Enter ID" <<endl;
    cin >> advice.IDNo;

    cout << "enter Name" <<endl;
    cin >> advice.Name;

    cout << "Enter Age" <<endl;
    cin >> advice.Age;

    cout << "Enter Gender (M =1 or F = 2)"<<endl;
    cin >> advice.Gender;

    cout << "Enter Score" <<endl;
    cin >> small.Score;






     double m;
string q;


 if (i = 1){
    q = small.Grade;
    m = small.Score;
 }
    else if (i = 2)
        {
    q = big.Grade;
    m = big.Score;
    }
    else if(i = 3)
    {
    q = sark.Grade;
    m = sark.Score;
    }
    else if (i = 4)
    {
        q = shatta.Grade;
        m = shatta.Score;
    }
        else if (i = 5)
        {
        q = advice.Grade;
        m = advice.Score;
 }

    if (m <= 39)
        q = "F";

   else if (m <=49 && m >=40)
      q = "E";


 else   if (m <=59 && m >=50)
        q = "D";


  else  if (m <=69 && m >=60)
       q = "C";


 else   if (m <=79 && m >=70)
       q = "B";


else    if (m >=80 && m <= 100)
        q = "A";









 cout << " Id " << "  " << " Name " << "  " << " Age " << "  " <<  " Gender "  << "  " <<  " Score " << "  " <<  " Grade "  <<endl;
    cout << "************************************************************************************" <<endl;




cout <<  small.IDNo << "  " << small.Name << "  " << small.Age << "   " << small.Gender  << "   " <<  small.Score << "   " << q <<endl;
cout <<  big.IDNo << "  " << big.Name << "  " << big.Age << "   " << big.Gender  << "   " <<  big.Score << "   " << q <<endl;
cout <<  sark.IDNo << "  " << sark.Name << "  " << sark.Age << "   " << sark.Gender  << "   " <<  sark.Score << "   " << q <<endl;
cout <<  shatta.IDNo << "  " << shatta.Name << "  " << shatta.Age << "   " << shatta.Gender  << "   " <<  shatta.Score << "   " << q <<endl;
cout <<  advice.IDNo << "  " << advice.Name << "  " << advice.Age << "   " << advice.Gender  << "   " <<  advice.Score << "   " << q <<endl;



cout  << "**********************************************************************************************************" <<endl;

double averageScore = (small.Score + big.Score + sark.Score + shatta.Score + advice.Score)/5;
cout << "AVERAGE SCORE:" << averageScore <<endl;
double averageAge = (small.Age + big.Age + sark.Age + shatta.Age + advice.Age)/5;
cout << "AVERAGE AGE:" << averageAge << endl;


int MaleCount;
int FemaleCount;

if
    (advice.Gender,big.Gender, small.Gender,sark.Gender,shatta.Gender == 1 )
MaleCount = MaleCount + 1;

else if (advice.Gender,big.Gender, small.Gender,sark.Gender,shatta.Gender == 2 )
    FemaleCount = FemaleCount + 1;

cout << "MALE COUNT:" << MaleCount <<endl;
cout << "FEMALE COUNT:" << FemaleCount <<endl;






























    return 0;
}
