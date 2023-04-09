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
    cout << "Input array size: ";
    int arrSize;
    cin >> arrSize;
    int arr[arrSize];

    for (int index = 0; index < arrSize; index++){
        arr[index] = 1 + rand() % 100;
    }

    int maxElement;

    if(arr[0] % 2 == 0){
        maxElement = arr[0];

        for (int index = 0; index < arrSize; index++){
            if(arr[index] % 2 == 0 && arr[index] > maxElement){
                maxElement = arr[index];
            }
        }
        cout << "Найбільший парний елемент = "<< maxElement << endl;
    } else {
        cout << "Перший елемент не є парним: " << arr[0] << endl;
    }
}
void TaskThree(){
    int arraySize = 1 + rand() % 200;
    
    int arrA[arraySize];

    for(int index = 0; index < arraySize; index++){
        arrA[index] = rand() % 100;
    }

    int coutOfNum = 0;
    for(int index = 0; index < arraySize; index++){
        arrA[index] = rand() % 100;
        int D = 3 * arrA[index] - 4 * 5;
        int x1 = (-(3 * arrA[index]) + sqrt(D))/2; 
        int x2 = (-(3 * arrA[index]) + sqrt(D))/2; 

        if(x1 > 0 && x2 > 0){
            coutOfNum++;
        }
    }

    cout << "countOfNum: " << coutOfNum << endl;

    int arrB[coutOfNum];
    int indexB = 0;
    for (int index = 0; index < arraySize; index++){
        arrA[index] = rand() % 100;
        int D = 3 * arrA[index] - 4 * 5;
        int x1 = (-(3 * arrA[index]) + sqrt(D))/2; 
        int x2 = (-(3 * arrA[index]) + sqrt(D))/2; 

        if(x1 > 0 && x2 > 0){
            arrB[indexB] = arrA[index]; 
            indexB++;
        }
    }

    cout << "Array: ";
    for (int index = 0; index < coutOfNum; index++){
        cout << arrB[index]<< "  ";
    }
    
    cout << "\n\n";

}