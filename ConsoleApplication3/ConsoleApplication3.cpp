#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "");
    /*int a, b = 0;
    cout << "\tВведите любое A: ";
    cin >> a;
    for (int i = a; i <= 500; i++){
        b = b + a;
    }
    cout << "\n\t Сумма целых чисел от А до 500 равна: " << b << "\n";*/
    

    /*int x, y;
    cout << "\n\tВведите значение X: ";
    cin >> x; 
    cout << "\n\tВведите значение Y: ";
    cin >> y;
    int nsave = x;
    for (int i = 1; i < y; i++)
    {
        x *= nsave;
    }
    cout << "\n\tЗначение Х в степени Y = " << x <<"\n";*/


    /*float z = 0;
    for (int i = 1; i <= 1000; i++) {
        z = (z + i);
    }
    z = z / 1000;
    cout << "\n\tСреднее арифметическое диапазона от 0 до 1000 равно = " << z;*/


    /*double z = 0;
    int NUM = 20;
    cin >> z;
    for (int i = 1; i <= NUM; i++) {
        z *= i;
    }
    z = z / NUM;
    cout << "\n\tПроизведение чисел от А до 20 равно = " << z;*/
 

    /*int arr[10];
    int num = 0;
    cout << "\n\tВведите число: ";
    cin >> num;
    for (int i = 0; i <= 10; i++){
        num *= arr[10];
        cout << num << "*" << arr << "=" << num;
    }*/


    /*int numSum;
    int tabl[10][3];
    cout << "\n\tВведите число что бы вывести таблицу умножения: ";
    cin >> numSum;
    for (int i = 0; i < 10; i++)
    {
        tabl[i][0] = i + 1;
        tabl[i][1] = numSum;
        tabl[i][2] = tabl[i][0] * tabl[i][1];
    }
    for (int i = 0; i < 10; i++)
    {
    cout << tabl[i][0] << " * " << tabl[i][1] << " = " << tabl[i][2] << "\n";
    }*/

    /*int userNum;
    cout << "Введите число: ";
    cin >> userNum;
    for (int i = 0; i < userNum; i++) {
        cout << "Числова от 0 до " << userNum << "  " << i << "\n";
    }*/

    /*int numberUserOne;
    int numberUserLast;
    cout << "\n\tВведите начальное число диапазона: ";
    cin >> numberUserOne;
    cout << "\n\tВведите последнее число диапазона: ";
    cin >> numberUserLast;
        if (numberUserOne >= numberUserLast) {
            cout << "\n\tНачальное число не может быть больше последнего!";
        }
        for (int i = numberUserOne; i < numberUserLast + 1; i++) {
            cout << i << ", ";
        }*/

    /*int numberUserOne;
    int numberUserLast;
    int num1;
    cout << "\n\tВведите начальное число диапазона: ";
    cin >> numberUserOne;
    cout << "\n\tВведите последнее число диапазона: ";
    cin >> numberUserLast;
    if (numberUserOne >= numberUserLast) {
        cout << "\n\tНачальное число не может быть больше последнего!";
    }
    for (int i = numberUserOne; i < numberUserLast + 1; i += 7) {
        if (i % 2 == 0) {
            cout << "\n\tЧетные числа из диапазона: " << i;//ЧЕТНЫЕ
        }
        else if (i % 2 != 0) {
            cout << "\n\tНечетные числа из диапазона: " << i;//НЕЧЕТНЫЕ
        }
    cout << "\n\tЧисла кратные семи, из диапазона: " << i; */

    /*int numberUserOne;
    int numberUserLast;
    int sum = 0;
    cout << "\n\tВведите начальное число диапазона: ";
    cin >> numberUserOne;
    cout << "\n\tВведите последнее число диапазона: ";
    cin >> numberUserLast;
    if (numberUserOne >= numberUserLast) {
        cout << "\n\tНачальное число не может быть больше последнего!";
    }
    for (int i = numberUserOne; i < numberUserLast + 1; i++) {
        sum += i;
    }
    cout<< "\t" << sum;*/

    int num;
    int sum = 0;
    do {
        cout << "\n\tВведите первое число: ";
        cin >> num;
        sum += num;
    } while (num != 0); {
        cout << "\t" << sum;
        cout << "\n\tСпасибо что воспользовались нашей программой!";
    }
}
        
        

        
            
   
            
            

   
    



    



