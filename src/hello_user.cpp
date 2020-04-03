#include "head.h"
void hello_user()
{
    setlocale(LC_ALL, "RUS");
    cout << "\t\t\t\tЗдравствуйте!" << endl << endl;
    cout << "\t\tДанное приложение очень просто в использовании." << endl;
    cout << "\t\tНо при работе с ним, необходино выполнять следующие условия:"
         << endl
         << endl;
    cout << "\t\t1) Вы вводите строку, которую хотите обработать." << endl;
    cout << "\t\t\tСтрока может состоять из любых символов. Вместь пробела "
            "ставьте '_'"
         << endl;
    cout << "\t\t2) Введите команду для работы с приложением. Она должна "
            "быглядеть так: "
         << endl;
    cout << "\t\t\t1.1) Два символа имени текущего состояния. Изначальное "
            "состояние должно быть '00'."
         << endl;
    cout << "\t\t\t1.2) Символ, который нужно найти в строке." << endl;
    cout << "\t\t\t1.3) Cимвол, на который нужно заменить найденный символ."
         << endl;
    cout << "\t\t\t1.4) Направление движения относительно текущего символа: l "
            "- влево, r - вправо, n - остаться на месте"
         << endl;
    cout << "\t\t\t1.5) Имя следующего состояния, в которое нужно перейти. "
            "Программа завершится, как только встретит имя состояния, равное "
            "'##'."
         << endl;
    cout << "\t\tНапример, пусть исходная строка: qw10" << endl;
    cout << "\t\tИ команды для работы с программой:" << endl;
    cout << "\t\t\t00 q w r 02" << endl;
    cout << "\t\t\t02 w q r 03" << endl;
    cout << "\t\t\t03 1 0 r 04" << endl;
    cout << "\t\t\t04 0 1 r ##" << endl;
    cout << "\t\tПосле выполнения программы будет выведено: wq01" << endl
         << endl;
}
