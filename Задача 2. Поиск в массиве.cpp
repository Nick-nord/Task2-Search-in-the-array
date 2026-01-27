// Задача 2. Поиск в массиве.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
int NumberElements(int* Arr, int SIZE, int ref_point);

int main()
{
    int Arr[9] = {14, 16, 19, 32, 32, 32, 56, 69, 72};
    int SIZE = std::size(Arr);

    int ref_point;
    std::cout << "Enter a reference point: ";
    std::cin >> ref_point;
    std::cout << "The number of elements in the array is greater than " << ref_point << ": " << NumberElements(Arr, SIZE, ref_point);

    return EXIT_SUCCESS;
}

int NumberElements(int* Arr, int SIZE, int ref_point)
{
    int Number_Elements{ 0 };
    int low = 0;
    int high = SIZE-1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2; 
        if ((ref_point <= Arr[mid]) && (ref_point > Arr[mid-1]))
        {
            return Number_Elements = SIZE-mid;
        }
        if (ref_point > Arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return Number_Elements;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
