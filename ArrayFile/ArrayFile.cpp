#include<iostream>
#include <time.h>
#include <math.h>

using namespace std;

void ShowMainMenu();

void TaskFirst();
void TaskSecond();
void TaskThree();

int main(){
    srand(time(NULL));

    int num;
    
    while (true){
        ShowMainMenu();
        cin >> num;

        switch (num)
        {
        case 1:
            TaskFirst();
            break;
        case 2:
            TaskSecond();
            break;
        case 3:
            TaskThree();
            break;
        case 4:
            return 0;
            break;
        default:
            cout << "Такого пункта нема" << endl;
            break;
        }
    }
    

    return 0;
}

void ShowMainMenu()
{
    cout << "    Main Menu  \n";
    cout << "    1.  Task 1  \n";
    cout << "    2.  Task 2  \n";
    cout << "    3.  Task 3  \n";
    cout << "    4.  Exit 4  \n";
}

void TaskFirst(){
    int arrSize;
    cout << "Input array size: ";
    cin >> arrSize;

    int arrayA[arrSize];
    int arrayB[arrSize];
    int arrayC[arrSize];

    for (int index = 0; index < arrSize; index++){
        arrayA[index] = 1 + rand() % 100;
    }
    for (int index = 0; index < arrSize; index++){
        arrayB[index] = 1 + rand() % 100;
    }
    
    for (int index = 0; index < arrSize; index++){
        arrayC[index] = arrayA[index] * arrayB[index];
    }

    for (int index = 0; index < arrSize; index++){
        cout << arrayC[index] << "\t";
    }
}
void TaskSecond(){

}
void TaskThree(){

}