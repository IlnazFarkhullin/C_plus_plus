

#include <iostream> //подключаем библиотеку ввода-вывода
using namespace std; //используем пространство имён стандартные функции

 int main()// основная функция. Главный метод
{
   // cout << "Hello World!\n\n"; // cout- вывод данных в консоль
   

    //int a, b; //объявление переменных
    //    cin >>  a >> b; // ввод чисел через консоль
    //    
    //    cout << a << "+" << b << "=";// красивый вывод данных
    //    cout << a + b<< endl; // endl - переход на новую строку 
    //    cout << a << "-" << b << "=";// красивый вывод данных
    //    cout << a - b << endl;



        //Программа для округления числа вверх
        //int a, b;
      //  cin >> a >> b;
      //  cout << (a + b - 1) / b;

                                                               //УСЛОВНЫЙ ОПЕРАТОРЫ
    /* int a,b;
     cin >> a >>b;
     if (a==b)
     {
         cout << "Yes";
     }
     else
     {
         cout << "No";
     }*/


                                                             // ЦИКЛ while
     //Вывод минимальног числа
   /*  int min, now;
     cin >> now;
     min = now;
     while (now !=0)
     {
         if (now < min)
         {
             min = now;
         }
         cin >> now;
     }
     cout << min;*/



     /*int sum=0, now;
     cin >> now;
     while (now !=0)
     {
         sum = sum + now;
         cin >> now;

     }
     cout << sum;*/

     int p1, p2;
     cin >> p1 >> p2;
     int s1 = 0, s2 = 0;
     while (p1 !=0)
     {
         s1 = s1 + p1 % 10;
         p1 = p1 / 10;
     }

     while (p2 !=0)
     {
         s2 = s2 + p2 % 10;
         p2 = p1 / 10;
     }
     if (s1 ==s1)
     {
         cout << ":)";
     }
     else
     {
         cout << ":(";
     }
}

