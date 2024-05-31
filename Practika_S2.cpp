#include "Practika_S2.h"
#include <locale>

using namespace std;

int LEN = 0;
Film film[30];

void FromTxt(Film a[])
{
    ifstream fin;
    fin.open("text.txt");
    string temp{};
    vector<string> line;
    if (fin.is_open())
    {
        while (getline(fin, temp))
        {
            line = customSplit(temp, '|');
            a[LEN].id = stoi(line[0]);
            a[LEN].genre = line[1];
            a[LEN].name = line[2];
            a[LEN].producer = line[3];
            a[LEN].country = line[4];
            a[LEN].year = stoi(line[5]);
            a[LEN].rating = stoi(line[6]);
            a[LEN].actor = line[7];
            a[LEN].cost = stoi(line[8]);
            a[LEN].boxOffice = stoi(line[9]);
            LEN++;
        }
    }
    fin.close();
}

static vector<string> customSplit(string str, char separator) {
    int startIndex = 0, endIndex = 0;
    vector <string> strings;
    for (int i = 0; i <= str.size(); i++) {
        if (str[i] == separator || i == str.size()) {
            endIndex = i;
            string temp;
            temp.append(str, startIndex, endIndex - startIndex);
            strings.push_back(temp);
            startIndex = endIndex + 1;
        }
    }
    return strings;
}


void ToTxt(Film a[])
{
    ofstream fout;
    fout.open("text.txt");
    for (int i = 0; i < LEN; i++)
    {
        fout << a[i].id << "|" << a[i].genre << "|" << a[i].name << "|" << a[i].producer << "|" << a[i].country << "|" << a[i].year << "|" << a[i].rating << "|" << a[i].actor << "|" << a[i].cost << "|" << a[i].boxOffice << "\n";
    }
    fout.close();
}


Film* SortYearUp(Film a[])
{
    Film temp{};
    for (int i = 0; i < LEN; i++)
    {
        for (int j = i + 1; j < LEN; j++)
        {
            if (a[i].year > a[j].year)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return a;
}


Film* SortYearDown(Film a[])
{
    Film temp{};
    for (int i = 0; i < LEN; i++)
    {
        for (int j = i + 1; j < LEN; j++)
        {
            if (a[i].year < a[j].year)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return a;
}

Film* SortRatingUp(Film a[])
{
    Film temp{};
    for (int i = 0; i < LEN; i++)
    {
        for (int j = i + 1; j < LEN; j++)
        {
            if (a[i].rating > a[j].rating)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return a;
}

Film* SortRatingDown(Film a[])
{
    Film temp{};
    for (int i = 0; i < LEN; i++)
    {
        for (int j = i + 1; j < LEN; j++)
        {
            if (a[i].rating < a[j].rating)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return a;
}

int* TopNum(Film a[])
{
    int* array = new int[5];
    Film temp{};
    for (int i = 0; i < LEN; i++)
    {
        for (int j = i + 1; j < LEN; j++)
        {
            if (a[i].boxOffice < a[j].boxOffice)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        array[i] = a[i].boxOffice;
    }
    return array;
}

string* TopName(Film a[])
{
    string* array = new string[5];   
    Film temp{};
    for (int i = 0; i < LEN; i++)
    {
        for (int j = i + 1; j < LEN; j++)
        {
            if (a[i].boxOffice < a[j].boxOffice)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        array[i] = a[i].name;
    }
    return array;
}

bool NumInString(string a)
{
    setlocale(0, "");
    bool Flag = false;
    for (int i{}; i < a.length(); i++)
    {
        if (std::isalpha(a[i], std::locale("ru_RU")))
        {
            Flag = true;
            break;
        }
        else if (ispunct(a[i]))
        {
            Flag = true;
            break;
        }
    }
    return Flag;
}