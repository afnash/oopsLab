#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;
int main()
{
    //string filename = "numbers.txt";
    ifstream file("numbers.txt");
    if (file.is_open())
    {
        double sum = 0;
        int count = 0;
        string line;
        while (getline(file, line))
        {
            stringstream ss(line);
            double number;
            while (ss >> number)
            {
                sum = sum + number;
                count++;
            }
        }
        file.close();
        if (count == 0)
        {
            cout << "no numbers in the file" << endl;
        }
        else
        {
            double average = sum / count;
            cout << "the average of the numbers :" << average << endl;
        }
    }
    else
    {
        cout << "not able to open the file";
    }

    return 0;
}