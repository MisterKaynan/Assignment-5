#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

struct studentType //-------------- #It's not by might kraa. Struct helped alongside array to give the program some form.
    {
        int IDNo[5];
        string Name[5];
        int Age[5];
        int Gender[5];
        double Score[5];
        string Grade[5];



    } ;


int main()
{



int sh;
int MaleCount;
int FemaleCount;
studentType sark;   // -------- Since He gave sh some Advice :)
double m;






for (sh = 1; sh < 6; sh = sh+1)
    {
    cout << "Enter ID" <<endl;
    cin >> sark.IDNo[sh];

    cout << "enter Name" <<endl;
    cin >> sark.Name[sh];

    cout << "Enter Age" <<endl;
    cin >> sark.Age[sh];

    cout << "Enter Gender (M =1 or F = 2)"<<endl;
    cin >> sark.Gender[sh];

    cout << "Enter Score" <<endl;
    cin >> sark.Score[sh];

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;







double m = sark.Score[sh];
string q =  sark.Grade[sh];

    if(m <= 39){
       q = "F";
    }
   else if  (m <=49 && m >=40)
   {
     q = "E";
   }


 else   if (m <=59 && m >=50)
 {
   q = "D";
 }


  else  if (m <=69 && m >=60)
  {
   q = "C";
  }


 else if  (m <=79 && m >=70)
 {
  q = "B";
 }


else if (m >=80 && m <= 100)
{
 q = "A";
}
    }
    cout << endl;
if (sark.Gender[sh] ==  1  )
{

MaleCount = MaleCount + 1;
}

else if (sark.Gender[sh] != 1  )
    {

    FemaleCount = FemaleCount + 1;
}






 cout << " Id " << "  " << " Name " << "  " << " Age " << "  " <<  " Gender "  << "  " <<  " Score " << "  " <<  " Grade "  <<endl;
    cout << "************************************************************************************" <<endl;
string q =  sark.Grade[sh];
double averageScore;
double averageAge;


for ( sh =1; sh < 6; sh = sh++)
{

double averageScore = (averageScore + sark.Score[sh])/5;
double averageAge = (averageAge+ sark.Age[sh])/5;


cout <<  sark.IDNo[sh] << "  " << sark.Name[sh] << "  " << sark.Age[sh] << "   " << sark.Gender[sh]  << "   " <<  sark.Score[sh] << "   " << q;
    cout <<endl;

}


cout  << "**********************************************************************************************************" <<endl;


cout << "AVERAGE SCORE:" << averageScore <<endl;
cout << "AVERAGE AGE:" << averageAge << endl;


cout << "MALE COUNT:" << MaleCount <<endl;
cout << "FEMALE COUNT:" << FemaleCount <<endl;





ofstream a5_10672622;
a5_10672622.open("Codes And Jams.txt", ios::app);


a5_10672622 << " Id " << "  " << " Name " << "  " << " Age " << "  " <<  " Gender "  << "  " <<  " Score " << "  " <<  " Grade "  <<endl;
a5_10672622 << "************************************************************************************" <<endl;
for ( sh =1; sh < 6; sh = sh++)
{

double averageScore = (averageScore + sark.Score[sh])/5;
double averageAge = (averageAge+ sark.Age[sh])/5;


a5_10672622 <<  sark.IDNo << "  " << sark.Name << "  " << sark.Age << "   " << sark.Gender  << "   " <<  sark.Score << "   " << q;
    a5_10672622 <<endl;

}


a5_10672622  << "**********************************************************************************************************" <<endl;


a5_10672622 << "AVERAGE SCORE:" << averageScore <<endl;
a5_10672622 << "AVERAGE AGE:" << averageAge << endl;


a5_10672622 << "MALE COUNT:" << MaleCount <<endl;
a5_10672622 << "FEMALE COUNT:" << FemaleCount <<endl;
a5_10672622.close();









 return 0;
}
